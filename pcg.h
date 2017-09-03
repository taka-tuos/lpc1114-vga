const uint8_t pattern[] = {
// normal
	0x00,0x00,0x00,0x28,0x28,0x28,0x00,0x10,0x00,0x38,0x00,0xfe,0x00,0x00,0xff,0x92,0x28,0x00,0x08,0x00,0xaa,0x28,0x00,0x28,0x00,0x28,0x00,0x04,0x10,0x10,0x00,0x00,0x00,0x10,0x28,0x14,0x10,0x42,0x38,0x08,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x02,0x7c,0x10,0x7c,0x7c,0x88,0xfe,0x7c,0xfe,0x7c,0x7c,0x00,0x00,0x08,0x00,0x40,0x7c,0x7c,0x38,0xfc,0x7c,0xf8,0xfe,0xfe,0x7c,0x82,0xfe,0x02,0x82,0x80,0x82,0x82,0x7c,0xfc,0x7c,0xfc,0x7c,0xfe,0x82,0x82,0x82,0x82,0x82,0xfe,0x3c,0x00,0x78,0x10,0x00,0x20,0x00,0x80,0x00,0x02,0x00,0x0c,0x00,0x80,0x30,0x02,0x80,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x10,0x60,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x10,0x00,0x10,0x10,0xff,0x00,0x10,0x01,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0x78,0x08,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x06,0x10,0x00,0x04,0x20,0x20,0x20,0x40,0x00,0x44,0xe2,0xfe,0x40,0x82,0x40,0x08,0xa2,0x7e,0x80,0x10,0x00,0x00,0x10,0x04,0x04,0x80,0x00,0x20,0x10,0x00,0xe0,0x20,0x02,0xfc,0x40,0x00,0xfe,0xfe,0x82,0x10,0x80,0xfe,0xfe,0xe2,0x50,0x40,0x28,0x10,0x10,0x10,0x01,0x80,0xff,0xff,0x10,0x6c,0x10,0x38,0x38,0x38,0x01,0x80,0x81,0xfe,0x40,0x7e,0xfe,0x04,0x28,0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x28,0x28,0x28,0x00,0x10,0x00,0x44,0x00,0xc6,0x00,0x00,0xff,0x7c,0x28,0x00,0x1c,0x00,0x55,0x28,0x00,0x28,0x00,0x28,0xaa,0x24,0x38,0x10,0x08,0x20,0x00,0x10,0x28,0x7e,0x7e,0xa4,0x44,0x10,0x10,0x20,0x10,0x10,0x00,0x00,0x00,0x04,0x86,0x30,0x82,0x82,0x88,0x80,0x82,0x02,0x82,0x82,0x00,0x00,0x10,0x00,0x20,0x82,0x82,0x44,0x82,0x82,0x84,0x80,0x80,0x82,0x82,0x10,0x02,0x84,0x80,0xc6,0xc2,0x82,0x82,0x82,0x82,0x82,0x10,0x82,0x82,0x82,0x44,0x82,0x04,0x20,0x40,0x08,0x28,0x00,0x10,0x00,0x80,0x00,0x02,0x00,0x10,0x00,0x80,0x00,0x00,0x80,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x10,0x4c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x10,0x00,0x10,0x10,0x00,0x00,0x10,0x01,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0x40,0x08,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x08,0xfe,0x7c,0xfe,0xfe,0xfe,0x3e,0x7e,0xfe,0xfe,0x02,0x02,0xfe,0x82,0x7e,0x10,0xa2,0x00,0x80,0x10,0x7c,0xfe,0xfe,0x04,0x44,0x80,0xfe,0x50,0xfe,0xfe,0x1c,0x20,0x42,0x20,0xfe,0x78,0x02,0x00,0x82,0x50,0x80,0x82,0x82,0x02,0xa0,0xa0,0x28,0x10,0x10,0x10,0x03,0xc0,0x7f,0xfe,0x38,0xfe,0x38,0x38,0x7c,0x44,0x02,0x40,0x42,0x92,0x7e,0x42,0x82,0xee,0x44,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x3f,0xf8,0x2f,0xe8,0x28,0xfe,0x10,0x00,0x82,0x00,0xaa,0x00,0x00,0xff,0x44,0xef,0x00,0x2a,0x00,0xaa,0xef,0xff,0xe8,0x00,0x2f,0x00,0x44,0x54,0x10,0x04,0x40,0x00,0x10,0x00,0x28,0x90,0xa8,0x48,0x20,0x20,0x10,0x54,0x10,0x00,0x00,0x00,0x08,0x8a,0x50,0x02,0x02,0x88,0x80,0x80,0x04,0x82,0x82,0x10,0x10,0x20,0x7c,0x10,0x82,0x02,0x82,0x82,0x80,0x82,0x80,0x80,0x80,0x82,0x10,0x02,0x88,0x80,0xaa,0xa2,0x82,0x82,0x82,0x82,0x80,0x10,0x82,0x82,0x82,0x28,0x44,0x08,0x20,0x20,0x08,0x44,0x00,0x08,0x7c,0x80,0x7c,0x02,0x7c,0x10,0x7e,0x80,0x30,0x06,0x82,0x10,0xec,0xfc,0x7c,0xfc,0x7e,0xbe,0x7e,0xfe,0x82,0x82,0x82,0xc6,0x82,0xfe,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x10,0x00,0x10,0x10,0x00,0x00,0x10,0x01,0x00,0x00,0x10,0x10,0x00,0x00,0x08,0x20,0x00,0x00,0x40,0x08,0x00,0x10,0xfc,0x7c,0x04,0x10,0x00,0x08,0x20,0x78,0x78,0x00,0x80,0x14,0x10,0x82,0x10,0x04,0x22,0x10,0x42,0x84,0x02,0x44,0xe2,0x04,0x42,0x42,0xc2,0x70,0xa2,0xfe,0xc0,0xfe,0x00,0x04,0x02,0x04,0x44,0xfe,0x02,0x88,0x10,0x02,0x00,0x40,0x22,0x20,0x42,0x08,0x02,0xfe,0x82,0x50,0x80,0x82,0x02,0x02,0x00,0x40,0x28,0x1f,0xff,0xf0,0x07,0xe0,0x3f,0xfc,0x7c,0xfe,0x7c,0xd6,0xfe,0x82,0x04,0x20,0x24,0x92,0x90,0x7e,0x82,0xa4,0x82,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x20,0x08,0x20,0x08,0x28,0x00,0x10,0x00,0x82,0x00,0x92,0x00,0x00,0xff,0xc6,0x00,0x00,0x08,0x00,0x55,0x00,0x00,0x08,0x00,0x20,0x55,0xfc,0x10,0x10,0xfe,0xfe,0x00,0x10,0x00,0x28,0x7c,0x54,0x30,0x00,0x20,0x10,0x38,0x7c,0x00,0x7c,0x00,0x10,0x92,0x10,0x0c,0x3c,0x88,0xfc,0xfc,0x08,0x7c,0x7e,0x00,0x00,0x40,0x00,0x08,0x0c,0x72,0x82,0xfc,0x80,0x82,0xfc,0xfc,0x8e,0xfe,0x10,0x02,0xf0,0x80,0x92,0x92,0x82,0xfc,0x82,0xfc,0x7c,0x10,0x82,0x82,0x92,0x10,0x28,0x10,0x20,0x10,0x08,0x00,0x00,0x00,0x02,0xfc,0x82,0x7e,0x82,0xfe,0x82,0xfc,0x10,0x02,0x84,0x10,0x92,0x82,0x82,0x82,0x82,0xc0,0x80,0x10,0x82,0x82,0x82,0x28,0x82,0x08,0x20,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff,0xff,0xff,0xf0,0x1f,0x00,0xff,0x10,0x01,0x1f,0xf0,0x1f,0xf0,0x07,0xe0,0x07,0xc0,0x00,0x00,0x40,0x08,0x00,0x38,0x04,0x14,0x08,0x7c,0x7c,0x7c,0x7c,0x08,0x08,0x54,0x7e,0x18,0x30,0x82,0x10,0x0c,0x22,0x10,0x82,0x04,0x02,0x44,0x02,0x08,0x44,0x22,0x32,0x10,0x02,0x10,0xb0,0x10,0x00,0x28,0x04,0x08,0x42,0x80,0x02,0x04,0x54,0x04,0xc0,0x40,0x14,0xfe,0x44,0x08,0x7e,0x02,0x02,0x50,0x82,0x82,0x02,0x02,0x00,0x00,0x28,0x10,0x10,0x10,0x0f,0xf0,0x1f,0xf8,0xfe,0xfe,0xfe,0xfe,0xfe,0x82,0x08,0x10,0x18,0xfe,0x78,0x42,0xfe,0xef,0x7c,0x2b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x2f,0xe8,0x3f,0xf8,0x28,0xfe,0x54,0x00,0x82,0x00,0xaa,0x00,0x00,0xff,0x44,0xef,0x00,0x2a,0x00,0xaa,0xff,0xef,0xe8,0x00,0x2f,0x00,0x40,0x10,0x10,0x04,0x40,0x00,0x10,0x00,0x28,0x12,0x2a,0x4a,0x00,0x20,0x10,0x54,0x10,0x18,0x00,0x00,0x20,0xa2,0x10,0x30,0x02,0xfe,0x02,0x82,0x10,0x82,0x02,0x00,0x00,0x20,0x7c,0x10,0x10,0x8a,0xfe,0x82,0x80,0x82,0x80,0x80,0x82,0x82,0x10,0x82,0x88,0x80,0x82,0x8a,0x82,0x80,0x8a,0x84,0x02,0x10,0x82,0x44,0xaa,0x28,0x10,0x20,0x20,0x08,0x08,0x00,0x00,0x00,0x7e,0x82,0x80,0x82,0xfe,0x10,0x82,0x82,0x10,0x82,0xf8,0x10,0x92,0x82,0x82,0x82,0x82,0x80,0x7c,0x10,0x82,0x82,0x92,0x10,0x7e,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x00,0x10,0x10,0x10,0x00,0x00,0x10,0x01,0x10,0x10,0x00,0x00,0x08,0x10,0x00,0x00,0x00,0x10,0x40,0x08,0x00,0x10,0x04,0x18,0x18,0x44,0x10,0x18,0x24,0x08,0x78,0x54,0x00,0x10,0xd0,0x02,0x10,0x14,0x22,0xfe,0x02,0x04,0x02,0x04,0x02,0x10,0x40,0x02,0x0e,0xfe,0x02,0x10,0x8c,0x10,0x00,0x10,0x18,0x10,0x82,0x80,0x02,0x04,0x92,0x28,0x3c,0x84,0x08,0x20,0x28,0x08,0x02,0x02,0x02,0x50,0x82,0x82,0x02,0x02,0x00,0x00,0x28,0x1f,0xff,0xf0,0x1f,0xf8,0x0f,0xf0,0xd6,0x7c,0x7c,0xd6,0xfe,0x82,0x10,0x08,0x18,0x82,0x50,0x7e,0x82,0xa2,0x24,0x71,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x28,0x28,0x00,0x00,0x28,0x00,0x38,0x00,0x44,0x00,0xc6,0x00,0x00,0xff,0x7c,0x28,0x00,0x1c,0x00,0x55,0x00,0x28,0x28,0x00,0x28,0xaa,0x20,0x10,0x10,0x08,0x20,0x00,0x00,0x00,0xfc,0xfc,0x4a,0x84,0x00,0x10,0x20,0x10,0x10,0x08,0x00,0x00,0x40,0xc2,0x10,0x40,0x82,0x08,0x82,0x82,0x10,0x82,0x82,0x10,0x10,0x10,0x00,0x20,0x00,0x8a,0x82,0x82,0x82,0x84,0x80,0x80,0x82,0x82,0x10,0x82,0x84,0x80,0x82,0x86,0x82,0x80,0x84,0x82,0x82,0x10,0x82,0x28,0xc6,0x44,0x10,0x40,0x20,0x04,0x08,0x00,0x00,0x00,0x82,0x82,0x82,0x82,0x80,0x10,0x7e,0x82,0x10,0x82,0x84,0x10,0x92,0x82,0x82,0xfc,0x7e,0x80,0x02,0x10,0x82,0x44,0x92,0x28,0x02,0x20,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x00,0x10,0x10,0x10,0x00,0x00,0x10,0x01,0x10,0x10,0x00,0x00,0x10,0x08,0x00,0x00,0x00,0x28,0x40,0x08,0x20,0x00,0x08,0x10,0x68,0x08,0x10,0x28,0x28,0x08,0x08,0x08,0x00,0x20,0x10,0x04,0x10,0x24,0x42,0x08,0x04,0x08,0x02,0x04,0x04,0x28,0x40,0x04,0x04,0x10,0x04,0x10,0x80,0x10,0x00,0x28,0x34,0x20,0x82,0x80,0x04,0x02,0x92,0x10,0xc0,0x82,0x14,0x20,0x20,0x08,0x02,0x04,0x04,0x92,0x84,0x82,0x04,0x04,0x00,0x00,0x28,0x10,0x10,0x10,0x3f,0xfc,0x07,0xe0,0x10,0x38,0x38,0x10,0x7c,0x44,0x20,0x04,0x24,0x82,0xfe,0x42,0x82,0xef,0x24,0xa1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x28,0x28,0x00,0x00,0x28,0x00,0x10,0x00,0x38,0x00,0xfe,0x00,0x00,0xff,0x92,0x28,0x00,0x08,0x00,0xaa,0x00,0x28,0x28,0x00,0x28,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x10,0x00,0x50,0x10,0x84,0x7a,0x00,0x08,0x40,0x00,0x00,0x10,0x00,0x10,0x80,0x7c,0xfe,0xfe,0x7c,0x08,0x7c,0x7c,0x10,0x7c,0x7c,0x00,0x20,0x08,0x00,0x40,0x10,0x7c,0x82,0xfc,0x7c,0xf8,0xfe,0x80,0x7c,0x82,0xfe,0x7c,0x82,0xfc,0x82,0x82,0x7c,0x80,0x7a,0x82,0x7c,0x10,0x7c,0x10,0x82,0x82,0x10,0xfe,0x3c,0x00,0x78,0x00,0xfe,0x00,0x7e,0xfc,0x7c,0x7e,0x7e,0x10,0x02,0x82,0xfe,0x7c,0x82,0x10,0x92,0x82,0x7c,0x80,0x02,0x80,0xfc,0x0e,0x7e,0x38,0x6c,0xc6,0x3c,0xfe,0x0c,0x10,0x60,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x00,0x10,0x10,0x10,0x00,0x00,0x10,0x01,0x10,0x10,0x00,0x00,0x10,0x08,0x00,0x00,0x00,0x10,0x40,0x78,0x10,0x00,0xf0,0x20,0x08,0x10,0x7c,0x48,0x20,0x7c,0x78,0x30,0x00,0x40,0x10,0x78,0xfe,0xc4,0x46,0x08,0x78,0x70,0xfe,0x38,0x78,0xc6,0x3e,0x78,0x78,0x60,0x78,0x60,0x80,0x60,0xfe,0xc6,0x52,0xc0,0x82,0x7e,0x78,0x02,0x10,0x08,0x3c,0xfe,0xe2,0x1c,0x20,0xfe,0xfe,0x78,0x78,0x9c,0xf8,0xfe,0x78,0x78,0x00,0x00,0x28,0x10,0x10,0x10,0x7f,0xfe,0x03,0xc0,0x38,0x10,0x10,0x38,0x38,0x38,0x40,0x02,0x42,0x86,0x10,0x86,0xfe,0x0a,0x48,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x28,0x28,0x00,0x00,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x28,0x00,0x00,0x00,0x55,0x00,0x28,0x28,0x00,0x28,0x55,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0x10,0x00,0x10,0x10,0x10,0x00,0x00,0x10,0x01,0x10,0x10,0x00,0x00,0x10,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x10,0x10,0x10,0xff,0xff,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x01,0x81,0x00,0x00,0x00,0x00,0x02,0x00,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
// invert
	0xff,0xff,0xff,0xd7,0xd7,0xd7,0xff,0xef,0xff,0xc7,0xff,0x01,0xff,0xff,0x00,0x6d,0xd7,0xff,0xf7,0xff,0x55,0xd7,0xff,0xd7,0xff,0xd7,0xff,0xfb,0xef,0xef,0xff,0xff,0xff,0xef,0xd7,0xeb,0xef,0xbd,0xc7,0xf7,0xf7,0xbf,0xff,0xff,0xff,0xff,0xff,0xfd,0x83,0xef,0x83,0x83,0x77,0x01,0x83,0x01,0x83,0x83,0xff,0xff,0xf7,0xff,0xbf,0x83,0x83,0xc7,0x03,0x83,0x07,0x01,0x01,0x83,0x7d,0x01,0xfd,0x7d,0x7f,0x7d,0x7d,0x83,0x03,0x83,0x03,0x83,0x01,0x7d,0x7d,0x7d,0x7d,0x7d,0x01,0xc3,0xff,0x87,0xef,0xff,0xdf,0xff,0x7f,0xff,0xfd,0xff,0xf3,0xff,0x7f,0xcf,0xfd,0x7f,0xcf,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf3,0xef,0x9f,0xcd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xef,0xff,0xef,0xef,0x00,0xff,0xef,0xfe,0xff,0xff,0xef,0xef,0xff,0xff,0xef,0xef,0xff,0xff,0x87,0xf7,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0xf9,0xef,0xff,0xfb,0xdf,0xdf,0xdf,0xbf,0xff,0xbb,0x1d,0x01,0xbf,0x7d,0xbf,0xf7,0x5d,0x81,0x7f,0xef,0xff,0xff,0xef,0xfb,0xfb,0x7f,0xff,0xdf,0xef,0xff,0x1f,0xdf,0xfd,0x03,0xbf,0xff,0x01,0x01,0x7d,0xef,0x7f,0x01,0x01,0x1d,0xaf,0xbf,0xd7,0xef,0xef,0xef,0xfe,0x7f,0x00,0x00,0xef,0x93,0xef,0xc7,0xc7,0xc7,0xfe,0x7f,0x7e,0x01,0xbf,0x81,0x01,0xfb,0xd7,0x8d,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xff,0xff,0xd7,0xd7,0xd7,0xff,0xef,0xff,0xbb,0xff,0x39,0xff,0xff,0x00,0x83,0xd7,0xff,0xe3,0xff,0xaa,0xd7,0xff,0xd7,0xff,0xd7,0x55,0xdb,0xc7,0xef,0xf7,0xdf,0xff,0xef,0xd7,0x81,0x81,0x5b,0xbb,0xef,0xef,0xdf,0xef,0xef,0xff,0xff,0xff,0xfb,0x79,0xcf,0x7d,0x7d,0x77,0x7f,0x7d,0xfd,0x7d,0x7d,0xff,0xff,0xef,0xff,0xdf,0x7d,0x7d,0xbb,0x7d,0x7d,0x7b,0x7f,0x7f,0x7d,0x7d,0xef,0xfd,0x7b,0x7f,0x39,0x3d,0x7d,0x7d,0x7d,0x7d,0x7d,0xef,0x7d,0x7d,0x7d,0xbb,0x7d,0xfb,0xdf,0xbf,0xf7,0xd7,0xff,0xef,0xff,0x7f,0xff,0xfd,0xff,0xef,0xff,0x7f,0xff,0xff,0x7f,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xef,0xef,0xb3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xef,0xff,0xef,0xef,0xff,0xff,0xef,0xfe,0xff,0xff,0xef,0xef,0xff,0xff,0xef,0xef,0xff,0xff,0xbf,0xf7,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xf7,0x01,0x83,0x01,0x01,0x01,0xc1,0x81,0x01,0x01,0xfd,0xfd,0x01,0x7d,0x81,0xef,0x5d,0xff,0x7f,0xef,0x83,0x01,0x01,0xfb,0xbb,0x7f,0x01,0xaf,0x01,0x01,0xe3,0xdf,0xbd,0xdf,0x01,0x87,0xfd,0xff,0x7d,0xaf,0x7f,0x7d,0x7d,0xfd,0x5f,0x5f,0xd7,0xef,0xef,0xef,0xfc,0x3f,0x80,0x01,0xc7,0x01,0xc7,0xc7,0x83,0xbb,0xfd,0xbf,0xbd,0x6d,0x81,0xbd,0x7d,0x11,0xbb,0xd8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xc0,0x07,0xd0,0x17,0xd7,0x01,0xef,0xff,0x7d,0xff,0x55,0xff,0xff,0x00,0xbb,0x10,0xff,0xd5,0xff,0x55,0x10,0x00,0x17,0xff,0xd0,0xff,0xbb,0xab,0xef,0xfb,0xbf,0xff,0xef,0xff,0xd7,0x6f,0x57,0xb7,0xdf,0xdf,0xef,0xab,0xef,0xff,0xff,0xff,0xf7,0x75,0xaf,0xfd,0xfd,0x77,0x7f,0x7f,0xfb,0x7d,0x7d,0xef,0xef,0xdf,0x83,0xef,0x7d,0xfd,0x7d,0x7d,0x7f,0x7d,0x7f,0x7f,0x7f,0x7d,0xef,0xfd,0x77,0x7f,0x55,0x5d,0x7d,0x7d,0x7d,0x7d,0x7f,0xef,0x7d,0x7d,0x7d,0xd7,0xbb,0xf7,0xdf,0xdf,0xf7,0xbb,0xff,0xf7,0x83,0x7f,0x83,0xfd,0x83,0xef,0x81,0x7f,0xcf,0xf9,0x7d,0xef,0x13,0x03,0x83,0x03,0x81,0x41,0x81,0x01,0x7d,0x7d,0x7d,0x39,0x7d,0x01,0xef,0xef,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xef,0xff,0xef,0xef,0xff,0xff,0xef,0xfe,0xff,0xff,0xef,0xef,0xff,0xff,0xf7,0xdf,0xff,0xff,0xbf,0xf7,0xff,0xef,0x03,0x83,0xfb,0xef,0xff,0xf7,0xdf,0x87,0x87,0xff,0x7f,0xeb,0xef,0x7d,0xef,0xfb,0xdd,0xef,0xbd,0x7b,0xfd,0xbb,0x1d,0xfb,0xbd,0xbd,0x3d,0x8f,0x5d,0x01,0x3f,0x01,0xff,0xfb,0xfd,0xfb,0xbb,0x01,0xfd,0x77,0xef,0xfd,0xff,0xbf,0xdd,0xdf,0xbd,0xf7,0xfd,0x01,0x7d,0xaf,0x7f,0x7d,0xfd,0xfd,0xff,0xbf,0xd7,0xe0,0x00,0x0f,0xf8,0x1f,0xc0,0x03,0x83,0x01,0x83,0x29,0x01,0x7d,0xfb,0xdf,0xdb,0x6d,0x6f,0x81,0x7d,0x5b,0x7d,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xdf,0xf7,0xdf,0xf7,0xd7,0xff,0xef,0xff,0x7d,0xff,0x6d,0xff,0xff,0x00,0x39,0xff,0xff,0xf7,0xff,0xaa,0xff,0xff,0xf7,0xff,0xdf,0xaa,0x03,0xef,0xef,0x01,0x01,0xff,0xef,0xff,0xd7,0x83,0xab,0xcf,0xff,0xdf,0xef,0xc7,0x83,0xff,0x83,0xff,0xef,0x6d,0xef,0xf3,0xc3,0x77,0x03,0x03,0xf7,0x83,0x81,0xff,0xff,0xbf,0xff,0xf7,0xf3,0x8d,0x7d,0x03,0x7f,0x7d,0x03,0x03,0x71,0x01,0xef,0xfd,0x0f,0x7f,0x6d,0x6d,0x7d,0x03,0x7d,0x03,0x83,0xef,0x7d,0x7d,0x6d,0xef,0xd7,0xef,0xdf,0xef,0xf7,0xff,0xff,0xff,0xfd,0x03,0x7d,0x81,0x7d,0x01,0x7d,0x03,0xef,0xfd,0x7b,0xef,0x6d,0x7d,0x7d,0x7d,0x7d,0x3f,0x7f,0xef,0x7d,0x7d,0x7d,0xd7,0x7d,0xf7,0xdf,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0x00,0x00,0x00,0x0f,0xe0,0xff,0x00,0xef,0xfe,0xe0,0x0f,0xe0,0x0f,0xf8,0x1f,0xf8,0x3f,0xff,0xff,0xbf,0xf7,0xff,0xc7,0xfb,0xeb,0xf7,0x83,0x83,0x83,0x83,0xf7,0xf7,0xab,0x81,0xe7,0xcf,0x7d,0xef,0xf3,0xdd,0xef,0x7d,0xfb,0xfd,0xbb,0xfd,0xf7,0xbb,0xdd,0xcd,0xef,0xfd,0xef,0x4f,0xef,0xff,0xd7,0xfb,0xf7,0xbd,0x7f,0xfd,0xfb,0xab,0xfb,0x3f,0xbf,0xeb,0x01,0xbb,0xf7,0x81,0xfd,0xfd,0xaf,0x7d,0x7d,0xfd,0xfd,0xff,0xff,0xd7,0xef,0xef,0xef,0xf0,0x0f,0xe0,0x07,0x01,0x01,0x01,0x01,0x01,0x7d,0xf7,0xef,0xe7,0x01,0x87,0xbd,0x01,0x10,0x83,0xd4,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xd0,0x17,0xc0,0x07,0xd7,0x01,0xab,0xff,0x7d,0xff,0x55,0xff,0xff,0x00,0xbb,0x10,0xff,0xd5,0xff,0x55,0x00,0x10,0x17,0xff,0xd0,0xff,0xbf,0xef,0xef,0xfb,0xbf,0xff,0xef,0xff,0xd7,0xed,0xd5,0xb5,0xff,0xdf,0xef,0xab,0xef,0xe7,0xff,0xff,0xdf,0x5d,0xef,0xcf,0xfd,0x01,0xfd,0x7d,0xef,0x7d,0xfd,0xff,0xff,0xdf,0x83,0xef,0xef,0x75,0x01,0x7d,0x7f,0x7d,0x7f,0x7f,0x7d,0x7d,0xef,0x7d,0x77,0x7f,0x7d,0x75,0x7d,0x7f,0x75,0x7b,0xfd,0xef,0x7d,0xbb,0x55,0xd7,0xef,0xdf,0xdf,0xf7,0xf7,0xff,0xff,0xff,0x81,0x7d,0x7f,0x7d,0x01,0xef,0x7d,0x7d,0xef,0x7d,0x07,0xef,0x6d,0x7d,0x7d,0x7d,0x7d,0x7f,0x83,0xef,0x7d,0x7d,0x6d,0xef,0x81,0xef,0xef,0xef,0xef,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xff,0xef,0xef,0xef,0xff,0xff,0xef,0xfe,0xef,0xef,0xff,0xff,0xf7,0xef,0xff,0xff,0xff,0xef,0xbf,0xf7,0xff,0xef,0xfb,0xe7,0xe7,0xbb,0xef,0xe7,0xdb,0xf7,0x87,0xab,0xff,0xef,0x2f,0xfd,0xef,0xeb,0xdd,0x01,0xfd,0xfb,0xfd,0xfb,0xfd,0xef,0xbf,0xfd,0xf1,0x01,0xfd,0xef,0x73,0xef,0xff,0xef,0xe7,0xef,0x7d,0x7f,0xfd,0xfb,0x6d,0xd7,0xc3,0x7b,0xf7,0xdf,0xd7,0xf7,0xfd,0xfd,0xfd,0xaf,0x7d,0x7d,0xfd,0xfd,0xff,0xff,0xd7,0xe0,0x00,0x0f,0xe0,0x07,0xf0,0x0f,0x29,0x83,0x83,0x29,0x01,0x7d,0xef,0xf7,0xe7,0x7d,0xaf,0x81,0x7d,0x5d,0xdb,0x8e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xd7,0xd7,0xff,0xff,0xd7,0xff,0xc7,0xff,0xbb,0xff,0x39,0xff,0xff,0x00,0x83,0xd7,0xff,0xe3,0xff,0xaa,0xff,0xd7,0xd7,0xff,0xd7,0x55,0xdf,0xef,0xef,0xf7,0xdf,0xff,0xff,0xff,0x03,0x03,0xb5,0x7b,0xff,0xef,0xdf,0xef,0xef,0xf7,0xff,0xff,0xbf,0x3d,0xef,0xbf,0x7d,0xf7,0x7d,0x7d,0xef,0x7d,0x7d,0xef,0xef,0xef,0xff,0xdf,0xff,0x75,0x7d,0x7d,0x7d,0x7b,0x7f,0x7f,0x7d,0x7d,0xef,0x7d,0x7b,0x7f,0x7d,0x79,0x7d,0x7f,0x7b,0x7d,0x7d,0xef,0x7d,0xd7,0x39,0xbb,0xef,0xbf,0xdf,0xfb,0xf7,0xff,0xff,0xff,0x7d,0x7d,0x7d,0x7d,0x7f,0xef,0x81,0x7d,0xef,0x7d,0x7b,0xef,0x6d,0x7d,0x7d,0x03,0x81,0x7f,0xfd,0xef,0x7d,0xbb,0x6d,0xd7,0xfd,0xdf,0xef,0xef,0xef,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xff,0xef,0xef,0xef,0xff,0xff,0xef,0xfe,0xef,0xef,0xff,0xff,0xef,0xf7,0xff,0xff,0xff,0xd7,0xbf,0xf7,0xdf,0xff,0xf7,0xef,0x97,0xf7,0xef,0xd7,0xd7,0xf7,0xf7,0xf7,0xff,0xdf,0xef,0xfb,0xef,0xdb,0xbd,0xf7,0xfb,0xf7,0xfd,0xfb,0xfb,0xd7,0xbf,0xfb,0xfb,0xef,0xfb,0xef,0x7f,0xef,0xff,0xd7,0xcb,0xdf,0x7d,0x7f,0xfb,0xfd,0x6d,0xef,0x3f,0x7d,0xeb,0xdf,0xdf,0xf7,0xfd,0xfb,0xfb,0x6d,0x7b,0x7d,0xfb,0xfb,0xff,0xff,0xd7,0xef,0xef,0xef,0xc0,0x03,0xf8,0x1f,0xef,0xc7,0xc7,0xef,0x83,0xbb,0xdf,0xfb,0xdb,0x7d,0x01,0xbd,0x7d,0x10,0xdb,0x5e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xd7,0xd7,0xff,0xff,0xd7,0xff,0xef,0xff,0xc7,0xff,0x01,0xff,0xff,0x00,0x6d,0xd7,0xff,0xf7,0xff,0x55,0xff,0xd7,0xd7,0xff,0xd7,0xff,0xff,0xef,0xef,0xff,0xff,0xff,0xef,0xff,0xaf,0xef,0x7b,0x85,0xff,0xf7,0xbf,0xff,0xff,0xef,0xff,0xef,0x7f,0x83,0x01,0x01,0x83,0xf7,0x83,0x83,0xef,0x83,0x83,0xff,0xdf,0xf7,0xff,0xbf,0xef,0x83,0x7d,0x03,0x83,0x07,0x01,0x7f,0x83,0x7d,0x01,0x83,0x7d,0x03,0x7d,0x7d,0x83,0x7f,0x85,0x7d,0x83,0xef,0x83,0xef,0x7d,0x7d,0xef,0x01,0xc3,0xff,0x87,0xff,0x01,0xff,0x81,0x03,0x83,0x81,0x81,0xef,0xfd,0x7d,0x01,0x83,0x7d,0xef,0x6d,0x7d,0x83,0x7f,0xfd,0x7f,0x03,0xf1,0x81,0xc7,0x93,0x39,0xc3,0x01,0xf3,0xef,0x9f,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xff,0xef,0xef,0xef,0xff,0xff,0xef,0xfe,0xef,0xef,0xff,0xff,0xef,0xf7,0xff,0xff,0xff,0xef,0xbf,0x87,0xef,0xff,0x0f,0xdf,0xf7,0xef,0x83,0xb7,0xdf,0x83,0x87,0xcf,0xff,0xbf,0xef,0x87,0x01,0x3b,0xb9,0xf7,0x87,0x8f,0x01,0xc7,0x87,0x39,0xc1,0x87,0x87,0x9f,0x87,0x9f,0x7f,0x9f,0x01,0x39,0xad,0x3f,0x7d,0x81,0x87,0xfd,0xef,0xf7,0xc3,0x01,0x1d,0xe3,0xdf,0x01,0x01,0x87,0x87,0x63,0x07,0x01,0x87,0x87,0xff,0xff,0xd7,0xef,0xef,0xef,0x80,0x01,0xfc,0x3f,0xc7,0xef,0xef,0xc7,0xc7,0xc7,0xbf,0xfd,0xbd,0x79,0xef,0x79,0x01,0xf5,0xb7,0xdd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xd7,0xd7,0xff,0xff,0xd7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xd7,0xff,0xff,0xff,0xaa,0xff,0xd7,0xd7,0xff,0xd7,0xaa,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x83,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0xef,0xff,0xef,0xef,0xef,0xff,0xff,0xef,0xfe,0xef,0xef,0xff,0xff,0xef,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xd7,0xef,0xef,0xef,0x00,0x00,0xfe,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0xfe,0x7e,0xff,0xff,0xff,0xff,0xfd,0xff,0xdb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};