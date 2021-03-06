//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface AEImageDisplayViewSetting : NSObject
{
    _Bool _isRoundCorner;	// 8 = 0x8
    _Bool _isScalable;	// 9 = 0x9
    _Bool _isNeedPageControl;	// 10 = 0xa
    _Bool _isFitWidth;	// 11 = 0xb
    _Bool _isProportional;	// 12 = 0xc
    _Bool _isFullScreenPicture;	// 13 = 0xd
    _Bool _showCancelIcon;	// 14 = 0xe
    _Bool _isShowInfo;	// 15 = 0xf
    _Bool _isClickForHideInfo;	// 16 = 0x10
    float _roundCornerRadius;	// 20 = 0x14
    float _maxWidthForProportional;	// 24 = 0x18
    float _maxHeightForProportional;	// 28 = 0x1c
    float _imageGap;	// 32 = 0x20
    UIColor *_backGroundColor;	// 40 = 0x28
}

+ (id)fullScreenSetting;	// IMP=0x000000010081f81c
+ (id)defaultSetting;	// IMP=0x000000010081f714
@property(nonatomic) _Bool isClickForHideInfo; // @synthesize isClickForHideInfo=_isClickForHideInfo;
@property(nonatomic) _Bool isShowInfo; // @synthesize isShowInfo=_isShowInfo;
@property(nonatomic) float imageGap; // @synthesize imageGap=_imageGap;
@property _Bool showCancelIcon; // @synthesize showCancelIcon=_showCancelIcon;
@property(nonatomic) _Bool isFullScreenPicture; // @synthesize isFullScreenPicture=_isFullScreenPicture;
@property(nonatomic) float maxHeightForProportional; // @synthesize maxHeightForProportional=_maxHeightForProportional;
@property(nonatomic) float maxWidthForProportional; // @synthesize maxWidthForProportional=_maxWidthForProportional;
@property(nonatomic) _Bool isProportional; // @synthesize isProportional=_isProportional;
@property(retain, nonatomic) UIColor *backGroundColor; // @synthesize backGroundColor=_backGroundColor;
@property(nonatomic) _Bool isFitWidth; // @synthesize isFitWidth=_isFitWidth;
@property(nonatomic) _Bool isNeedPageControl; // @synthesize isNeedPageControl=_isNeedPageControl;
@property(nonatomic) _Bool isScalable; // @synthesize isScalable=_isScalable;
@property(nonatomic) float roundCornerRadius; // @synthesize roundCornerRadius=_roundCornerRadius;
@property(nonatomic) _Bool isRoundCorner; // @synthesize isRoundCorner=_isRoundCorner;
- (void).cxx_destruct;	// IMP=0x000000010081fb10

@end

