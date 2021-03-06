//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVPackageErrorBuilder : NSObject
{
}

+ (id)URLNotInPackage:(id)arg1;	// IMP=0x0000000101ba0134
+ (id)appMarkedDelete:(id)arg1;	// IMP=0x0000000101ba0104
+ (id)appForceOnline:(id)arg1;	// IMP=0x0000000101ba00d4
+ (id)fileNotFound:(id)arg1;	// IMP=0x0000000101ba0058
+ (id)appNotNewest:(id)arg1;	// IMP=0x0000000101ba0028
+ (id)appIgnored:(id)arg1;	// IMP=0x0000000101b9fff8
+ (id)appNotInstalled:(id)arg1;	// IMP=0x0000000101b9ffc8
+ (id)mappingUrlNotMatch:(id)arg1 withMappingUrl:(id)arg2 withUrl:(id)arg3;	// IMP=0x0000000101b9ff3c
+ (id)mappingUrlNotFound:(id)arg1;	// IMP=0x0000000101b9ff0c
+ (id)configNotFound:(id)arg1;	// IMP=0x0000000101b9fedc
+ (id)appNameMismatch:(id)arg1;	// IMP=0x0000000101b9feac
+ (id)deserializeJSONFailed:(id)arg1;	// IMP=0x0000000101b9fe7c
+ (id)splitFailed:(id)arg1;	// IMP=0x0000000101b9fe4c
+ (id)emptyResponse:(id)arg1;	// IMP=0x0000000101b9fd44
+ (id)invalidStatusCode:(long long)arg1 url:(id)arg2;	// IMP=0x0000000101b9fc38
+ (id)resVerifyFailed:(id)arg1 appName:(id)arg2 seq:(unsigned long long)arg3;	// IMP=0x0000000101b9fbc0
+ (id)resVerifyFileNotExists:(id)arg1 appName:(id)arg2 seq:(unsigned long long)arg3;	// IMP=0x0000000101b9fb48
+ (id)appResNoMD5:(id)arg1 seq:(unsigned long long)arg2;	// IMP=0x0000000101b9fb18
+ (id)appResValueNotDictionary:(id)arg1 seq:(unsigned long long)arg2;	// IMP=0x0000000101b9fae8
+ (id)appResNotDictionary:(id)arg1 seq:(unsigned long long)arg2;	// IMP=0x0000000101b9fab8
+ (id)appResDeserializationFailed:(id)arg1 seq:(unsigned long long)arg2;	// IMP=0x0000000101b9fa88
+ (id)appResVerifyFailed:(id)arg1 seq:(unsigned long long)arg2;	// IMP=0x0000000101b9fa58
+ (id)appResInvalidFormat:(id)arg1 seq:(unsigned long long)arg2;	// IMP=0x0000000101b9fa28
+ (id)appResReadFailed:(id)arg1 appName:(id)arg2 seq:(unsigned long long)arg3;	// IMP=0x0000000101b9f954
+ (id)appInfoWithoutMappingUrl:(id)arg1;	// IMP=0x0000000101b9f924
+ (id)appInfoDeserializationFailed:(id)arg1;	// IMP=0x0000000101b9f8f4
+ (id)zipNotFound:(id)arg1 withStatusCode:(long long)arg2;	// IMP=0x0000000101b9f8c4
+ (id)downloadEmptyZip:(id)arg1 withStatusCode:(long long)arg2;	// IMP=0x0000000101b9f894
+ (id)copyFailed:(id)arg1;	// IMP=0x0000000101b9f7f8
+ (id)unzipFailed:(id)arg1 toPath:(id)arg2;	// IMP=0x0000000101b9f72c
+ (id)unzipOpenFileFailed:(id)arg1;	// IMP=0x0000000101b9f6b0
+ (id)downloadFailed:(id)arg1 withError:(id)arg2;	// IMP=0x0000000101b9f59c
+ (id)tempUnzipPathCreateFailed:(id)arg1;	// IMP=0x0000000101b9f500
+ (id)invalidZipUrl:(id)arg1;	// IMP=0x0000000101b9f4d0
+ (id)userCancelledUpdate;	// IMP=0x0000000101b9f4a8
+ (id)createError:(long long)arg1 format:(id)arg2;	// IMP=0x0000000101b9f380

@end

