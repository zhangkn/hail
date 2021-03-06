//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent, NSString, UIImage;

@interface AEFloorPhotoReviewsDetailHeaderViewModel : AEBaseTile
{
    _Bool _isFollowed;	// 8 = 0x8
    AEImageTileComponent *_portraitModel;	// 16 = 0x10
    AETextTileComponent *_nameModel;	// 24 = 0x18
    UIImage *_flagImage;	// 32 = 0x20
    UIImage *_genderImage;	// 40 = 0x28
    AETextTileComponent *_buyerLevelModel;	// 48 = 0x30
    double _rateNumber;	// 56 = 0x38
    AETextTileComponent *_timeModel;	// 64 = 0x40
    NSString *_memberSeq;	// 72 = 0x48
}

+ (Class)cellClass;	// IMP=0x0000000100369284
@property(copy, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) AETextTileComponent *timeModel; // @synthesize timeModel=_timeModel;
@property(nonatomic) double rateNumber; // @synthesize rateNumber=_rateNumber;
@property(retain, nonatomic) AETextTileComponent *buyerLevelModel; // @synthesize buyerLevelModel=_buyerLevelModel;
@property(retain, nonatomic) UIImage *genderImage; // @synthesize genderImage=_genderImage;
@property(retain, nonatomic) UIImage *flagImage; // @synthesize flagImage=_flagImage;
@property(retain, nonatomic) AETextTileComponent *nameModel; // @synthesize nameModel=_nameModel;
@property(retain, nonatomic) AEImageTileComponent *portraitModel; // @synthesize portraitModel=_portraitModel;
- (void).cxx_destruct;	// IMP=0x00000001003690c0
- (id)initWithTileDTO:(id)arg1;	// IMP=0x000000010036865c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100368650

@end

