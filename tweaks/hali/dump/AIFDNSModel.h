//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSError, NSString;

@interface AIFDNSModel : NSObject <NSCopying>
{
    _Bool _bStatic;	// 8 = 0x8
    NSString *_host;	// 16 = 0x10
    NSString *_ip;	// 24 = 0x18
    NSString *_port;	// 32 = 0x20
    NSDate *_timeoutDate;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    long long _priority;	// 56 = 0x38
    NSString *_pattern;	// 64 = 0x40
    NSString *_matchType;	// 72 = 0x48
    NSString *_netType;	// 80 = 0x50
}

@property(nonatomic) _Bool bStatic; // @synthesize bStatic=_bStatic;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(copy, nonatomic) NSString *matchType; // @synthesize matchType=_matchType;
@property(copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(copy, nonatomic) NSString *port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;	// IMP=0x000000010104e84c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010104e44c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010104e1b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010104df2c
- (id)init;	// IMP=0x000000010104dee8

@end

