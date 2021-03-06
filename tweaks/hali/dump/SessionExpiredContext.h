//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SessionExpiredContext : NSObject <NSCopying>
{
    NSString *nick;	// 8 = 0x8
    NSString *msgCode;	// 16 = 0x10
    NSString *reason;	// 24 = 0x18
    NSString *apiName;	// 32 = 0x20
    NSString *apiVersion;	// 40 = 0x28
    NSString *timestamp;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName;
@property(retain, nonatomic) NSString *reason; // @synthesize reason;
@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode;
@property(retain, nonatomic) NSString *nick; // @synthesize nick;
- (void).cxx_destruct;	// IMP=0x0000000101d160cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101d15ecc
- (id)asDictionary;	// IMP=0x0000000101d15afc
- (id)initWithNick:(id)arg1 msgCode:(id)arg2 reason:(id)arg3 apiName:(id)arg4 apiVersion:(id)arg5;	// IMP=0x0000000101d158d0

@end

