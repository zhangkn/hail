//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface AESharedSearch : NSObject <NSCopying>
{
    NSMutableArray *_searchHistory;	// 8 = 0x8
}

+ (_Bool)isProductId:(id)arg1;	// IMP=0x0000000100c66028
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c65610
+ (id)sharedInstance;	// IMP=0x0000000100c65580
@property(retain, nonatomic) NSMutableArray *searchHistory; // @synthesize searchHistory=_searchHistory;
- (void).cxx_destruct;	// IMP=0x0000000100c66214
- (id)getKeywordFromDataSource:(id)arg1;	// IMP=0x0000000100c66148
- (void)persistCache;	// IMP=0x0000000100c65f74
- (void)clearHistory;	// IMP=0x0000000100c65f00
- (id)historyKeyword;	// IMP=0x0000000100c65eb4
- (void)removeCacheKeyword:(id)arg1;	// IMP=0x0000000100c65d38
- (void)removeCacheModule:(id)arg1;	// IMP=0x0000000100c65b58
- (void)cacheKeyword:(id)arg1;	// IMP=0x0000000100c658fc
- (void)cacheSearchModel:(id)arg1;	// IMP=0x0000000100c656c4
- (void)dataMigrate;	// IMP=0x0000000100c656c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c656bc
- (void)loadCache;	// IMP=0x0000000100c65374
- (id)filePath:(id)arg1;	// IMP=0x0000000100c652d4
- (id)init;	// IMP=0x0000000100c65248

@end

