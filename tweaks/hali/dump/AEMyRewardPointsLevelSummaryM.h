//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECurrentLevelM, AEMyRewardPointsLevelExtraInfoM, NSArray;

@interface AEMyRewardPointsLevelSummaryM : NSObject
{
    AECurrentLevelM *_currentLevel;	// 8 = 0x8
    NSArray *_scoreCompareList;	// 16 = 0x10
    AECurrentLevelM *_lastPeriodLevel;	// 24 = 0x18
    AEMyRewardPointsLevelExtraInfoM *_extraInfo;	// 32 = 0x20
}

+ (id)objectClassInArray;	// IMP=0x00000001001bdea4
@property(retain, nonatomic) AEMyRewardPointsLevelExtraInfoM *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) AECurrentLevelM *lastPeriodLevel; // @synthesize lastPeriodLevel=_lastPeriodLevel;
@property(retain, nonatomic) NSArray *scoreCompareList; // @synthesize scoreCompareList=_scoreCompareList;
@property(retain, nonatomic) AECurrentLevelM *currentLevel; // @synthesize currentLevel=_currentLevel;
- (void).cxx_destruct;	// IMP=0x00000001001be038

@end
