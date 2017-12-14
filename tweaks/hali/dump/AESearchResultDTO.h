//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEAlbumItemDTO, NSArray, NSString, extResultItemDTO;

@interface AESearchResultDTO : NSObject
{
    NSString *_action;	// 8 = 0x8
    extResultItemDTO *_extResult;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
    NSArray *_recommendItems;	// 32 = 0x20
    NSString *_totalNum;	// 40 = 0x28
    AEAlbumItemDTO *_album;	// 48 = 0x30
}

+ (id)convertRecommendResultToItem:(id)arg1;	// IMP=0x0000000100c93f68
+ (id)convertResultToItem:(id)arg1;	// IMP=0x0000000100c939c0
@property(retain, nonatomic) AEAlbumItemDTO *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSArray *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) extResultItemDTO *extResult; // @synthesize extResult=_extResult;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x0000000100c94168

@end

