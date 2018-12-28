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
	juggler_data[]={
		0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,0xffff,0xffff,
		0xffff,0xfc00,0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,
		0xffff,0xf03f,0xffff,0xfc00,0xffff,0xffff,0xc01f,0xffff,
		0xfc00,0xffff,0xffff,0xc11f,0xffff,0xfc00,0xffff,0xffff,
		0x000f,0xffff,0xfc00,0xffff,0xffff,0x0107,0xffff,0xfc00,
		0xffff,0xffff,0x000f,0xffff,0xfc00,0xffff,0xffff,0x000f,
		0xffff,0xfc00,0xffff,0xffff,0x800f,0xffff,0xfc00,0xffff,
		0xffff,0xc01f,0xffff,0xfc00,0xffff,0xffff,0xf07f,0xffff,
		0xfc00,0xffff,0xffff,0xf07f,0xffff,0xfc00,0xffff,0xffff,
		0xfc7f,0xffff,0xfc00,0xffff,0xffff,0xc703,0xffff,0xfc00,
		0xffff,0xffff,0x7fe5,0xffff,0xfc00,0xffff,0xffff,0x7fe1,
		0xffff,0xfc00,0xffff,0xfffd,0xffe0,0xffff,0xfc00,0xffff,
		0xfff9,0xf3ec,0xffff,0xfc00,0xffff,0xfffb,0xf3fd,0x7fff,
		0xfc00,0xffff,0xfffb,0xffb4,0x7fff,0xfc00,0xffff,0xffff,
		0x55fd,0x7fff,0xfc00,0xffff,0xfffb,0xfdda,0x3fff,0xfc00,
		0xffff,0xfffb,0xd7e2,0x3fff,0xfc00,0xffff,0xfffd,0x5760,
		0x1fff,0xfc00,0xffff,0xfffb,0xff40,0x1fff,0xfc00,0xffff,
		0xfffb,0xff80,0x4fff,0xfc00,0xfff8,0xfff1,0x4000,0x4fff,
		0xfc00,0xffa0,0x0ff5,0x0002,0x8fff,0xfc00,0xff80,0x0ff4,
		0x4003,0x4fff,0xfc00,0xff40,0x03fc,0x8004,0x03ff,0xfc00,
		0xfeff,0x93f9,0x800d,0x87ff,0xfc00,0x7d5d,0x0301,0xfd7f,
		0xcfff,0x7c00,0xff00,0x0301,0xff7e,0x83ff,0xfc00,0xd9e4,
		0xbc3e,0x02ef,0x038d,0x8c00,0x99ff,0xffde,0xf3f7,0x0df1,
		0xb800,0x9312,0x7065,0xdc6f,0x307e,0x0c00,0x1132,0x7045,
		0xdc6f,0x302a,0x0400,0xf8f0,0x477f,0x9877,0xf71f,0xf800,
		0xbffe,0x7f7d,0xc58f,0xf7f3,0xfc00,0x3fe0,0x3fea,0x605c,
		0x7fe0,0xfc00,0x0e00,0x0602,0x6014,0x0f00,0x0800,0x03e6,
		0x0072,0xa242,0x7006,0x3c00,0x2003,0xc604,0x39c0,0x031e,
		0x0000,0x0d00,0x0064,0x0043,0x3000,0x3c00,0x8040,0x0008,
		0x4042,0x07f0,0x1000,0x8040,0x0208,0x4000,0x07f0,0x1000,
		0x00ff,0xc008,0xfdc0,0x07ff,0xf000,0x1800,0x0c08,0x8001,
		0x7ff8,0x0000,0x0000,0x0000,0x0020,0xfffe,0x0000,0x0000,
		0x0141,0x0021,0xfffe,0x0000,0x0005,0xc010,0x7fc2,0x7ffe,
		0x0000,0x0078,0x0018,0xffa1,0xffcf,0xf000,0x0800,0x0010,
		0xff95,0xff87,0x0000,0x0000,0x0010,0xfffd,0xff87,0x0000,
		0x0000,0x0009,0x0021,0x878c,0x0000,0x0000,0x00ed,0x00e1,
		0x3ffc,0x0000,0x0000,0x000f,0x03d8,0x3ffc,0x0000,0x0000,
		0x0008,0x03d0,0x3ffc,0x0000,0x0007,0x0001,0x0f08,0x7fff,
		0x0000,0x0070,0x0005,0x3c05,0x7fc0,0x7000,0x0400,0x0000,
		0x7808,0xf000,0x0000,0x0400,0x0005,0x7808,0x7000,0x0000,
		0xa000,0x0004,0xe000,0xc000,0x0000,0x0800,0x0005,0x8001,
		0x8000,0x0000,0x0200,0x0000,0x0004,0x0000,0x0000,
		0xbbff,0xdff5,0xfff5,0x7dff,0xfc00,0xbedf,0x55f6,0xab55,
		0xf5bf,0xfc00,0xfdf7,0xfdf7,0xb7ee,0xfd7f,0xec00,0xfbef,
		0xdfbf,0xe39f,0x7ffc,0xfc00,0xfffb,0xffff,0xf03f,0xfebf,
		0xfc00,0xdfbb,0xf5ff,0xb0af,0xffff,0xec00,0xffff,0xffdf,
		0xdc5f,0xdfff,0xfc00,0xffff,0xffff,0xdeaf,0xffff,0xfc00,
		0xffff,0xfffe,0xc067,0xffff,0xfc00,0xffff,0xfffe,0x804f,
		0xffff,0xfc00,0xffff,0xfd7f,0xfe1f,0xffff,0xfc00,0xffff,
		0xffff,0x903f,0xffff,0xfc00,0xffff,0xffff,0xedbf,0xffff,
		0xfc00,0xffff,0xffff,0xfbff,0xffff,0xfc00,0xffff,0xffff,
		0xf07f,0xffff,0xfc00,0xffff,0xffff,0xc703,0xffff,0xfc00,
		0xffff,0xffff,0x7fc3,0xffff,0xfc00,0xffff,0xffff,0x7fc3,
		0xffff,0xfc00,0xffff,0xfffd,0xffe0,0xffff,0xfc00,0xffff,
		0xfff9,0xf3e0,0xffff,0xfc00,0xffff,0xfffb,0xf3f8,0x7fff,
		0xfc00,0xffff,0xfffb,0xffb8,0x7fff,0xfc00,0xffff,0xffff,
		0x55f8,0x7fff,0xfc00,0xffff,0xfffb,0xfdd8,0x3fff,0xfc00,
		0xffff,0xfffb,0xd7e0,0x3fff,0xfc00,0xffff,0xfff9,0x5762,
		0x1fff,0xfc00,0xffff,0xfffb,0xff53,0x1fff,0xfc00,0xffff,
		0xfffb,0xffaa,0x0fff,0xfc00,0xfff7,0x3ff1,0x4bd2,0x4fff,
		0xfc00,0x005f,0xf801,0x77f8,0x1000,0x0000,0x007f,0xf000,
		0x3ffd,0x0000,0x0000,0x00bf,0xdc01,0x7ffb,0x0400,0x0000,
		0x0148,0x1c06,0x7ff0,0x8400,0x0000,0x005d,0x680a,0x8282,
		0x0200,0x0000,0x0000,0x4900,0x8082,0x0200,0x0000,0x00bb,
		0x8c42,0x0000,0x0400,0x0000,0x097f,0x8003,0xff72,0x0000,
		0x0000,0x9d23,0xa059,0xdf6e,0x0040,0x0000,0x1f03,0xa039,
		0xdf6e,0x0014,0x0000,0x3810,0x4486,0x1ff0,0x0918,0x0800,
		0xbc06,0x709c,0xc788,0xc872,0xa000,0x3fe0,0x3de8,0x3fa0,
		0x7de0,0xfc00,0x0e00,0x0400,0x1fe0,0x0f00,0x0800,0xffe5,
		0xff90,0x1c04,0x0ff8,0x2000,0xe003,0xbe00,0x7608,0x02fe,
		0x0000,0xf5ff,0xffe0,0x3fa9,0x0fff,0xc400,0x807f,0xfe08,
		0xbf80,0x01ef,0xf000,0x807f,0xfe08,0xbfc2,0x000f,0xf000,
		0x00ff,0xc001,0x76c2,0x0001,0xf000,0x1fff,0xfc00,0x7fcb,
		0x0017,0xfc00,0xffff,0xfff0,0xffe4,0x81ed,0xfc00,0xffff,
		0xfff0,0xffe8,0x002d,0xfc00,0xffff,0xc001,0x8fc8,0x0001,
		0xfc00,0xfff8,0x0011,0x0604,0x0000,0xfc00,0xf800,0x0013,
		0x0680,0x0000,0x0000,0xf000,0x0003,0x06c0,0x0000,0x0000,
		0x0000,0x0001,0xffc1,0x8000,0x0000,0x0000,0x00b0,0xff60,
		0xc000,0x0000,0x0000,0x07f1,0xffe5,0xe800,0x0000,0x0000,
		0x07f0,0xffe1,0xd800,0x0000,0x0007,0xfff8,0xfef1,0xbfe7,
		0x0000,0x005f,0xfff8,0xcff0,0xf03f,0xf000,0x07ff,0xfffa,
		0xb7f1,0xefff,0xfc00,0x07ff,0xfff9,0xf7f1,0x6fff,0xfc00,
		0xbfff,0xfff8,0x9ffa,0xffff,0xfc00,0x0fff,0xfff8,0x7ff9,
		0xffff,0xfc00,0x03ff,0xffff,0xfff8,0xffff,0xfc00,
		0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,0xffff,0xffff,
		0xffff,0xfc00,0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,
		0xffff,0xfc7f,0xffff,0xfc00,0xffff,0xffff,0xef1f,0xffff,
		0xfc00,0xffff,0xffff,0xee1f,0xffff,0xfc00,0xffff,0xffff,
		0xb38f,0xffff,0xfc00,0xffff,0xffff,0x22cf,0xffff,0xfc00,
		0xffff,0xffff,0x3f8f,0xffff,0xfc00,0xffff,0xffff,0x7f8f,
		0xffff,0xfc00,0xffff,0xffff,0xc00f,0xffff,0xfc00,0xffff,
		0xffff,0xe03f,0xffff,0xfc00,0xffff,0xffff,0xf27f,0xffff,
		0xfc00,0xffff,0xffff,0xf67f,0xffff,0xfc00,0xffff,0xffff,
		0xf3ff,0xffff,0xfc00,0xffff,0xffff,0xffff,0xffff,0xfc00,
		0xffff,0xffff,0xffdb,0xffff,0xfc00,0xffff,0xffff,0xffdf,
		0xffff,0xfc00,0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,
		0xffff,0xfff3,0xffff,0xfc00,0xffff,0xffff,0xffe2,0xffff,
		0xfc00,0xffff,0xffff,0xffe3,0xffff,0xfc00,0xffff,0xfffb,
		0xff82,0xffff,0xfc00,0xffff,0xfffd,0x7e05,0xffff,0xfc00,
		0xffff,0xfffd,0xff05,0xffff,0xfc00,0xffff,0xfff9,0xfe81,
		0xffff,0xfc00,0xffff,0xfffd,0xfe81,0xffff,0xfc00,0xffff,
		0xfffc,0xfc01,0xbfff,0xfc00,0xfff8,0xfffe,0xfde3,0xffff,
		0xfc00,0x0020,0x100a,0xc819,0x6000,0x0000,0x0020,0x200b,
		0xc808,0xb000,0x0000,0x00e8,0x0003,0x8006,0xf800,0x0000,
		0x3dff,0xed83,0x800e,0x7bff,0x3000,0x5dff,0xe6ff,0xfd7e,
		0x3143,0x6400,0x6dff,0xe6ff,0xff7f,0x7d41,0x4400,0xd95f,
		0x2005,0xfd57,0xfb8d,0x8c00,0x9080,0x7811,0x0c85,0xe1f1,
		0xb800,0x0e31,0x901c,0x0301,0x1026,0x0c00,0x0e31,0x907c,
		0x0301,0x1036,0x0400,0xc0e0,0x03f9,0x8786,0xfe07,0xf000,
		0x03f8,0x0fe0,0x0203,0x3f81,0x5c00,0x0000,0x0203,0x9fe0,
		0x0200,0x0000,0x0000,0x0203,0xbfe0,0x0000,0x0000,0xfc03,
		0xffe1,0x7c00,0x7ffe,0x1c00,0xc000,0x7807,0x8f40,0x01e0,
		0x0000,0xf8ff,0xff83,0xff82,0x3fff,0xf800,0x003f,0xfe07,
		0x7f80,0x000f,0xe000,0x003f,0xfc07,0x7fc0,0x001f,0xe000,
		0x0000,0x000f,0x0b00,0x0006,0x0000,0x07ff,0xf007,0x7fe0,
		0x0007,0xfc00,0xffff,0xffff,0xffc1,0x2001,0xfc00,0xffff,
		0xfebe,0xffc1,0xe001,0xfc00,0xfffa,0x001e,0x8030,0x0001,
		0xfc00,0xff80,0x0006,0x0038,0x0000,0x0c00,0xf000,0x000c,
		0x010a,0x0000,0x0000,0xf000,0x001c,0x0022,0x0000,0x0000,
		0x0000,0x0006,0xffde,0x0000,0x0000,0x0000,0x0052,0xff1e,
		0xe000,0x0000,0x0000,0x07f0,0xfc27,0xc000,0x0000,0x0000,
		0x07f7,0xfc2f,0xc000,0x0000,0x0000,0xfffe,0xf0f7,0x8000,
		0x0000,0x002f,0xfffa,0xc3fa,0x803f,0x8000,0x03ff,0xffff,
		0x87f7,0x0fff,0xfc00,0x03ff,0xfffa,0x87f7,0x8fff,0xfc00,
		0x1fff,0xfffb,0x1fff,0x3fff,0xfc00,0x07ff,0xfffa,0x7ffe,
		0x7fff,0xfc00,0x01ff,0xffff,0xfffb,0xffff,0xfc00,
		0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,0xffff,0xffff,
		0xffff,0xfc00,0xffff,0xffff,0xffff,0xffff,0xfc00,0xffff,
		0xffff,0xf07f,0xffff,0xfc00,0xffff,0xffff,0xce3f,0xffff,
		0xfc00,0xffff,0xffff,0xcf1f,0xffff,0xfc00,0xffff,0xffff,
		0x0f8f,0xffff,0xfc00,0xffff,0xffff,0x3907,0xffff,0xfc00,
		0xffff,0xffff,0x000f,0xffff,0xfc00,0xffff,0xffff,0x000f,
		0xffff,0xfc00,0xffff,0xffff,0x800f,0xffff,0xfc00,0xffff,
		0xffff,0xc01f,0xffff,0xfc00,0xffff,0xffff,0xf07f,0xffff,
		0xfc00,0xffff,0xffff,0xf07f,0xffff,0xfc00,0xffff,0xffff,
		0xfc7f,0xffff,0xfc00,0xffff,0xffff,0xe03f,0xffff,0xfc00,
		0xffff,0xffff,0x803d,0xffff,0xfc00,0xffff,0xffff,0x803d,
		0xffff,0xfc00,0xffff,0xfffe,0x000f,0xffff,0xfc00,0xffff,
		0xfffc,0x0c0c,0xffff,0xfc00,0xffff,0xfffc,0x0007,0xffff,
		0xfc00,0xffff,0xfffc,0x0007,0xffff,0xfc00,0xffff,0xfff8,
		0x0005,0x7fff,0xfc00,0xffff,0xfff8,0x0003,0xffff,0xfc00,
		0xffff,0xfff8,0x0003,0x3fff,0xfc00,0xffff,0xfffc,0x0000,
		0xffff,0xfc00,0xffff,0xfffc,0x0000,0xffff,0xfc00,0xffff,
		0xfffc,0x0000,0x5fff,0xfc00,0xffff,0xfffc,0x0200,0xffff,
		0xfc00,0x003f,0xe004,0x3fe0,0xc000,0x0000,0x001f,0xc004,
		0x77f0,0x4000,0x0000,0x0057,0xc00c,0xfffc,0x7000,0x0000,
		0xc2ff,0xc079,0xffff,0x0800,0x4000,0xa2ff,0x81f1,0xffff,
		0xfc8c,0x9800,0x10ff,0xa0e1,0xffff,0xf88e,0x3800,0x26bb,
		0xc003,0xfffe,0xe072,0x7000,0x6f7f,0x802f,0xff7a,0x020e,
		0x4400,0xfdef,0xcffb,0xfffe,0x0fd9,0xf000,0xffcf,0xcfbb,
		0xfffe,0x0fdd,0xf800,0x3f1f,0xfc86,0x7ff8,0x09f8,0x0c00,
		0xfc07,0xf09f,0xfff8,0xc87e,0xa000,0xffff,0xfdfd,0xffa3,
		0xfdff,0xfc00,0xffff,0xfdfd,0xdfe3,0xffff,0xfc00,0xfffd,
		0xff9f,0x9e01,0x8ff9,0xe000,0xffff,0xbffb,0x3683,0xfeff,
		0xfc00,0xf7ff,0xffff,0x3fc1,0xcfff,0xc400,0xffff,0xfffe,
		0x3fc1,0xf81f,0xfc00,0xffff,0xfffe,0x3fc1,0xf80f,0xfc00,
		0xffff,0xfff6,0x76c1,0xf801,0xfc00,0xffff,0xfffe,0xffc1,
		0x800f,0xfc00,0xffff,0xfffc,0xffc0,0x4003,0xfc00,0xffff,
		0xfffc,0xffc0,0x0003,0xfc00,0xffff,0xffe0,0xf001,0x8001,
		0xfc00,0xffff,0xfff8,0x0040,0x0030,0xfc00,0xffff,0xfff0,
		0x00fc,0x0078,0xfc00,0xffff,0xffe0,0x01dc,0x0078,0xfc00,
		0xffff,0xfffc,0xffe1,0xf873,0xfc00,0xffff,0xffbd,0xff81,
		0xc003,0xfc00,0xffff,0xfffe,0xfc39,0xc003,0xfc00,0xffff,
		0xfffe,0xfc3d,0xc003,0xfc00,0xffff,0xfff9,0xf1fd,0xc01f,
		0xfc00,0xffdf,0xfffd,0xf3f5,0x8fff,0xfc00,0xffff,0xfff8,
		0xcff9,0x1fff,0xfc00,0xffff,0xfffe,0x8ff9,0x1fff,0xfc00,
		0xffff,0xfffe,0x7ffc,0x3fff,0xfc00,0xffff,0xffff,0xfffe,
		0x7fff,0xfc00,0xffff,0xffff,0xfffe,0xffff,0xfc00};

ULONG
	juggler_palette[]={
		0x00100000,
		0x22222222,0x11111111,0x00000000,
		0x22222222,0x55555555,0x00000000,
		0x33333333,0x33333333,0x55555555,
		0x88888888,0x33333333,0x00000000,
		0x88888888,0x33333333,0x55555555,
		0x66666666,0xbbbbbbbb,0x00000000,
		0x88888888,0x66666666,0x88888888,
		0xdddddddd,0x11111111,0x00000000,
		0x00000000,0xeeeeeeee,0x00000000,
		0xbbbbbbbb,0x99999999,0x33333333,
		0x33333333,0x33333333,0xeeeeeeee,
		0x55555555,0xeeeeeeee,0x00000000,
		0xcccccccc,0x99999999,0xaaaaaaaa,
		0x99999999,0x99999999,0xeeeeeeee,
		0xeeeeeeee,0xffffffff,0x00000000,
		0xbbbbbbbb,0xbbbbbbbb,0xffffffff};
