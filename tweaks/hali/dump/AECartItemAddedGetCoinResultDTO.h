//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AECartItemAddedGetCoinResultDTO : NSObject
{
    _Bool _acquireCoinSuccess;	// 8 = 0x8
    long long _acquiredCoinNum;	// 16 = 0x10
    long long _remainCoinChanceCount;	// 24 = 0x18
    NSString *_coinUrl;	// 32 = 0x20
    NSString *_successfulTips;	// 40 = 0x28
    NSString *_remainTips;	// 48 = 0x30
    NSString *_psTips;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *psTips; // @synthesize psTips=_psTips;
@property(retain, nonatomic) NSString *remainTips; // @synthesize remainTips=_remainTips;
@property(retain, nonatomic) NSString *successfulTips; // @synthesize successfulTips=_successfulTips;
@property(nonatomic) _Bool acquireCoinSuccess; // @synthesize acquireCoinSuccess=_acquireCoinSuccess;
@property(retain, nonatomic) NSString *coinUrl; // @synthesize coinUrl=_coinUrl;
@property(nonatomic) long long remainCoinChanceCount; // @synthesize remainCoinChanceCount=_remainCoinChanceCount;
@property(nonatomic) long long acquiredCoinNum; // @synthesize acquiredCoinNum=_acquiredCoinNum;
- (void).cxx_destruct;	// IMP=0x000000010049dc70

@end

