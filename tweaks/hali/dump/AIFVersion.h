//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface AIFVersion : NSObject <NSCopying>
{
    int _verCode;	// 8 = 0x8
    unsigned int _major;	// 12 = 0xc
    unsigned int _minor;	// 16 = 0x10
    unsigned int _rev;	// 20 = 0x14
    NSString *_build;	// 24 = 0x18
}

+ (id)creationBuildNumber;	// IMP=0x00000001010319f8
+ (id)versionFromString:(id)arg1;	// IMP=0x0000000101031684
+ (id)versionByMajor:(unsigned int)arg1 Minor:(unsigned int)arg2 Revision:(unsigned int)arg3;	// IMP=0x00000001010315f4
+ (id)operationSystemVersion;	// IMP=0x0000000101031aa4
@property(retain, nonatomic) NSString *build; // @synthesize build=_build;
@property(nonatomic) unsigned int rev; // @synthesize rev=_rev;
@property(nonatomic) unsigned int minor; // @synthesize minor=_minor;
@property(nonatomic) unsigned int major; // @synthesize major=_major;
@property(nonatomic) int verCode; // @synthesize verCode=_verCode;
- (void).cxx_destruct;	// IMP=0x00000001010315e0
- (id)description;	// IMP=0x000000010103148c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101031400
- (long long)compare:(id)arg1;	// IMP=0x00000001010312d0
- (id)fullVersionNumber;	// IMP=0x0000000101031260
- (id)humanReadableVersionNumber;	// IMP=0x00000001010311fc
- (id)initVersionByMajor:(unsigned int)arg1 Minor:(unsigned int)arg2 Revision:(unsigned int)arg3 Build:(id)arg4;	// IMP=0x0000000101031120

@end

