/**************************************************************************/
/*! 
    @file     main.c
    @author   K. Townsend (microBuilder.eu)

    @section LICENSE

    Software License Agreement (BSD License)

    Copyright (c) 2011, microBuilder SARL
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holders nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**************************************************************************/
#include "projectconfig.h"
#include "sysinit.h"

#include "core/gpio/gpio.h"
#include "core/systick/systick.h"
#include "core/ssp/ssp.h"

const uint32_t vskip = 3*8*2;

uint32_t vline = 0;
uint32_t vpix = 0;

uint32_t w = 32;

uint8_t vfb[32*24];

const unsigned char pattern[] = {
	0x00,0xff,0xff,0x55,0x00,0x99,0xfb,0x24,0x0a,0x00,0x00,0xee,0x10,0x00,0x00,0x00,0x00,0x00,0xc0,0xff,0x00,0x00,0x00,0x03,0x00,0x03,0xc0,0x60,0x10,0x10,0x10,0x10,0x00,0x10,0x28,0x28,0x10,0x60,0x20,0x08,0x08,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x38,0x10,0x38,0x38,0x18,0x7c,0x38,0x7c,0x38,0x38,0x00,0x00,0x08,0x00,0x20,0x38,0x38,0x38,0x78,0x38,0x78,0x7c,0x7c,0x38,0x44,0x38,0x1c,0x44,0x40,0x44,0x44,0x38,0x78,0x38,0x78,0x38,0x7c,0x44,0x44,0x44,0x44,0x44,0x7c,0x38,0x00,0x38,0x10,0x00,0x20,0x00,0x40,0x00,0x04,0x00,0x18,0x00,0x40,0x10,0x08,0x20,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x60,0x00,0xa0,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0xff,0xff,0x80,0x01,0x44,0x00,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x04,0x10,0x10,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x40,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x70,0x18,0x18,0x18,0x18,0x10,0x00,0x38,0x10,0x3c,0x3c,0x24,0x18,0x24,0x3c,0x0c,0x3c,0x18,0x00,0x10,0x7c,0x08,0x1c,0x00,0x00,0x00,0x18,0x00,0x00,0x18,0x00,0x18,0x04,
	0x00,0xff,0xaa,0xaa,0x55,0x5a,0xfb,0x18,0x04,0x00,0x04,0xba,0x42,0x7e,0x7e,0x7e,0x7e,0x3c,0xc0,0xff,0x00,0x3c,0x3c,0x03,0x00,0x07,0xe0,0x6c,0x20,0x08,0x38,0x10,0x00,0x10,0x28,0x28,0x3c,0x64,0x50,0x10,0x10,0x10,0x54,0x10,0x00,0x00,0x00,0x00,0x44,0x30,0x44,0x44,0x28,0x40,0x40,0x44,0x44,0x44,0x00,0x00,0x10,0x00,0x10,0x44,0x44,0x44,0x24,0x44,0x24,0x40,0x40,0x44,0x44,0x10,0x08,0x48,0x40,0x6c,0x64,0x44,0x44,0x44,0x44,0x44,0x10,0x44,0x44,0x44,0x44,0x44,0x04,0x20,0x00,0x08,0x28,0x00,0x10,0x00,0x40,0x00,0x04,0x00,0x20,0x00,0x40,0x00,0x00,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x00,0x40,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0xfe,0x7f,0xc0,0x03,0x28,0x00,0x08,0x00,0x00,0x00,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x06,0x7e,0x7c,0x04,0x10,0x10,0x3e,0x20,0x00,0x44,0x70,0x7e,0x40,0x42,0x3e,0x38,0x52,0x7c,0x40,0x08,0x00,0x7e,0x7e,0x02,0x28,0x40,0x7e,0x00,0x10,0xfe,0x70,0x10,0x02,0x7c,0x20,0x00,0x7c,0x7e,0x44,0x50,0x20,0x7e,0x7e,0x40,0x48,0x50,0x38,0x1c,0x3c,0x18,0x38,0x6c,0x38,0x38,0x66,0x7e,0x6a,0x24,0x5a,0x42,0x0a,0x42,0x18,0x18,0x10,0x10,0x5a,0x36,0x3c,0x06,0x7c,0x18,0x18,0x18,0x18,0x18,0x18,0x3e,
	0x00,0xff,0xff,0x55,0x00,0x3c,0xfb,0x24,0x2a,0x00,0x24,0xee,0x00,0x7e,0x42,0x5e,0x7a,0x24,0xc0,0x00,0x00,0x3c,0x66,0x03,0xff,0x0e,0x70,0x34,0x40,0x04,0x54,0x10,0x00,0x10,0x00,0x7c,0x50,0x08,0x50,0x20,0x20,0x08,0x38,0x10,0x00,0x00,0x00,0x04,0x4c,0x50,0x04,0x04,0x48,0x78,0x78,0x04,0x44,0x44,0x10,0x10,0x20,0x7c,0x08,0x44,0x04,0x44,0x24,0x40,0x24,0x40,0x40,0x40,0x44,0x10,0x08,0x50,0x40,0x6c,0x64,0x44,0x44,0x44,0x44,0x40,0x10,0x44,0x28,0x54,0x28,0x28,0x08,0x20,0x40,0x08,0x44,0x00,0x08,0x38,0x58,0x38,0x34,0x38,0x20,0x3a,0x58,0x30,0x18,0x24,0x10,0x78,0x78,0x38,0x38,0x38,0x58,0x3c,0x7c,0x48,0x44,0x44,0x44,0x44,0x7c,0x10,0x10,0x10,0x20,0xa8,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0xfc,0x3f,0xe0,0x07,0x7c,0x00,0x08,0x00,0x00,0x00,0x02,0x00,0x00,0x10,0x00,0x08,0x20,0x00,0x3c,0x00,0x00,0x02,0x18,0x42,0x10,0x7e,0x7e,0x7e,0x22,0x3e,0x7e,0xfe,0x02,0x02,0xfe,0x42,0x22,0x08,0x52,0x00,0x40,0xfe,0x7c,0x02,0x02,0x02,0x28,0x4e,0x02,0x20,0xfe,0x02,0x0e,0x10,0x22,0x20,0xfe,0x3c,0x04,0x00,0x44,0x50,0x20,0x42,0x42,0x22,0x20,0x70,0x78,0x1e,0x7e,0x18,0x7c,0xfe,0xd6,0x7c,0xc3,0xff,0x2a,0x42,0x42,0x81,0x0a,0x99,0x24,0x24,0x08,0x1e,0x6c,0x3a,0x42,0x06,0x44,0x3c,0x7e,0x1a,0x10,0x58,0x08,0x2f,
	0x00,0xff,0x55,0xaa,0xaa,0x5a,0x00,0x24,0x40,0x00,0x64,0x44,0x80,0x7e,0x42,0x5e,0x7a,0x24,0xc0,0x00,0x00,0x42,0x5e,0x03,0x00,0x1c,0x38,0xf0,0xfe,0xfe,0x92,0x92,0x00,0x10,0x00,0x28,0x38,0x10,0x20,0x00,0x20,0x08,0x10,0x7c,0x00,0x7c,0x00,0x08,0x54,0x10,0x04,0x18,0x48,0x04,0x44,0x08,0x38,0x44,0x00,0x00,0x40,0x00,0x04,0x08,0x34,0x44,0x38,0x40,0x24,0x7c,0x7c,0x40,0x7c,0x10,0x08,0x60,0x40,0x54,0x54,0x44,0x44,0x44,0x44,0x38,0x10,0x44,0x28,0x54,0x10,0x10,0x10,0x20,0x20,0x08,0x00,0x00,0x00,0x04,0x64,0x44,0x4c,0x44,0x7c,0x44,0x64,0x10,0x08,0x28,0x10,0x54,0x44,0x44,0x44,0x44,0x64,0x40,0x20,0x48,0x44,0x54,0x28,0x44,0x08,0x20,0x10,0x08,0x54,0x04,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x00,0xf0,0x0f,0xff,0x18,0xff,0x18,0xff,0xf8,0x1f,0xff,0xff,0x0f,0xf0,0x1f,0xf8,0xf8,0x1f,0xf0,0x0f,0x10,0x00,0x00,0x00,0x00,0x18,0x7e,0x7c,0x0c,0x7c,0x7c,0x7c,0x7c,0x38,0x04,0x54,0x00,0x14,0x68,0x42,0x10,0x0c,0x12,0x10,0x42,0x44,0x02,0x44,0x72,0x04,0x44,0x24,0x52,0xfe,0x52,0xfe,0x70,0x08,0x00,0x34,0x04,0x02,0x44,0x70,0x02,0x50,0x10,0x44,0x70,0x20,0x14,0xfe,0x22,0x04,0x7c,0x7e,0x44,0x50,0x22,0x42,0x42,0x02,0x00,0x00,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0x81,0xff,0x2a,0x81,0x81,0xa5,0x08,0xa5,0x24,0x42,0x08,0xb9,0xfe,0x3a,0x7e,0x1e,0x64,0x5a,0x99,0x7e,0x10,0x7e,0x08,0x56,
	0x00,0xff,0xff,0x55,0x00,0x5a,0xdf,0x18,0xfe,0x00,0xfc,0x7c,0x01,0x7e,0x42,0x5e,0x6a,0x24,0xc0,0x00,0x00,0x42,0x5e,0x03,0x00,0x38,0x1c,0x18,0x40,0x04,0x10,0x54,0x00,0x10,0x00,0x7c,0x14,0x20,0x54,0x00,0x20,0x08,0x38,0x10,0x10,0x00,0x00,0x10,0x64,0x10,0x18,0x04,0x48,0x04,0x44,0x08,0x44,0x3c,0x00,0x10,0x20,0x7c,0x08,0x10,0x54,0x7c,0x24,0x40,0x24,0x40,0x40,0x4c,0x44,0x10,0x08,0x50,0x40,0x54,0x4c,0x44,0x78,0x54,0x78,0x04,0x10,0x44,0x28,0x54,0x28,0x10,0x20,0x20,0x10,0x08,0x00,0x00,0x00,0x3c,0x44,0x40,0x44,0x7c,0x20,0x44,0x44,0x10,0x08,0x30,0x10,0x54,0x44,0x44,0x44,0x44,0x40,0x38,0x20,0x48,0x28,0x54,0x10,0x28,0x10,0x10,0x10,0x10,0x08,0xfe,0x00,0x00,0x00,0x00,0xf0,0xf0,0xf0,0xf0,0x0f,0x0f,0x0f,0x0f,0xff,0xff,0xff,0xff,0x18,0xff,0x18,0xff,0xf8,0x1f,0xff,0xff,0x1f,0xf8,0x0f,0xf0,0xf0,0x0f,0xf8,0x1f,0x7c,0x70,0x00,0x10,0x40,0x18,0x02,0x14,0x70,0x44,0x10,0x18,0x24,0x08,0x3c,0x54,0x7e,0x10,0x08,0x02,0x10,0x14,0x12,0x7e,0x02,0x04,0x02,0x44,0x02,0x08,0x48,0x04,0x0a,0x08,0x02,0x08,0x4c,0x08,0x00,0x08,0x18,0x02,0x44,0x40,0x02,0x88,0x54,0x28,0x0e,0x24,0x08,0x20,0x24,0x04,0x04,0x02,0x04,0x52,0x24,0x42,0x02,0x02,0x00,0x00,0xff,0xff,0xff,0xff,0xfe,0x7c,0xd6,0x7c,0x81,0xff,0x2a,0xbd,0xa5,0x81,0x78,0xad,0x7e,0xff,0x10,0xff,0x3c,0x3a,0x5a,0x1e,0x64,0x5a,0x18,0x50,0x10,0x0a,0x08,0x6a,
	0x00,0xff,0xaa,0xaa,0x55,0x24,0xdf,0x3c,0x40,0x00,0x60,0x44,0x00,0x7e,0x42,0x42,0x42,0x24,0xc0,0x00,0x00,0x42,0x66,0x03,0xff,0x70,0x0e,0x28,0x20,0x08,0x10,0x38,0x00,0x00,0x00,0x28,0x78,0x4c,0x48,0x00,0x10,0x10,0x54,0x10,0x10,0x00,0x30,0x20,0x44,0x10,0x60,0x44,0x7c,0x44,0x44,0x10,0x44,0x04,0x10,0x10,0x10,0x00,0x10,0x00,0x54,0x44,0x24,0x44,0x24,0x40,0x40,0x44,0x44,0x10,0x48,0x48,0x40,0x54,0x4c,0x44,0x40,0x48,0x48,0x44,0x10,0x44,0x10,0x28,0x44,0x10,0x40,0x20,0x08,0x08,0x00,0x00,0x00,0x44,0x44,0x44,0x44,0x40,0x20,0x3c,0x44,0x10,0x08,0x28,0x10,0x54,0x44,0x44,0x78,0x3c,0x40,0x04,0x20,0x48,0x28,0x28,0x28,0x28,0x20,0x10,0x10,0x10,0x00,0x04,0x00,0x00,0x00,0x00,0xf0,0xf0,0xf0,0xf0,0x0f,0x0f,0x0f,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00,0x00,0xe0,0x07,0xfc,0x3f,0x10,0x50,0x00,0x10,0x20,0x00,0x04,0x10,0x10,0x04,0x10,0x28,0x20,0x08,0x04,0x04,0x00,0x10,0x08,0x04,0x10,0x24,0x22,0x10,0x04,0x04,0x02,0x04,0x04,0x14,0x40,0x08,0x04,0x08,0x04,0x08,0x40,0x08,0x00,0x14,0x76,0x04,0x82,0x40,0x04,0x04,0x54,0x10,0x70,0x42,0x14,0x20,0x20,0x04,0x04,0x04,0x08,0x94,0x28,0x42,0x04,0x04,0x00,0x00,0x78,0x1e,0x18,0x7e,0x38,0x38,0x10,0x38,0xc3,0xff,0x2a,0xbd,0x81,0x7e,0xf8,0xa1,0xff,0x54,0x10,0x9f,0x7e,0x3e,0x42,0x7e,0x44,0x24,0x3c,0x1c,0x10,0x18,0x08,0xd6,
	0x00,0xff,0xff,0x55,0x00,0x24,0xdf,0x66,0x20,0xee,0x20,0x7c,0x42,0x7e,0x7e,0x7e,0x7e,0x3c,0xc0,0x00,0xff,0x3c,0x3c,0x03,0x00,0xe0,0x07,0x4e,0x10,0x10,0x10,0x10,0x00,0x10,0x00,0x28,0x10,0x0c,0x34,0x00,0x08,0x20,0x10,0x00,0x20,0x00,0x30,0x40,0x38,0x7c,0x7c,0x38,0x08,0x38,0x38,0x10,0x38,0x38,0x00,0x20,0x08,0x00,0x20,0x10,0x38,0x44,0x78,0x38,0x78,0x7c,0x40,0x3c,0x44,0x38,0x30,0x44,0x7c,0x44,0x44,0x38,0x40,0x34,0x44,0x38,0x10,0x38,0x10,0x28,0x44,0x10,0x7c,0x38,0x04,0x38,0x00,0x7c,0x00,0x3a,0x78,0x38,0x3c,0x38,0x20,0x04,0x44,0x10,0x08,0x24,0x18,0x54,0x44,0x38,0x40,0x04,0x40,0x78,0x18,0x34,0x10,0x28,0x44,0x10,0x7c,0x0c,0x10,0x60,0x00,0x08,0x00,0x00,0x00,0x00,0xf0,0xf0,0xf0,0xf0,0x0f,0x0f,0x0f,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00,0x00,0xc0,0x03,0xfe,0x7f,0x10,0x70,0x00,0x70,0x10,0x00,0x18,0x20,0x10,0x18,0x7c,0x48,0x20,0x7c,0x3c,0x08,0x00,0x60,0x08,0x18,0xfe,0x44,0x46,0x10,0x38,0x38,0x7e,0x38,0x78,0x62,0x3e,0x10,0x38,0x30,0x18,0x70,0x40,0x70,0xfe,0x62,0x10,0x78,0x82,0x3e,0x38,0x02,0x92,0x08,0x0e,0xfe,0x62,0x1e,0x20,0x7e,0x7c,0x38,0x30,0x98,0x30,0x7e,0x38,0x78,0x00,0x00,0x38,0x1c,0x18,0x3c,0x7c,0x10,0x38,0x10,0x66,0x7e,0x24,0xbd,0x42,0x24,0x70,0x92,0x3c,0x00,0x08,0x10,0x4a,0x1c,0x7e,0x7e,0x7c,0x24,0x24,0x14,0x10,0x2e,0x08,0xac,
	0x00,0xff,0x55,0xaa,0xaa,0x66,0x00,0x24,0x00,0x00,0x00,0x44,0x08,0x00,0x00,0x00,0x00,0x00,0xc0,0x00,0xff,0x00,0x00,0x03,0x00,0xc0,0x03,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x40,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xf0,0xf0,0xf0,0x0f,0x0f,0x0f,0x0f,0xff,0xff,0xff,0xff,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00,0x00,0x80,0x01,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x3c,0x3c,0x00,0x7e,0x3c,0x66,0x00,0x4c,0x7e,0x00,0x08,0x7e,0x11,0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x18,0x62,0x18,0xf0,
};

void TIMER16_1_IRQHandler(void)
{
	TMR_TMR16B1IR = TMR_TMR16B1IR_MR0;
	
	gpioSetValue(1,8,vline <= 12 && vline >= 10 ? 0 : 1);
	
	vline++;
	if(vline > 525) {
		vpix = 0;
		vline = 0;
		w = 32;
	}
	if(vline < 45+vskip) return;
	
	uint8_t *p = vfb + (vpix >> 4) * 32;
	uint8_t *q = pattern + (((vpix >> 1) & 7) << 8);
	
	SSP_SSP0DR = 0;
	
	while(w--) {
		SSP_SSP0DR = q[*p++];
	}
	
	vpix++;
	
	if((vpix >> 4) > 24) {
		w = 0;
	} else {
		w = 32;
	}
}

/**************************************************************************/
/*! 
    Main program entry point.  After reset, normal code execution will
    begin here.
*/
/**************************************************************************/
int main(void)
{
	// Configure cpu and mandatory peripherals
	systemInit();
	
	gpioSetDir(1,9,gpioDirection_Output);
	gpioSetDir(1,8,gpioDirection_Output);
	gpioSetDir(0,7,gpioDirection_Output);
	
	for(int i=0;i<32*24;i++) vfb[i]=i;
	
	 /* Enable the clock for CT16B1 */
	SCB_SYSAHBCLKCTRL |= (SCB_SYSAHBCLKCTRL_CT16B1);

	/* Configure PIO1.9 as Timer1_16 MAT0 Output */
	IOCON_PIO1_9 &= ~IOCON_PIO1_9_FUNC_MASK;
	IOCON_PIO1_9 |= IOCON_PIO1_9_FUNC_CT16B1_MAT0;  

	/* Set default pulse width (MR3)*/
	TMR_TMR16B1MR3 = 1525;

	/* Set default duty cycle (MR0) */
	TMR_TMR16B1MR0 = 183;

	/* Configure match control register to reset on MR3 */
	TMR_TMR16B1MCR = (TMR_TMR16B1MCR_MR3_RESET_ENABLED);

	/* External Match Register Settings for PWM */
	TMR_TMR16B1EMR = TMR_TMR16B1EMR_EMC0_TOGGLE | TMR_TMR16B1EMR_EM0;

	/* Disable Timer1 by default (enabled by pwmStart of pwmStartFixed) */
	TMR_TMR16B1TCR &= ~TMR_TMR16B1TCR_COUNTERENABLE_MASK;

	/* Enable PWM0 and PWM3 */
	TMR_TMR16B1PWMC = TMR_TMR16B1PWMC_PWM0_ENABLED | TMR_TMR16B1PWMC_PWM3_ENABLED;

	/* Make sure that the timer interrupt is enabled */
	NVIC_EnableIRQ(TIMER_16_1_IRQn);
	
	/* Disable interrupt on MR3 in case it was enabled by pwmStartFixed() */
	TMR_TMR16B1MCR  = (TMR_TMR16B1MCR_MR0_INT_ENABLED | TMR_TMR16B1MCR_MR3_RESET_ENABLED);

	/* Enable Timer1 */
	TMR_TMR16B1TCR = TMR_TMR16B1TCR_COUNTERENABLE_ENABLED;
	
	sspInit(0,sspClockPolarity_High,sspClockPhase_FallingEdge);
	
	while(1);

	return 0;
}