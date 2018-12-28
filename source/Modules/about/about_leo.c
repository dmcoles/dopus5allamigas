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
	leo_data[]={
		0xf151,0xf56b,0x8db0,0x3415,0x4000,0xdbaa,0xdc9b,0x2a4f,
		0xf62b,0xe800,0x5405,0x9c17,0x8ab4,0x5355,0x5400,0xaaaf,
		0x7752,0x19b0,0xb96e,0xa800,0x1017,0xf39e,0x6d93,0x9c55,
		0x5000,0xa9ae,0xcd52,0x653c,0x8e4b,0xa800,0x4055,0x546c,
		0x0b0e,0xe575,0x5000,0xbaae,0xf3c2,0x10bb,0xee8b,0xa800,
		0x5515,0xbd81,0x154d,0xdddf,0x5400,0xaabb,0x5b2b,0xbb95,
		0xa2e4,0xb800,0x4455,0x8e45,0x55ce,0x8263,0xc400,0x00b5,
		0x24af,0xffe7,0xe0bd,0xe800,0x0006,0xd645,0xfff2,0xca13,
		0x4000,0xaaac,0xccaf,0xfff8,0xe1bd,0xa800,0x504e,0x625d,
		0xfff3,0x9a5d,0x4000,0x2880,0xc8bf,0xffe9,0x20df,0xe800,
		0x004a,0x501d,0xfff3,0x5294,0x4400,0x0a28,0xb0bf,0xfff9,
		0x60de,0x2c00,0x0042,0x9857,0xffc5,0x6ade,0xc800,0x008e,
		0x30ff,0xffff,0x4a79,0x6c00,0x0404,0x9857,0xfff4,0x6952,
		0x8400,0x040c,0x30bf,0xfffe,0x8eb9,0x6000,0x0006,0x9a5f,
		0xfffc,0xe25b,0x7000,0x8824,0xb32f,0xfff8,0x5f3c,0xe800,
		0x0102,0xe9c7,0xfd50,0x81b7,0x5000,0x8a29,0xd473,0xea01,
		0x1c89,0xa800,0x4005,0xfb50,0x4d5c,0xd225,0x4400,0x408e,
		0xcc00,0x9001,0x384e,0xe800,0x8005,0xb981,0x3e8b,0xc334,
		0x1000,0x6a2e,0x648b,0x99c5,0xf8ca,0xa800,0xc003,0x1305,
		0x37e5,0x8634,0x4400,0x68a1,0x8b6f,0x9c33,0x689a,0xa800,
		0x001d,0x7fa5,0x2ed9,0xe971,0x1000,0xa8a7,0x0567,0x8014,
		0x53da,0xa800,0x0005,0x829d,0x4004,0x3bf4,0x4400,0x8807,
		0x0876,0xeeee,0x949e,0xe800,0x0445,0x9445,0x7757,0x0a55,
		0x5000,0x2a1f,0x2a4f,0xbfff,0xb4ea,0xa000,0x0059,0x05cd,
		0x1ffd,0x3a4d,0x4400,0x8287,0x2f6f,0xaffe,0x90e6,0xe800,
		0x039d,0x965f,0x1fff,0x2054,0x5000,0x8131,0x2ab9,0x3fff,
		0xaab9,0xb800,0x012f,0x8099,0xbffd,0x2c5d,0x1400,0x8b68,
		0x09cc,0x3ffe,0x328c,0xa800,0x5552,0xaf3e,0x9ff4,0x35c5,
		0x4000,0xf964,0xd904,0x3ffa,0x5eeb,0xa800,0x46c2,0x4ae7,
		0x71f4,0x3160,0x4000,0xabe4,0xe0c8,0x6aee,0x18d0,0x6800,
		0x5746,0x4094,0xf254,0x305e,0x4000,0x2be0,0x663f,0xe9fa,
		0x9d95,0x2800,0x0140,0x5b68,0xbe54,0x33bd,0x0000,0x2aa9,
		0x37d0,0xabee,0x0665,0x8000,0x0141,0x9ff8,0x4244,0x355d,
		0x4000,0xeaa0,0x3d5c,0x28a8,0x46fb,0xa000,0xc441,0xa6aa,
		0x4244,0xec54,0x4000,0xa6a8,0xe342,0x8fa8,0x68fa,0xa800,
		0x0400,0x4160,0x3e02,0xd915,0x4000,0x2a8a,0x90c8,0x7e09,
		0x08ba,0xa000,0x0400,0x59a3,0x4283,0x901c,0x0000,0x0a88,
		0x2c1c,0x1486,0x68a8,0x8000,0x0400,0x1411,0x752c,0xd110,
		0x0000,0x0e00,0x2b1b,0x2dda,0x7a8a,0x8000,0x4500,0x1462,
		0x7ad5,0x6040,0x4400,0xbe80,0x56be,0xe4ed,0xf2a8,0x8800,
		0x1500,0x88d5,0x45d7,0xb000,0x4000,0x2e80,0x5bfa,0xefdf,
		0x1a2a,0xa000,0x0541,0xae5d,0xfe7f,0x4404,0x4400,
		0x0000,0x0014,0x705f,0xc000,0x0000,0x2000,0x222e,0xf0bf,
		0xe800,0x0000,0x0000,0x400c,0x754f,0xfc00,0x0000,0x0000,
		0x88af,0xeeef,0xfe80,0x0000,0x0000,0x0061,0xd07d,0x7f00,
		0x0000,0x0000,0x22af,0x7a8b,0xffa0,0x0000,0x0000,0x01e8,
		0x0bc1,0xdf80,0x0000,0x0000,0x0f3f,0xef20,0xffe0,0x0000,
		0x0000,0x447f,0xff80,0x77e0,0x0000,0x0000,0xa8ff,0xffe6,
		0x7ffa,0x0000,0x0000,0x79ff,0xfff3,0x7dfc,0x0000,0x000a,
		0xf3ff,0xfff9,0x3ffa,0x0000,0x0001,0x71ff,0xfffc,0x35fc,
		0x0000,0x0003,0xc3ff,0xfffe,0xbefe,0x0000,0x0001,0xe5ff,
		0xfffc,0xf5fe,0x0000,0x000f,0xc7ff,0xfffe,0x7fde,0x0000,
		0x0005,0xc7ff,0xfffc,0x7d7f,0x0000,0x0007,0x8fff,0xfffe,
		0x7fdf,0x8000,0x0005,0x87ff,0xfffe,0x557d,0x0400,0x0003,
		0x0fff,0xfffe,0x7ffe,0x8000,0x0003,0x87ff,0xffff,0x57fd,
		0x4000,0x0003,0x0fff,0xffff,0x7bfe,0x8000,0x0001,0x85ff,
		0xffff,0x5de4,0x0000,0x0003,0xf0ff,0xffff,0xeae2,0x0000,
		0x0001,0x17bf,0xffff,0x3f40,0x0000,0x0002,0x2bcf,0xf000,
		0xabe2,0x0000,0x0002,0x7bcf,0xfffe,0x2dc0,0x0000,0x8003,
		0xc00f,0xe001,0x2fa0,0x0000,0x4003,0xbf87,0xc174,0xfdc0,
		0x0000,0x8002,0x7787,0xe03a,0x6fa0,0x0000,0x0006,0x3347,
		0xc0c0,0x3dc0,0x0000,0x800c,0x0087,0xe360,0xbfe0,0x0000,
		0x0004,0x0047,0xd108,0x3780,0x0000,0x000c,0xfa8f,0xffeb,
		0x8fa0,0x0000,0x0004,0x7d47,0xffff,0xe5c0,0x0000,0x000c,
		0xff8f,0xffff,0xcbe0,0x0000,0x0004,0x7f9f,0xffff,0xd5e0,
		0x0000,0x0024,0xffbf,0xffff,0xdbf0,0x0000,0x0000,0xff3f,
		0xffff,0xd5f0,0x0000,0x007c,0xffbf,0xffff,0xfff8,0x0000,
		0x0074,0x7f3f,0xffff,0xcff8,0x0000,0x02fc,0xff3e,0xffff,
		0xcffe,0x0000,0x00d6,0x7f04,0x5fff,0xcffc,0x0000,0x0084,
		0xfe03,0xffff,0xc7fe,0x0000,0x0006,0x5001,0x7fff,0xc7fe,
		0x0000,0x0280,0x213b,0xffff,0xa7fe,0x0000,0x0106,0x0a98,
		0x0fff,0xc3df,0x0000,0x0000,0x103f,0x81ff,0xe3ef,0x8000,
		0x0002,0x0081,0x03ff,0xc3e1,0x0000,0x0000,0x0800,0x00ff,
		0xe6ea,0x8000,0x0002,0x0417,0x42ff,0xc040,0x0000,0x0003,
		0x082f,0xfcff,0xe48a,0x0000,0x0001,0x8007,0xfdff,0xc400,
		0x0000,0x0001,0x02a3,0xffff,0xa000,0x0000,0x0000,0xa155,
		0xfdff,0x0800,0x0000,0x0000,0xf0bf,0xf0ff,0x8800,0x0000,
		0x0000,0x781f,0xc2fd,0x1000,0x0000,0x0000,0x6c3f,0x80fe,
		0x9000,0x0000,0x0000,0x079c,0x027c,0x2000,0x0000,0x0000,
		0x0322,0x1478,0x6000,0x0000,0x0000,0x0180,0x7f50,0xe000,
		0x0000,0x0000,0x00df,0x7b20,0x6000,0x0000,0x0000,0x001d,
		0xc400,0xb000,0x0000,0x0000,0x2800,0x0c03,0xa800,0x0000,
		0x0000,0x3700,0x100f,0x8000,0x0000,0x0000,0x1fff,0xe03f,
		0xe000,0x0000,0x0000,0x6e00,0x01ff,0x8000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x8000,0x0000,0x0000,0x0000,0x0017,
		0xf400,0x0000,0x0000,0x0000,0x00ff,0xffc0,0x0000,0x0000,
		0x0000,0x03ff,0xfff0,0x0000,0x0000,0x0000,0x07ff,0xfff8,
		0x0000,0x0000,0x0000,0x07ff,0xfffc,0x0000,0x0000,0x0000,
		0x0fff,0xfffe,0x0000,0x0000,0x0000,0x0fff,0xffff,0x0000,
		0x0000,0x0000,0x3fff,0xffff,0x0000,0x0000,0x0000,0x1fff,
		0xffff,0x0000,0x0000,0x0000,0x3fff,0xffff,0x8020,0x0000,
		0x0000,0x3fff,0xffff,0x8000,0x0000,0x0000,0x7fff,0xffff,
		0x8020,0x0000,0x0000,0x7fff,0xffff,0x8000,0x0000,0x0000,
		0xffff,0xffff,0x8000,0x0000,0x0000,0x7fff,0xffff,0x8000,
		0x0000,0x0000,0xffff,0xffff,0x8000,0x0000,0x0000,0x7fff,
		0xffff,0x8000,0x0000,0x0000,0x0fff,0xffff,0x8000,0x0000,
		0x0000,0x007f,0xffff,0xc000,0x0000,0x0000,0x003f,0xffff,
		0xc000,0x0000,0x0000,0x043f,0xf001,0xc000,0x0000,0x0000,
		0x3fff,0xfffe,0xc000,0x0000,0x0000,0x407f,0xffff,0x0000,
		0x0000,0x0001,0x887f,0xffff,0x8000,0x0000,0x0001,0xccff,
		0xff1f,0xc000,0x0000,0x0003,0xffff,0xff9f,0xc000,0x0000,
		0x0003,0xffff,0xfff7,0xc000,0x0000,0x0003,0xffff,0xffff,
		0xe000,0x0000,0x0003,0xffff,0xffff,0xc000,0x0000,0x0003,
		0xffff,0xffff,0xe000,0x0000,0x0003,0xffff,0xffff,0xe000,
		0x0000,0x0003,0xffff,0xffff,0xe000,0x0000,0x0007,0xffff,
		0xffff,0xe000,0x0000,0x0003,0xffff,0xffff,0xe000,0x0000,
		0x0003,0xffff,0xffff,0xf000,0x0000,0x0003,0xffff,0xffff,
		0xf000,0x0000,0x0001,0xffff,0xffff,0xf000,0x0000,0x0003,
		0xffff,0xffff,0xf800,0x0000,0x0001,0xffff,0xffff,0xf800,
		0x0000,0x0003,0xfeff,0xffff,0xf800,0x0000,0x0001,0xf57f,
		0xffff,0xfc00,0x0000,0x0003,0xefff,0xffff,0xfc00,0x0000,
		0x0001,0xff7f,0xfdff,0xfc00,0x0000,0x0003,0xffff,0xffff,
		0xf800,0x0000,0x0001,0xffff,0xfdff,0xfc00,0x0000,0x0000,
		0xffff,0xffff,0xf800,0x0000,0x0000,0x7fff,0xffff,0xf800,
		0x0000,0x0000,0xffff,0xffff,0xf800,0x0000,0x0000,0x5fff,
		0xffff,0xf000,0x0000,0x0000,0x0fff,0xffff,0xf000,0x0000,
		0x0000,0x07ff,0xfdff,0xe000,0x0000,0x0000,0x03ff,0xffff,
		0xe000,0x0000,0x0000,0x007f,0xfdff,0xc000,0x0000,0x0000,
		0x00ff,0xebff,0x8000,0x0000,0x0000,0x007f,0x80ff,0x0000,
		0x0000,0x0000,0x0020,0x80ff,0x8000,0x0000,0x0000,0x0000,
		0x01ff,0xc000,0x0000,0x0000,0x0000,0x03ff,0xc000,0x0000,
		0x0000,0x4000,0x0fff,0xc000,0x0000,0x0000,0xe000,0x1fff,
		0x8000,0x0000,0x0000,0xd1ff,0xffff,0x0000,0x0000};

ULONG
	leo_palette[]={
		0x00080000,
		0x22222222,0x11111111,0x11111111,
		0x33333333,0x22222222,0x22222222,
		0x55555555,0x33333333,0x22222222,
		0x66666666,0x44444444,0x33333333,
		0x99999999,0x55555555,0x44444444,
		0xbbbbbbbb,0x77777777,0x66666666,
		0xcccccccc,0x99999999,0x77777777,
		0xeeeeeeee,0xaaaaaaaa,0x99999999};
