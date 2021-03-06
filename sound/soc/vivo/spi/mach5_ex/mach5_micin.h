/*
 *  Batch Script for Yamaha AudioEngine Device version 1
 *
 *    Tool name     : YAD-1 Batch Script Maker
 *    Tool version  : 1.1.2
 *    Creation date : 2014/08/26/ 12:10:45
 */
#include "yad1types.h"


/*
	[Init]
		Device Init
 */
static const U08 au08mach5_micin_00[]={
	0x09, 0x01, 0x01, 0x09, 0x01, 0x00, 0x09, 0x0a, 0x0f, 0x09, 0x02, 0x2b, 0x09, 0x02, 0x2a, 0x09, 
	0x02, 0x22, 0x1f, 0x01, 0x0a, 0x01, 0x01, 0x0a, 0x01, 0x00, 0x01, 0x02, 0x01, 0x01, 0x02, 0x00, 
	0x02, 0x0d, 0x00, 0x02, 0x0e, 0x01, 0x02, 0x0f, 0x03, 0x02, 0x10, 0x03, 0x02, 0x09, 0xa0, 0x02, 
	0x0a, 0x00, 0x02, 0x0b, 0x00, 0x02, 0x04, 0x3f, 0x02, 0x05, 0x3f, 0x02, 0x08, 0x00, 0x02, 0x06, 
	0x3f, 0x02, 0x11, 0x00, 0x02, 0x18, 0x04, 0x02, 0x19, 0x0a, 0x02, 0x1a, 0x00, 0x02, 0x1b, 0x82, 
	0x02, 0x1c, 0x9c, 0x02, 0x1d, 0xbc, 0x02, 0x1e, 0x02, 0x02, 0x13, 0x10, 0x02, 0x12, 0x04, 0x02, 
	0x01, 0x06, 0x1f, 0x02, 0x02, 0x02, 0x7f, 0x1f, 0x02, 0x02, 0x02, 0x7e, 0x02, 0x02, 0x3e, 0x01, 
	0x03, 0xbf, 0x11, 0x03, 0x40, 0x00, 0x0a, 0x01, 0x03, 0xbb, 0x01, 0x03, 0x9b, 0x11, 0x03, 0x20, 
	0x00, 0x0a, 0x01, 0x03, 0x99, 0x01, 0x03, 0x89, 0x11, 0x03, 0x10, 0x00, 0x0a, 0x01, 0x03, 0x88, 
	0x02, 0x02, 0x1e, 0x02, 0x02, 0x0e, 0x02, 0x02, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x0a, 
	0x02, 0x00, 0x89, 0x03, 0x0d, 0x00, 0x00, 0x09, 0x18, 0x00, 0x09, 0x29, 0xfc, 0x09, 0x2c, 0x00, 
	0x09, 0x06, 0x00, 0x09, 0x07, 0x00, 0x07, 0x00, 0x01, 0x07, 0x00, 0x00, 0x07, 0x02, 0x53, 0x07, 
	0x01, 0x42, 0x1a, 0x31, 0x08, 0x08, 0x64, 0x0a, 0x31, 0x08, 0x09, 0x15, 0x03, 0x03, 0x44, 0x7f, 
	0x03, 0x43, 0x81, 0x03, 0x47, 0x80, 0x04, 0x55, 0xa0, 
};

/*
	[Init]
		Device Init (19.2Mhz)
 */
static const U08 au08mach5_micin_00_19_2MHz[]={
	0x09, 0x01, 0x01, 0x09, 0x01, 0x00, 0x09, 0x0a, 0x0f, 0x09, 0x02, 0x2b, 0x09, 0x02, 0x2a, 0x09, 
	0x02, 0x22, 0x1f, 0x01, 0x0a, 0x01, 0x01, 0x0a, 0x01, 0x00, 0x01, 0x02, 0x01, 0x01, 0x02, 0x00, 
	0x02, 0x0d, 0x00, 0x02, 0x0e, 0x01, 0x02, 0x0f, 0x03, 0x02, 0x10, 0x03, 0x02, 0x09, 0xa0, 0x02, 
	0x0a, 0x00, 0x02, 0x0b, 0x00, 0x02, 0x04, 0x3f, 0x02, 0x05, 0x3f, 0x02, 0x08, 0x00, 0x02, 0x06, 
	0x3f, 0x02, 0x11, 0x00, 0x02, 0x18, 0x04, 0x02, 0x19, 0x13, 0x02, 0x1a, 0x00, 0x02, 0x1b, 0x91, 
	0x02, 0x1c, 0xeb, 0x02, 0x1d, 0x85, 0x02, 0x1e, 0x02, 0x02, 0x13, 0x10, 0x02, 0x12, 0x04, 0x02, 
	0x01, 0x06, 0x1f, 0x02, 0x02, 0x02, 0x7f, 0x1f, 0x02, 0x02, 0x02, 0x7e, 0x02, 0x02, 0x3e, 0x01, 
	0x03, 0xbf, 0x11, 0x03, 0x40, 0x00, 0x0a, 0x01, 0x03, 0xbb, 0x01, 0x03, 0x9b, 0x11, 0x03, 0x20, 
	0x00, 0x0a, 0x01, 0x03, 0x99, 0x01, 0x03, 0x89, 0x11, 0x03, 0x10, 0x00, 0x0a, 0x01, 0x03, 0x88, 
	0x02, 0x02, 0x1e, 0x02, 0x02, 0x0e, 0x02, 0x02, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x0a, 
	0x02, 0x00, 0x89, 0x03, 0x0d, 0x00, 0x00, 0x09, 0x18, 0x00, 0x09, 0x29, 0xfc, 0x09, 0x2c, 0x00, 
	0x09, 0x06, 0x00, 0x09, 0x07, 0x00, 0x07, 0x00, 0x01, 0x07, 0x00, 0x00, 0x07, 0x02, 0x53, 0x07, 
	0x01, 0x42, 0x1a, 0x31, 0x08, 0x08, 0x64, 0x0a, 0x31, 0x08, 0x09, 0x15, 0x03, 0x03, 0x44, 0x7f, 
	0x03, 0x43, 0x81, 0x03, 0x47, 0x80, 0x04, 0x55, 0xa0, 
};


/*
	[Path]
		Set Signal Path
 */
static const U08 au08mach5_micin_16[]={
	0x03, 0x23, 0x00, 0x03, 0x25, 0x00, 0x03, 0x27, 0x00, 0x03, 0x29, 0x00, 0x83, 0x03, 0x2b, 0x00, 
	0x00, 0x83, 0x03, 0x2f, 0x00, 0x10, 0x83, 0x03, 0x33, 0x00, 0x00, 0x83, 0x03, 0x37, 0x00, 0x00, 
	0x83, 0x03, 0x3b, 0x00, 0x10, 0x83, 0x03, 0x3f, 0x00, 0x10, 0x03, 0x20, 0x00, 0x03, 0x21, 0x00, 
	0x03, 0x22, 0x50, 0x89, 0x04, 0x30, 0xf0, 0xf0, 0x00, 0x83, 0x06, 0x50, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x04, 0x00, 0x00, 0x04, 0x10, 0x00, 0x04, 0x20, 0x00, 0x04, 0x30, 0x00, 0x04, 0x01, 0x21, 
	0x04, 0x11, 0x20, 0x04, 0x21, 0x00, 0x04, 0x31, 0x00, 0x04, 0x02, 0x24, 0x04, 0x03, 0x00, 0x04, 
	0x13, 0x00, 0x04, 0x23, 0x00, 0x04, 0x33, 0x00, 0x04, 0x04, 0x24, 0x04, 0x05, 0x00, 0x04, 0x15, 
	0x00, 0x04, 0x25, 0x00, 0x04, 0x35, 0x00, 0x04, 0x06, 0x44, 0x04, 0x16, 0x44, 0x04, 0x26, 0x44, 
	0x04, 0x36, 0x44, 0x04, 0x07, 0x00, 0x04, 0x17, 0x00, 0x04, 0x27, 0x00, 0x04, 0x08, 0x80, 0x04, 
	0x18, 0x80, 0x04, 0x28, 0x80, 0x04, 0x09, 0x80, 0x04, 0x19, 0x80, 0x04, 0x29, 0x80, 0x84, 0x03, 
	0x2b, 0x00, 0x00, 0x07, 0x01, 0x42, 0x87, 0x07, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 
	0x08, 0x29, 0x01, 0x10, 0x00, 0x77, 0x00, 0x77, 0x00, 0x07, 0x30, 0x00, 0x07, 0x03, 0x00, 0x07, 
	0x12, 0x88, 0x87, 0x03, 0x15, 0x00, 0x00, 0x87, 0x04, 0x44, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 
	0x87, 0x08, 0x1c, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 
};


/*
	[Start]
		Set Volume
 */
static const U08 au08mach5_micin_17[]={
	0x02, 0x04, 0x01, 0x02, 0x05, 0x15, 0x02, 0x06, 0x01, 0x04, 0x0a, 0x00, 0x04, 0x1a, 0x83, 0x04, 
	0x2a, 0x00, 0x04, 0x3a, 0x00, 0x04, 0x2c, 0x00, 0x07, 0x48, 0x00, 0x89, 0x05, 0x1b, 0x00, 0x00, 
	0x00, 0x00, 0x89, 0x03, 0x19, 0x80, 0x00, 0x03, 0x06, 0x00, 0x03, 0x08, 0x00, 0x03, 0x0a, 0x00, 
	0x03, 0x0c, 0x00, 0x83, 0x03, 0x0e, 0x00, 0x00, 0x83, 0x03, 0x10, 0x00, 0x00, 0x83, 0x03, 0x12, 
	0x00, 0x00, 0x08, 0x20, 0x00, 0x05, 0x00, 0x00, 0x07, 0x4d, 0x01, 0x03, 0x14, 0x00, 0x03, 0x16, 
	0x06, 0x03, 0x18, 0x00, 0x03, 0x1a, 0x00, 0x03, 0x1c, 0x00, 0x03, 0x1e, 0x00, 0x89, 0x03, 0x1f, 
	0xe3, 0x63, 0x89, 0x03, 0x21, 0xf3, 0x73, 0x09, 0x23, 0x00, 0x89, 0x03, 0x24, 0x80, 0x00, 0x89, 
	0x03, 0x26, 0x80, 0x00, 
};


/*
	[Stop]
		Mute Volume
 */
static const U08 au08mach5_micin_18[]={
	0x02, 0x04, 0x3f, 0x02, 0x05, 0x3f, 0x02, 0x06, 0x3f, 0x04, 0x0a, 0x30, 0x04, 0x1a, 0x30, 0x04, 
	0x2a, 0x30, 0x04, 0x3a, 0x0a, 0x04, 0x2c, 0x00, 0x07, 0x48, 0x00, 0x89, 0x05, 0x1b, 0x00, 0x00, 
	0x00, 0x00, 0x89, 0x03, 0x19, 0x80, 0x00, 0x03, 0x06, 0x00, 0x03, 0x08, 0x00, 0x03, 0x0a, 0x00, 
	0x03, 0x0c, 0x00, 0x83, 0x03, 0x0e, 0x00, 0x00, 0x83, 0x03, 0x10, 0x00, 0x00, 0x83, 0x03, 0x12, 
	0x00, 0x00, 0x08, 0x20, 0x00, 0x05, 0x00, 0x00, 0x07, 0x4d, 0x01, 0x03, 0x14, 0x00, 0x03, 0x16, 
	0x00, 0x03, 0x18, 0x00, 0x03, 0x1a, 0x00, 0x03, 0x1c, 0x00, 0x03, 0x1e, 0x00, 0x89, 0x03, 0x1f, 
	0x80, 0x00, 0x89, 0x03, 0x21, 0x80, 0x00, 0x09, 0x23, 0x00, 0x89, 0x03, 0x24, 0x80, 0x00, 0x89, 
	0x03, 0x26, 0x00, 0x00, 
};
