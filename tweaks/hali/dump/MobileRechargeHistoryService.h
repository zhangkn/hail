//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MobileRechargeHistoryService : NSObject
{
    NSMutableArray *_historyList;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010062ebec
@property(retain, nonatomic) NSMutableArray *historyList; // @synthesize historyList=_historyList;
- (void).cxx_destruct;	// IMP=0x000000010062f2f0
- (id)getMatchedHistoryNumber:(id)arg1;	// IMP=0x000000010062f0c8
- (void)persistCache;	// IMP=0x000000010062f05c
- (void)removeCachedPhoneNumber:(id)arg1;	// IMP=0x000000010062efe8
- (void)cachePhoneNumber:(id)arg1;	// IMP=0x000000010062ed74
- (void)loadHistoryList;	// IMP=0x000000010062ec6c
- (id)init;	// IMP=0x000000010062eb3c

@end
