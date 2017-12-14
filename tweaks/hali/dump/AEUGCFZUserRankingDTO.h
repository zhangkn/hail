//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCFZUserRankingDTO : NSObject
{
    _Bool _followedByMe;	// 8 = 0x8
    NSString *_avatar;	// 16 = 0x10
    NSString *_rankingName;	// 24 = 0x18
    NSString *_nickName;	// 32 = 0x20
    long long _ranking;	// 40 = 0x28
    long long _growthRanking;	// 48 = 0x30
    NSString *_ruleId;	// 56 = 0x38
    NSString *_sceneId;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(nonatomic) long long growthRanking; // @synthesize growthRanking=_growthRanking;
@property(nonatomic) long long ranking; // @synthesize ranking=_ranking;
@property(nonatomic) _Bool followedByMe; // @synthesize followedByMe=_followedByMe;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *rankingName; // @synthesize rankingName=_rankingName;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;	// IMP=0x00000001006a3750
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001006a357c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001006a3504

@end
