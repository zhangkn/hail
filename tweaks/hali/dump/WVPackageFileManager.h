//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVPackageFileManager : NSObject
{
}

+ (id)readAppInfo:(id)arg1;	// IMP=0x0000000101baadbc
+ (void)checkAndUpdatePreloadPackage:(id)arg1;	// IMP=0x0000000101baa798
+ (_Bool)unzipPreloadPackage;	// IMP=0x0000000101baa3f0
+ (void)markPreloadPackageUnziped;	// IMP=0x0000000101baa354
+ (_Bool)isPreloadPackageUnziped;	// IMP=0x0000000101baa248
+ (void)setPreloadPackageName:(id)arg1;	// IMP=0x0000000101baa220
+ (double)cleanWVAppPathTime;	// IMP=0x0000000101baa214
+ (void)cleanWVAppPath;	// IMP=0x0000000101baa0ec
+ (unsigned long long)cleanInvalidApps:(id)arg1 isZCache:(_Bool)arg2;	// IMP=0x0000000101ba9e28
+ (unsigned long long)cleanInvalidApps;	// IMP=0x0000000101ba9d84
+ (void)cleanTempPath;	// IMP=0x0000000101ba9d34
+ (_Bool)cleanAppPath:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101ba9ccc
+ (_Bool)cleanAppPath:(id)arg1 withType:(unsigned long long)arg2 withError:(id *)arg3;	// IMP=0x0000000101ba9c64
+ (_Bool)cleanPath:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101ba9bec
+ (_Bool)copyApp:(id)arg1 fromTempPath:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000101ba9a68
+ (_Bool)unzip:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101ba9920
+ (id)unzip:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101ba9860
+ (unsigned long long)packageSize;	// IMP=0x0000000101ba974c
+ (id)createTempUnzipPath:(id *)arg1;	// IMP=0x0000000101ba967c
+ (id)appInfoPathInFolder:(id)arg1;	// IMP=0x0000000101ba9660
+ (id)appResPathInFolder:(id)arg1 isIncr:(_Bool)arg2;	// IMP=0x0000000101ba9634
+ (id)getAppPathWithVersion:(id)arg1;	// IMP=0x0000000101ba9530
+ (id)getAppPath:(id)arg1;	// IMP=0x0000000101ba9484
+ (id)getAppPath:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x0000000101ba93c0
+ (id)filePathForPackage:(id)arg1 path:(id)arg2;	// IMP=0x0000000101ba91ec
+ (id)packageTempPath;	// IMP=0x0000000101ba91d0
+ (id)zcacheMapPath;	// IMP=0x0000000101ba9174
+ (id)zcacheStorePath;	// IMP=0x0000000101ba9110
+ (id)packageAppStorePath;	// IMP=0x0000000101ba90ac
+ (id)configPath;	// IMP=0x0000000101ba9050
+ (void)createFolders;	// IMP=0x0000000101ba8fb0
+ (void)setup;	// IMP=0x0000000101ba8f7c

@end

