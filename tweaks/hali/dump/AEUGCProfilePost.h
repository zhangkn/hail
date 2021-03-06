//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEModuleUGCCardDTO, NSMutableArray, NSString;

@interface AEUGCProfilePost : NSObject
{
    _Bool _showOrigin;	// 8 = 0x8
    _Bool _likedByMe;	// 9 = 0x9
    long long _postId;	// 16 = 0x10
    long long _postType;	// 24 = 0x18
    long long _publishDateInMilliSecond;	// 32 = 0x20
    NSMutableArray *_photoUrlArr;	// 40 = 0x28
    NSMutableArray *_thumbnailPhotoUrlArr;	// 48 = 0x30
    NSMutableArray *_highResolutionPhotoUrlArr;	// 56 = 0x38
    NSString *_originContent;	// 64 = 0x40
    NSString *_translateContent;	// 72 = 0x48
    long long _likeCount;	// 80 = 0x50
    long long _commentCount;	// 88 = 0x58
    long long _authorId;	// 96 = 0x60
    long long _productId;	// 104 = 0x68
    long long _subPostCount;	// 112 = 0x70
    NSString *_subtypes;	// 120 = 0x78
    long long _evaluationId;	// 128 = 0x80
    NSString *_collectionTitle;	// 136 = 0x88
    NSString *_collectionSummary;	// 144 = 0x90
    NSMutableArray *_collectionFloatingLabelArr;	// 152 = 0x98
    double _mainImageWidth;	// 160 = 0xa0
    double _mainImageHeight;	// 168 = 0xa8
    long long _postStatus;	// 176 = 0xb0
    NSString *_collectionTranslatedTitle;	// 184 = 0xb8
    NSString *_collectionTranslatedSummary;	// 192 = 0xc0
    AEModuleUGCCardDTO *_iTaoCardDTO;	// 200 = 0xc8
}

@property(retain, nonatomic) AEModuleUGCCardDTO *iTaoCardDTO; // @synthesize iTaoCardDTO=_iTaoCardDTO;
@property(copy, nonatomic) NSString *collectionTranslatedSummary; // @synthesize collectionTranslatedSummary=_collectionTranslatedSummary;
@property(copy, nonatomic) NSString *collectionTranslatedTitle; // @synthesize collectionTranslatedTitle=_collectionTranslatedTitle;
@property(nonatomic) long long postStatus; // @synthesize postStatus=_postStatus;
@property(nonatomic) double mainImageHeight; // @synthesize mainImageHeight=_mainImageHeight;
@property(nonatomic) double mainImageWidth; // @synthesize mainImageWidth=_mainImageWidth;
@property(retain, nonatomic) NSMutableArray *collectionFloatingLabelArr; // @synthesize collectionFloatingLabelArr=_collectionFloatingLabelArr;
@property(copy, nonatomic) NSString *collectionSummary; // @synthesize collectionSummary=_collectionSummary;
@property(copy, nonatomic) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(nonatomic) long long evaluationId; // @synthesize evaluationId=_evaluationId;
@property(copy, nonatomic) NSString *subtypes; // @synthesize subtypes=_subtypes;
@property(nonatomic) long long subPostCount; // @synthesize subPostCount=_subPostCount;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long authorId; // @synthesize authorId=_authorId;
@property(nonatomic) _Bool likedByMe; // @synthesize likedByMe=_likedByMe;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool showOrigin; // @synthesize showOrigin=_showOrigin;
@property(copy, nonatomic) NSString *translateContent; // @synthesize translateContent=_translateContent;
@property(copy, nonatomic) NSString *originContent; // @synthesize originContent=_originContent;
@property(retain, nonatomic) NSMutableArray *highResolutionPhotoUrlArr; // @synthesize highResolutionPhotoUrlArr=_highResolutionPhotoUrlArr;
@property(retain, nonatomic) NSMutableArray *thumbnailPhotoUrlArr; // @synthesize thumbnailPhotoUrlArr=_thumbnailPhotoUrlArr;
@property(retain, nonatomic) NSMutableArray *photoUrlArr; // @synthesize photoUrlArr=_photoUrlArr;
@property(nonatomic) long long publishDateInMilliSecond; // @synthesize publishDateInMilliSecond=_publishDateInMilliSecond;
@property(nonatomic) long long postType; // @synthesize postType=_postType;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
- (void).cxx_destruct;	// IMP=0x0000000100e99b94
- (void)transFromDic:(id)arg1;	// IMP=0x0000000100e989e8
- (id)init;	// IMP=0x0000000100e98860

@end

