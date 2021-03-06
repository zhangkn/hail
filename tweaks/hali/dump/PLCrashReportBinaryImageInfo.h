//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PLCrashReportProcessorInfo;

@interface PLCrashReportBinaryImageInfo : NSObject
{
    PLCrashReportProcessorInfo *_processorInfo;	// 8 = 0x8
    unsigned long long _baseAddress;	// 16 = 0x10
    unsigned long long _imageSize;	// 24 = 0x18
    NSString *_imageName;	// 32 = 0x20
    _Bool _hasImageUUID;	// 40 = 0x28
    NSString *_imageUUID;	// 48 = 0x30
}

@property(readonly, nonatomic) NSString *imageUUID; // @synthesize imageUUID=_imageUUID;
@property(readonly, nonatomic) _Bool hasImageUUID; // @synthesize hasImageUUID=_hasImageUUID;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned long long imageBaseAddress; // @synthesize imageBaseAddress=_baseAddress;
@property(readonly, nonatomic) PLCrashReportProcessorInfo *codeType; // @synthesize codeType=_processorInfo;
- (void)dealloc;	// IMP=0x0000000101229b4c
- (id)initWithCodeType:(id)arg1 baseAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(id)arg4 uuid:(id)arg5;	// IMP=0x00000001012299d0

@end

