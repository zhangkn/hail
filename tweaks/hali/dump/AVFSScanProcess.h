//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVFSScanProcess : NSObject
{
}

+ (void)scanDiskDirs:(id)arg1;	// IMP=0x00000001011c709c
+ (void)scanCachesDir:(id)arg1;	// IMP=0x00000001011c6de4
+ (void)scanLibraryDir:(id)arg1;	// IMP=0x00000001011c6b2c
+ (void)scanDocumentsDir:(id)arg1;	// IMP=0x00000001011c687c
+ (void)scanStorageDir:(id)arg1;	// IMP=0x00000001011c658c
+ (id)scanModuleFiles:(id)arg1 withPath:(id)arg2;	// IMP=0x00000001011c6260
+ (void)addModule:(id)arg1 results:(id)arg2 fileDetails:(id)arg3;	// IMP=0x00000001011c6184
+ (void)addModule:(id)arg1 results:(id)arg2 fileDetail:(id)arg3;	// IMP=0x00000001011c60a8

@end

