//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCCollectionCommentsDTO, AEUGCCollectionLikeListDTO, AEUGCCollectionListMemberDTO, AEUGCCollectionListPostEntityDTO;

@interface AEUGCCollectionListDetailDTO : NSObject
{
    _Bool _isLikeByMe;	// 8 = 0x8
    AEUGCCollectionListMemberDTO *_memberDTO;	// 16 = 0x10
    AEUGCCollectionListPostEntityDTO *_postEntityDTO;	// 24 = 0x18
    AEUGCCollectionLikeListDTO *_likeList;	// 32 = 0x20
    AEUGCCollectionCommentsDTO *_comments;	// 40 = 0x28
}

+ (id)createFromDictionary:(id)arg1;	// IMP=0x0000000100682198
@property(retain, nonatomic) AEUGCCollectionCommentsDTO *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) AEUGCCollectionLikeListDTO *likeList; // @synthesize likeList=_likeList;
@property(retain, nonatomic) AEUGCCollectionListPostEntityDTO *postEntityDTO; // @synthesize postEntityDTO=_postEntityDTO;
@property(retain, nonatomic) AEUGCCollectionListMemberDTO *memberDTO; // @synthesize memberDTO=_memberDTO;
@property(nonatomic) _Bool isLikeByMe; // @synthesize isLikeByMe=_isLikeByMe;
- (void).cxx_destruct;	// IMP=0x0000000100682818

@end

