//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying.h"

@class NSString;

@interface NWPolicyHorseConfig : NWCoding <NSCopying>
{
    int _hrIntervalTime;	// 8 = 0x8
    int _parallelConNum;	// 12 = 0xc
    int _hrNum;	// 16 = 0x10
    NSString *_hrStrategy;	// 24 = 0x18
    NSString *_hrUrlPath;	// 32 = 0x20
    long long _lastHRTime;	// 40 = 0x28
}

@property(nonatomic) long long lastHRTime; // @synthesize lastHRTime=_lastHRTime;
@property(nonatomic) int hrNum; // @synthesize hrNum=_hrNum;
@property(nonatomic) int parallelConNum; // @synthesize parallelConNum=_parallelConNum;
@property(retain, nonatomic) NSString *hrUrlPath; // @synthesize hrUrlPath=_hrUrlPath;
@property(nonatomic) int hrIntervalTime; // @synthesize hrIntervalTime=_hrIntervalTime;
@property(retain, nonatomic) NSString *hrStrategy; // @synthesize hrStrategy=_hrStrategy;
- (void).cxx_destruct;	// IMP=0x00000001013daecc
- (void)dealloc;	// IMP=0x00000001013dadcc
- (id)description;	// IMP=0x00000001013dacc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001013dab48
- (id)initWithStrategy:(id)arg1 intervalTime:(int)arg2 urlPath:(id)arg3 parallelConNum:(int)arg4 hrNum:(int)arg5;	// IMP=0x00000001013daa4c

@end
