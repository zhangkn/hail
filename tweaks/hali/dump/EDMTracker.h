//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface EDMTracker : NSObject
{
    NSDate *recordTime;	// 8 = 0x8
    NSDictionary *_paramsDic;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a53470
+ (id)sharedInstance;	// IMP=0x0000000100a533e0
@property(retain, nonatomic) NSDictionary *paramsDic; // @synthesize paramsDic=_paramsDic;
- (void).cxx_destruct;	// IMP=0x0000000100a53f44
- (void)remove;	// IMP=0x0000000100a53e80
- (void)checkTime;	// IMP=0x0000000100a53e14
- (void)addParamsToAPIRequest:(id)arg1;	// IMP=0x0000000100a53c5c
- (void)geturl:(id)arg1;	// IMP=0x0000000100a53520
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a5351c
- (id)init;	// IMP=0x0000000100a53368

@end
