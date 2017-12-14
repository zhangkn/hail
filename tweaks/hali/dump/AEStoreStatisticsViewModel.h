//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEStoreStatisticsViewModel : NSObject
{
    _Bool _hasFollowed;	// 8 = 0x8
    long long _itemCount;	// 16 = 0x10
    NSString *_itemDes;	// 24 = 0x18
    long long _feedbackCount;	// 32 = 0x20
    NSString *_feedbackDes;	// 40 = 0x28
    long long _followerCount;	// 48 = 0x30
    NSString *_followerDes;	// 56 = 0x38
}

@property(nonatomic) _Bool hasFollowed; // @synthesize hasFollowed=_hasFollowed;
@property(nonatomic) NSString *followerDes; // @synthesize followerDes=_followerDes;
@property(nonatomic) long long followerCount; // @synthesize followerCount=_followerCount;
@property(nonatomic) NSString *feedbackDes; // @synthesize feedbackDes=_feedbackDes;
@property(nonatomic) long long feedbackCount; // @synthesize feedbackCount=_feedbackCount;
@property(retain, nonatomic) NSString *itemDes; // @synthesize itemDes=_itemDes;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
- (void).cxx_destruct;	// IMP=0x0000000100d2bff0
- (id)initWithStoreCellDTO:(id)arg1;	// IMP=0x0000000100d2badc
- (id)init;	// IMP=0x0000000100d2bacc

@end
