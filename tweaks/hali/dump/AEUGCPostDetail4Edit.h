//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface AEUGCPostDetail4Edit : NSObject
{
    NSString *_categoryId;	// 8 = 0x8
    NSString *_categoryName;	// 16 = 0x10
    NSString *_itemUrl;	// 24 = 0x18
    NSString *_postId;	// 32 = 0x20
    long long _themeId;	// 40 = 0x28
    NSMutableArray *_hashtagList;	// 48 = 0x30
    NSMutableArray *_subPostList;	// 56 = 0x38
}

@property(retain, nonatomic) NSMutableArray *subPostList; // @synthesize subPostList=_subPostList;
@property(retain, nonatomic) NSMutableArray *hashtagList; // @synthesize hashtagList=_hashtagList;
@property(nonatomic) long long themeId; // @synthesize themeId=_themeId;
@property(copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;	// IMP=0x00000001006e0f7c
- (id)init;	// IMP=0x00000001006e0d98

@end

