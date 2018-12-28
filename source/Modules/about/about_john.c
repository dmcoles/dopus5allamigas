/*

Directory Opus 5
Original APL release version 5.82
Copyright 1993-2012 Jonathan Potter & GP Software

This program is free software; you can redistribute it and/or
modify it under the terms of the AROS Public License version 1.1.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
AROS Public License for more details.

The release of Directory Opus 5 under the GPL in NO WAY affects
the existing commercial status of Directory Opus for Windows.

For more information on Directory Opus for Windows please see:

                 http://www.gpsoft.com.au

*/

#include <dopus/common.h>

FAR const UWORD
	john_data[]={
        0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0004,0xc000,0x0000,0x0000,0x0000,
		0x0018,0x0000,0x0000,0x0000,0x0000,0x007c,0x0000,0x0000,
		0x0000,0x0000,0x01fe,0x0000,0x0000,0x0000,0x0000,0x0006,
		0x0000,0x0000,0x0000,0x0000,0x007e,0x0000,0x0000,0x0000,
		0x0000,0x4078,0x1f80,0x0000,0x0000,0x0000,0x0079,0x73c0,
		0x0000,0x0000,0x0000,0x01ff,0x8080,0x0000,0x0000,0x0000,
		0x01c3,0x1800,0x0000,0x0000,0x0000,0x01b0,0x0030,0x0000,
		0x0000,0x0000,0x00d0,0x001e,0x0000,0x0000,0x0000,0x0200,
		0x0007,0xd000,0x0000,0x0000,0x0e00,0x0003,0x3800,0x0000,
		0x000c,0x0800,0x0001,0xc000,0x0000,0x001f,0x0000,0x0001,
		0x8000,0x0000,0x0006,0xc800,0x0005,0x8000,0x0000,0x0000,
		0x3000,0x0001,0x8000,0x0000,0x0000,0x5000,0x0003,0xe000,
		0x0000,0x0000,0x1000,0x0002,0x8000,0x0000,0x001c,0x8000,
		0x0012,0xf800,0x0000,0x001a,0x0000,0x0013,0xe800,0x0000,
		0x0017,0xc000,0x0187,0x7800,0x0000,0x000d,0x4007,0x80a3,
		0xf800,0x0000,0x000d,0xc130,0x0030,0xa200,0x0000,0x0000,
		0xe110,0x1bfc,0x6000,0x0000,0x0008,0xe7b0,0x10d8,0x2400,
		0x0000,0x0008,0xead0,0x121c,0x2500,0x0000,0x0006,0x4782,
		0x0e20,0x2200,0x0000,0x0007,0x7fe9,0x4c18,0x0200,0x0000,
		0x000e,0x48c8,0x8900,0x0600,0x0000,0x000c,0x0000,0x0000,
		0x0600,0x0000,0x0004,0x0101,0x2000,0x1600,0x0000,0x000b,
		0x0001,0x0000,0x1600,0x0000,0x0009,0x8068,0x0000,0x3600,
		0x0000,0x000b,0x8104,0x0a00,0x9000,0x0000,0x0007,0x0000,
		0x0800,0x0000,0x0000,0x0003,0x0000,0x2000,0x0000,0x0000,
		0x0003,0x0001,0x0000,0x0800,0x0000,0x0003,0x0001,0xe2a0,
		0x0800,0x0000,0x0001,0x8005,0x80a0,0x0800,0x0000,0x0001,
		0x8002,0x3000,0x0000,0x0000,0x0000,0xc004,0x0a40,0x0000,
		0x0000,0x0000,0x4006,0x2d00,0x0000,0x0000,0x0000,0x5001,
		0x9800,0x1800,0x0000,0x0000,0x2800,0x8020,0x1800,0x0000,
		0x0000,0x4800,0x0000,0x3800,0x0000,0x0000,0x3000,0x0000,
		0x3800,0x0000,0x0000,0x3400,0x0180,0x0800,0x0000,0x0000,
		0x1800,0x01c0,0x8800,0x0000,0x0000,0x1c00,0x0009,0x0800,
		0x0000,0x0000,0x0500,0x0001,0x9000,0x0000,0x0000,0x0c80,
		0x0103,0x1000,0x0000,0x0000,0x0100,0x0420,0x0800,0x0000,
		0x0000,0x0420,0x5825,0x0800,0x0000,0x0000,0x0712,0x3800,
		0x09c0,0x0000,0x0000,0x0701,0xfe80,0x0cf8,0x0000,0x0000,
		0x0600,0x0000,0x0378,0x0000,0x0000,0x0600,0xa000,0x01fa,
		0x0000,0x0000,0x0e00,0x0100,0x2151,0x8000,0x0000,0x1400,
		0x0e00,0x01c0,0xf800,0x0000,0x3400,0x0000,0x03db,0xfc00,
		0x0000,0xf600,0x0000,0x07fd,0xfc00,0x0001,0xd600,0x1e00,
		0x01fb,0xf000,0x0007,0x7e00,0x0000,0x06fb,0xf800,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0c00,
		0x0000,0x0000,0x0000,0x0003,0x8300,0x0000,0x0000,0x0000,
		0x0030,0xe180,0x0000,0x0000,0x0000,0x004e,0xf840,0x0000,
		0x0000,0x0000,0x01a0,0xfc20,0x0000,0x0000,0x0000,0x0300,
		0x3c18,0x0000,0x0000,0x0000,0x0400,0x3e1c,0xc000,0x0000,
		0x0000,0x0e01,0x060e,0x0000,0x0000,0x0008,0x1420,0x0f86,
		0x0000,0x0000,0x0019,0x2600,0x0786,0x0000,0x0000,0x001f,
		0xef00,0x1fe2,0x0000,0x0000,0x001f,0xcf38,0x7fe2,0x0000,
		0x0000,0x001f,0x8f00,0x7de3,0x3000,0x0000,0x000f,0xbc00,
		0x1463,0x1000,0x0000,0x000d,0x3c1f,0xdc23,0x1000,0x0000,
		0x0009,0xbc40,0x1a57,0x8000,0x0000,0x0003,0x39e0,0x354b,
		0x8000,0x0000,0x0003,0xb808,0x6643,0x4000,0x0000,0x000f,
		0x98ee,0x42c6,0xc400,0x0000,0x0007,0x900d,0x8d7b,0x8600,
		0x0000,0x0007,0x150a,0x2de3,0x8600,0x0000,0x0001,0xbe61,
		0x41c3,0x8400,0x0000,0x0001,0x8950,0x83e6,0x2600,0x0000,
		0x0001,0x9390,0x04c6,0x2000,0x0000,0x0005,0x8718,0x8983,
		0x2000,0x0000,0x0009,0x88c0,0xc59b,0x2400,0x0000,0x0004,
		0x8e70,0x20d9,0x2400,0x0000,0x000e,0x4300,0x949b,0x2000,
		0x0000,0x0006,0x4623,0x340b,0x0000,0x0000,0x0000,0x6262,
		0xc789,0x9000,0x0000,0x0000,0x46d5,0x4438,0xd000,0x0000,
		0x0003,0x43e4,0xe418,0x5000,0x0000,0x0001,0xe70c,0x0d10,
		0x4000,0x0000,0x0000,0x4638,0x7e44,0x5000,0x0000,0x0000,
		0x4fb8,0x4394,0x5000,0x0000,0x0000,0x1d4d,0x3234,0x5000,
		0x0000,0x0000,0x5ea8,0x10f0,0x5000,0x0000,0x0000,0x6f18,
		0x41d8,0xa000,0x0000,0x0000,0x45de,0x64d4,0xa000,0x0000,
		0x0000,0x11c1,0x8cf2,0xc000,0x0000,0x0000,0x0f61,0xf198,
		0x0000,0x0000,0x0000,0x1ba0,0x0205,0x7000,0x0000,0x0000,
		0x03af,0x9205,0xf000,0x0000,0x0000,0x098f,0xbde6,0xd000,
		0x0000,0x0000,0x0ecf,0xc27f,0xa000,0x0000,0x0000,0x056f,
		0x0665,0xa000,0x0000,0x0000,0x0470,0x7984,0x3000,0x0000,
		0x0000,0x019c,0x20c8,0xb000,0x0000,0x0000,0x02e8,0x445f,
		0x9140,0x0000,0x0000,0x02ee,0x003c,0x00b0,0x0000,0x0000,
		0x03c3,0x8261,0x0cf4,0x0000,0x0000,0x0280,0x1d8b,0xce7e,
		0x0000,0x0000,0x0287,0x009b,0xcfff,0xc000,0x0000,0x1ec1,
		0x0031,0xe5ff,0xf000,0x0000,0x28ec,0x6038,0x303f,0xfc00,
		0x0000,0x38cf,0xe01c,0x38ff,0xfc00,0x0000,0xf9cf,0x003c,
		0x2f7f,0xfc00,0x0007,0xf9df,0x801e,0x0bff,0xfc00,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x7c00,0x0000,0x0000,0x0000,
		0x000f,0xfe00,0x0000,0x0000,0x0000,0x003e,0xff80,0x0000,
		0x0000,0x0000,0x0060,0xffc0,0x0000,0x0000,0x0000,0x0100,
		0x3fe0,0x0000,0x0000,0x0000,0x0200,0x3fe0,0x0000,0x0000,
		0x0000,0x0600,0x07f0,0x0000,0x0000,0x0000,0x0c00,0x0ff8,
		0x0000,0x0000,0x0000,0x1e00,0x07f8,0x0000,0x0000,0x0000,
		0x1f00,0x1ffc,0x0000,0x0000,0x0000,0x3f00,0x7ffc,0x0000,
		0x0000,0x0000,0x7f00,0x7dfc,0x0000,0x0000,0x0000,0x7c00,
		0x007c,0x0000,0x0000,0x0000,0xfc00,0x203c,0x0000,0x0000,
		0x0000,0x7c3f,0xe3d8,0x0000,0x0000,0x0000,0xf81f,0xc70c,
		0x0000,0x0000,0x0000,0x7807,0x867f,0x8000,0x0000,0x0000,
		0x79e1,0x9d02,0x8000,0x0000,0x0000,0x703c,0x1c87,0xc000,
		0x0000,0x0000,0xf1fe,0x3fff,0xc000,0x0000,0x0000,0xb8c7,
		0x7fff,0xc200,0x0000,0x0000,0x92df,0xffff,0xc000,0x0000,
		0x0000,0x9f9f,0xfc07,0xc000,0x0000,0x0008,0x871f,0xf863,
		0xc000,0x0000,0x0000,0x8fc7,0xfc63,0xc000,0x0000,0x0000,
		0x8e07,0x3e21,0xc000,0x0000,0x0000,0xc0ee,0x5e03,0xc000,
		0x0000,0x0004,0xc1ce,0xde03,0xe000,0x0000,0x0002,0xe182,
		0x1f89,0xe000,0x0000,0x0002,0xc127,0x07f8,0xe000,0x0000,
		0x0000,0xc004,0x07f8,0x6000,0x0000,0x0000,0x600c,0x0ff0,
		0x7000,0x0000,0x0001,0x403c,0x0f20,0x6000,0x0000,0x0000,
		0x41b8,0x0250,0x6000,0x0000,0x0000,0x4273,0x3df0,0x6000,
		0x0000,0x0000,0x0131,0xfff0,0x6000,0x0000,0x0000,0x209f,
		0xc1f8,0xc000,0x0000,0x0000,0x221e,0x18f4,0xc000,0x0000,
		0x0000,0x3600,0x70f6,0x8000,0x0000,0x0000,0x1800,0x01fc,
		0xc000,0x0000,0x0000,0x0800,0x03fd,0x8000,0x0000,0x0000,
		0x080f,0x83fd,0x0000,0x0000,0x0000,0x040f,0x81ff,0x2000,
		0x0000,0x0000,0x020f,0xbc7e,0x4000,0x0000,0x0000,0x030f,
		0x3866,0x4000,0x0000,0x0000,0x0300,0x0187,0xc000,0x0000,
		0x0000,0x0380,0x000f,0xc000,0x0000,0x0000,0x01e7,0x839f,
		0xe000,0x0000,0x0000,0x01e1,0xff3c,0xf0c0,0x0000,0x0000,
		0x01c0,0x7c61,0xf030,0x0000,0x0000,0x0180,0x0183,0xf076,
		0x0000,0x0000,0x0d80,0x0063,0xf03e,0x0000,0x0000,0x09c0,
		0xffc1,0xfa7f,0x6000,0x0000,0x1fe0,0x1fc0,0x3fbe,0x0000,
		0x0000,0x5fc0,0x1fe0,0x3fbe,0x0000,0x0001,0x7bc0,0xffc0,
		0x2ffc,0x0c00,0x0002,0xfbc0,0x7fe0,0x0ffc,0x0400,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0000,
		0x0000,0x0000,0x001f,0x0000,0x0000,0x0000,0x0000,0x00ff,
		0xc000,0x0000,0x0000,0x0000,0x01ff,0xc000,0x0000,0x0000,
		0x0000,0x01ff,0xf800,0x0000,0x0000,0x0000,0x03ff,0xf000,
		0x0000,0x0000,0x0000,0x01ff,0xf800,0x0000,0x0000,0x0000,
		0x00ff,0xe000,0x0000,0x0000,0x0000,0x00ff,0x8000,0x0000,
		0x0000,0x0000,0x00ff,0x8200,0x0000,0x0000,0x0000,0x03ff,
		0xff80,0x0000,0x0000,0x0000,0x03ff,0xffc0,0x0000,0x0000,
		0x0000,0x03ff,0xfc20,0x0000,0x0000,0x0000,0x07ff,0xf8f0,
		0x0000,0x0000,0x0000,0x07ff,0xf980,0x0000,0x0000,0x0000,
		0x061f,0xe001,0x0200,0x0000,0x0000,0x0fc3,0xe300,0x0200,
		0x0000,0x0000,0x0e01,0xc000,0x0200,0x0000,0x0000,0x4038,
		0x8000,0x0000,0x0000,0x0000,0x6020,0x0000,0x0000,0x0000,
		0x0000,0x6060,0x03f8,0x0000,0x0000,0x0000,0x78e0,0x07fc,
		0x0000,0x0000,0x000c,0x7038,0x03fc,0x0000,0x0000,0x000c,
		0x71f8,0xc1fe,0x0000,0x0000,0x0004,0x3ff1,0xe1fc,0x0000,
		0x0000,0x0000,0x3ff1,0xe1fc,0x0000,0x0000,0x0000,0x1ffd,
		0xe076,0x0000,0x0000,0x0000,0x3ff8,0xf807,0x0000,0x0000,
		0x0000,0x3ffb,0xf807,0x8000,0x0000,0x0000,0x1ff3,0xf00f,
		0x8000,0x0000,0x0000,0x3fc3,0xf01f,0x8000,0x0000,0x0000,
		0x3e47,0xfc2f,0x8000,0x0000,0x0000,0x3f80,0xc00f,0x8000,
		0x0000,0x0000,0x3fc0,0x000f,0x8000,0x0000,0x0000,0x1fe0,
		0x3e07,0x0000,0x0000,0x0000,0x1fe1,0xff0b,0x0000,0x0000,
		0x0000,0x0fff,0xff09,0x0000,0x0000,0x0000,0x07ff,0xfe03,
		0x0000,0x0000,0x0000,0x07ff,0xfc02,0x0000,0x0000,0x0000,
		0x07f0,0x7c02,0x0000,0x0000,0x0000,0x03f0,0x7e00,0x0000,
		0x0000,0x0000,0x01f0,0x7f80,0x0000,0x0000,0x0000,0x00f0,
		0xff98,0x0000,0x0000,0x0000,0x00ff,0xfe78,0x0000,0x0000,
		0x0000,0x007f,0xfff0,0x0000,0x0000,0x0000,0x001f,0xffe0,
		0x0080,0x0000,0x0000,0x001f,0xffc3,0x0060,0x0000,0x0000,
		0x003f,0xff9e,0x0078,0x0000,0x0000,0x007f,0xfe7c,0x003c,
		0x0000,0x0000,0x007f,0xfffc,0x003f,0x0000,0x0000,0x083f,
		0xfffe,0x003f,0x8000,0x0000,0x181f,0xffff,0xc07f,0xfc00,
		0x0000,0x383f,0xffff,0xc07f,0xfc00,0x0000,0xfc3f,0xffff,
		0xd0ff,0xfc00,0x0001,0xfc3f,0xffff,0xf1ff,0xfc00};

ULONG
	john_palette[]={
		0x00100000,
		0x00000000,0x00000000,0x00000000,
		0x11111111,0x11111111,0x00000000,
		0x22222222,0x22222222,0x11111111,
		0x33333333,0x22222222,0x22222222,
		0x44444444,0x22222222,0x22222222,
		0x44444444,0x33333333,0x33333333,
		0x55555555,0x44444444,0x33333333,
		0x44444444,0x44444444,0x55555555,
		0x66666666,0x55555555,0x44444444,
		0x66666666,0x55555555,0x55555555,
		0x77777777,0x66666666,0x55555555,
		0x66666666,0x77777777,0x88888888,
		0x88888888,0x77777777,0x66666666,
		0x88888888,0x88888888,0x88888888,
		0x88888888,0x99999999,0x99999999,
		0x88888888,0xaaaaaaaa,0xaaaaaaaa};
