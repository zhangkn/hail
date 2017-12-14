//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class AITBannerObject, NSArray, NSIndexPath, NSString;

@interface AITFeed : NSObject <NSCoding>
{
    _Bool _likedByMe;	// 8 = 0x8
    _Bool _showLike;	// 9 = 0x9
    _Bool _isRepost;	// 10 = 0xa
    _Bool _bShowEditMenu;	// 11 = 0xb
    long long _cateId;	// 16 = 0x10
    long long _commentNum;	// 24 = 0x18
    NSString *_detailUrl;	// 32 = 0x20
    NSString *_fakeMemberSeq;	// 40 = 0x28
    NSString *_memberSeq;	// 48 = 0x30
    NSString *_itemUrl;	// 56 = 0x38
    long long _likedNum;	// 64 = 0x40
    NSString *_postId;	// 72 = 0x48
    NSString *_postImg;	// 80 = 0x50
    NSString *_userAvatarUrl;	// 88 = 0x58
    NSString *_userName;	// 96 = 0x60
    long long _publishDateInMilli;	// 104 = 0x68
    NSString *_postDesc;	// 112 = 0x70
    NSString *_postImgUrl;	// 120 = 0x78
    NSString *_postImgWebPUrl;	// 128 = 0x80
    double _fHeight;	// 136 = 0x88
    NSIndexPath *_index;	// 144 = 0x90
    long long _repostNum;	// 152 = 0x98
    AITFeed *_originPost;	// 160 = 0xa0
    NSArray *_arrayBannerList;	// 168 = 0xa8
    AITBannerObject *_objBanner;	// 176 = 0xb0
}

@property(retain, nonatomic) AITBannerObject *objBanner; // @synthesize objBanner=_objBanner;
@property(retain, nonatomic) NSArray *arrayBannerList; // @synthesize arrayBannerList=_arrayBannerList;
@property(retain, nonatomic) AITFeed *originPost; // @synthesize originPost=_originPost;
@property(nonatomic) _Bool bShowEditMenu; // @synthesize bShowEditMenu=_bShowEditMenu;
@property(nonatomic) long long repostNum; // @synthesize repostNum=_repostNum;
@property(nonatomic) _Bool isRepost; // @synthesize isRepost=_isRepost;
@property(retain, nonatomic) NSIndexPath *index; // @synthesize index=_index;
@property(nonatomic) double fHeight; // @synthesize fHeight=_fHeight;
@property(copy, nonatomic) NSString *postImgWebPUrl; // @synthesize postImgWebPUrl=_postImgWebPUrl;
@property(copy, nonatomic) NSString *postImgUrl; // @synthesize postImgUrl=_postImgUrl;
@property(copy, nonatomic) NSString *postDesc; // @synthesize postDesc=_postDesc;
@property(nonatomic) long long publishDateInMilli; // @synthesize publishDateInMilli=_publishDateInMilli;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userAvatarUrl; // @synthesize userAvatarUrl=_userAvatarUrl;
@property(nonatomic) _Bool showLike; // @synthesize showLike=_showLike;
@property(copy, nonatomic) NSString *postImg; // @synthesize postImg=_postImg;
@property(copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(nonatomic) long long likedNum; // @synthesize likedNum=_likedNum;
@property(nonatomic) _Bool likedByMe; // @synthesize likedByMe=_likedByMe;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(copy, nonatomic) NSString *fakeMemberSeq; // @synthesize fakeMemberSeq=_fakeMemberSeq;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) long long cateId; // @synthesize cateId=_cateId;
- (void).cxx_destruct;	// IMP=0x000000010071a4e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100719b48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001007196c0
- (void)transWithDic:(id)arg1;	// IMP=0x0000000100719190
- (void)transWithFeed:(id)arg1;	// IMP=0x0000000100719028
- (id)propertyStrings;	// IMP=0x0000000100718f00

@end

