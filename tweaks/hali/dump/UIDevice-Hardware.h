//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (Hardware)
- (int)deviceFamily;	// IMP=0x00000001016b38ac
- (_Bool)hasRetinaDisplay;	// IMP=0x00000001016b3850
- (id)platformString;	// IMP=0x00000001016b362c
- (unsigned long long)platformType;	// IMP=0x00000001016b3218
- (id)freeDiskSpace;	// IMP=0x00000001016b3160
- (id)totalDiskSpace;	// IMP=0x00000001016b30a8
- (unsigned long long)maxSocketBufferSize;	// IMP=0x00000001016b3098
- (unsigned long long)userMemory;	// IMP=0x00000001016b3088
- (unsigned long long)totalMemory;	// IMP=0x00000001016b3078
- (unsigned long long)cpuCount;	// IMP=0x00000001016b3068
- (unsigned long long)busFrequency;	// IMP=0x00000001016b3058
- (unsigned long long)cpuFrequency;	// IMP=0x00000001016b3048
- (unsigned long long)tbInfoGetSysInfo:(unsigned int)arg1;	// IMP=0x00000001016b2fd8
- (id)hwmodel;	// IMP=0x00000001016b2fc4
- (id)platform;	// IMP=0x00000001016b2fb0
- (id)tbInfoGetSysInfoByName:(char *)arg1;	// IMP=0x00000001016b2f1c
@end
