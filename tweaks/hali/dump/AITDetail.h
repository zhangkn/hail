//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AITDetailAuthor, AITDetailContent, AITDetailProduct, NSMutableArray;

@interface AITDetail : NSObject
{
    _Bool _isLikedByme;	// 8 = 0x8
    AITDetailContent *_content;	// 16 = 0x10
    NSMutableArray *_commentlist;	// 24 = 0x18
    NSMutableArray *_likeList;	// 32 = 0x20
    NSMutableArray *_hashtagList;	// 40 = 0x28
    AITDetailProduct *_product;	// 48 = 0x30
    AITDetailAuthor *_author;	// 56 = 0x38
    long long _nRepostUserCount;	// 64 = 0x40
    long long _nRepostCount;	// 72 = 0x48
    NSMutableArray *_arrayRepostList;	// 80 = 0x50
}

@property(retain, nonatomic) NSMutableArray *arrayRepostList; // @synthesize arrayRepostList=_arrayRepostList;
@property(nonatomic) long long nRepostCount; // @synthesize nRepostCount=_nRepostCount;
@property(nonatomic) long long nRepostUserCount; // @synthesize nRepostUserCount=_nRepostUserCount;
@property(nonatomic) _Bool isLikedByme; // @synthesize isLikedByme=_isLikedByme;
@property(retain, nonatomic) AITDetailAuthor *author; // @synthesize author=_author;
@property(retain, nonatomic) AITDetailProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSMutableArray *hashtagList; // @synthesize hashtagList=_hashtagList;
@property(retain, nonatomic) NSMutableArray *likeList; // @synthesize likeList=_likeList;
@property(retain, nonatomic) NSMutableArray *commentlist; // @synthesize commentlist=_commentlist;
@property(retain, nonatomic) AITDetailContent *content; // @synthesize content=_content;
- (void).cxx_destruct;	// IMP=0x00000001007151cc
- (id)init;	// IMP=0x0000000100714eb0

@end
