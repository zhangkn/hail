//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, NSString, NSURL;

@interface AFHPCheckResultDTO : NSObject <NSCopying, NSCoding>
{
    _Bool _available;	// 8 = 0x8
    NSString *_fileName;	// 16 = 0x10
    NSString *_feature;	// 24 = 0x18
    unsigned long long _pVersion;	// 32 = 0x20
    NSString *_signature;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    NSNumber *_pri;	// 56 = 0x38
    NSNumber *_size;	// 64 = 0x40
}

@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *pri; // @synthesize pri=_pri;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) unsigned long long pVersion; // @synthesize pVersion=_pVersion;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;	// IMP=0x00000001010002dc
- (long long)compare:(id)arg1;	// IMP=0x000000010100010c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100fffea0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100fffc40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100fffa54

@end
