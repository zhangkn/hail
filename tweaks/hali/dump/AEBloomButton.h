//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEBloomItemButtonDelegate.h"
#import "CAAnimationDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIButton, UIColor, UIImage;

@interface AEBloomButton : UIView <AEBloomItemButtonDelegate, CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    _Bool _allowSubItemRotation;	// 8 = 0x8
    _Bool _allowSounds;	// 9 = 0x9
    _Bool _allowCenterButtonRotation;	// 10 = 0xa
    _Bool _bloom;	// 11 = 0xb
    unsigned int _foldSound;	// 12 = 0xc
    unsigned int _bloomSound;	// 16 = 0x10
    unsigned int _selectedSound;	// 20 = 0x14
    id <AEBloomButtonDelegate> _delegate;	// 24 = 0x18
    double _basicDuration;	// 32 = 0x20
    double _bloomRadius;	// 40 = 0x28
    double _bloomAngel;	// 48 = 0x30
    NSString *_bloomSoundPath;	// 56 = 0x38
    NSString *_foldSoundPath;	// 64 = 0x40
    NSString *_itemSoundPath;	// 72 = 0x48
    UIColor *_bottomViewColor;	// 80 = 0x50
    unsigned long long _bloomDirection;	// 88 = 0x58
    NSMutableArray *_itemButtonImages;	// 96 = 0x60
    NSMutableArray *_itemButtonHighlightedImages;	// 104 = 0x68
    UIImage *_centerImage;	// 112 = 0x70
    UIImage *_centerHighlightedImage;	// 120 = 0x78
    UIView *_bottomView;	// 128 = 0x80
    UIButton *_pathCenterButton;	// 136 = 0x88
    NSMutableArray *_itemButtons;	// 144 = 0x90
    NSMutableDictionary *_itemLabels;	// 152 = 0x98
    struct CGPoint _buttonCenter;	// 160 = 0xa0
    struct CGSize _bloomSize;	// 176 = 0xb0
    struct CGSize _foldedSize;	// 192 = 0xc0
    struct CGPoint _foldCenter;	// 208 = 0xd0
    struct CGPoint _bloomCenter;	// 224 = 0xe0
    struct CGPoint _expandCenter;	// 240 = 0xf0
    struct CGPoint _pathCenterButtonBloomCenter;	// 256 = 0x100
}

@property(nonatomic, getter=isBloom) _Bool bloom; // @synthesize bloom=_bloom;
@property(nonatomic) unsigned int selectedSound; // @synthesize selectedSound=_selectedSound;
@property(nonatomic) unsigned int bloomSound; // @synthesize bloomSound=_bloomSound;
@property(nonatomic) unsigned int foldSound; // @synthesize foldSound=_foldSound;
@property(retain, nonatomic) NSMutableDictionary *itemLabels; // @synthesize itemLabels=_itemLabels;
@property(retain, nonatomic) NSMutableArray *itemButtons; // @synthesize itemButtons=_itemButtons;
@property(retain, nonatomic) UIButton *pathCenterButton; // @synthesize pathCenterButton=_pathCenterButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) struct CGPoint pathCenterButtonBloomCenter; // @synthesize pathCenterButtonBloomCenter=_pathCenterButtonBloomCenter;
@property(nonatomic) struct CGPoint expandCenter; // @synthesize expandCenter=_expandCenter;
@property(nonatomic) struct CGPoint bloomCenter; // @synthesize bloomCenter=_bloomCenter;
@property(nonatomic) struct CGPoint foldCenter; // @synthesize foldCenter=_foldCenter;
@property(nonatomic) struct CGSize foldedSize; // @synthesize foldedSize=_foldedSize;
@property(nonatomic) struct CGSize bloomSize; // @synthesize bloomSize=_bloomSize;
@property(retain, nonatomic) UIImage *centerHighlightedImage; // @synthesize centerHighlightedImage=_centerHighlightedImage;
@property(retain, nonatomic) UIImage *centerImage; // @synthesize centerImage=_centerImage;
@property(retain, nonatomic) NSMutableArray *itemButtonHighlightedImages; // @synthesize itemButtonHighlightedImages=_itemButtonHighlightedImages;
@property(retain, nonatomic) NSMutableArray *itemButtonImages; // @synthesize itemButtonImages=_itemButtonImages;
@property(nonatomic) unsigned long long bloomDirection; // @synthesize bloomDirection=_bloomDirection;
@property(retain, nonatomic) UIColor *bottomViewColor; // @synthesize bottomViewColor=_bottomViewColor;
@property(nonatomic) _Bool allowCenterButtonRotation; // @synthesize allowCenterButtonRotation=_allowCenterButtonRotation;
@property(copy, nonatomic) NSString *itemSoundPath; // @synthesize itemSoundPath=_itemSoundPath;
@property(copy, nonatomic) NSString *foldSoundPath; // @synthesize foldSoundPath=_foldSoundPath;
@property(copy, nonatomic) NSString *bloomSoundPath; // @synthesize bloomSoundPath=_bloomSoundPath;
@property(nonatomic) _Bool allowSounds; // @synthesize allowSounds=_allowSounds;
@property(nonatomic) struct CGPoint buttonCenter; // @synthesize buttonCenter=_buttonCenter;
@property(nonatomic) double bloomAngel; // @synthesize bloomAngel=_bloomAngel;
@property(nonatomic) double bloomRadius; // @synthesize bloomRadius=_bloomRadius;
@property(nonatomic) _Bool allowSubItemRotation; // @synthesize allowSubItemRotation=_allowSubItemRotation;
@property(nonatomic) double basicDuration; // @synthesize basicDuration=_basicDuration;
@property(nonatomic) __weak id <AEBloomButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001007e7558
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x00000001007e70ec
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001007e70e4
- (void)itemButtonTapped:(id)arg1;	// IMP=0x00000001007e6be0
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001007e6bd4
- (void)removeAllPathItems;	// IMP=0x00000001007e6b94
- (void)addPathItems:(id)arg1;	// IMP=0x00000001007e669c
- (id)bloomAnimationWithEndPoint:(struct CGPoint)arg1 andFarPoint:(struct CGPoint)arg2 andNearPoint:(struct CGPoint)arg3;	// IMP=0x00000001007e6040
- (void)pathCenterButtonBloom;	// IMP=0x00000001007e5420
- (id)foldAnimationFromPoint:(struct CGPoint)arg1 withFarPoint:(struct CGPoint)arg2;	// IMP=0x00000001007e4f08
- (void)resizeToFoldedFrame;	// IMP=0x00000001007e4b40
- (void)pathCenterButtonFold;	// IMP=0x00000001007e4728
- (struct CGPoint)createEndPointWithRadius:(double)arg1 andAngel:(double)arg2;	// IMP=0x00000001007e4550
- (void)exchangeHighlightAndCenterImage;	// IMP=0x00000001007e43e4
- (void)centerButtonTapped;	// IMP=0x00000001007e4390
- (void)configureSounds;	// IMP=0x00000001007e4074
- (void)configureViewsLayoutWithButtonSize:(struct CGSize)arg1;	// IMP=0x00000001007e3ba4
- (id)initWithButtonFrame:(struct CGRect)arg1 centerImage:(id)arg2 highlightedImage:(id)arg3;	// IMP=0x00000001007e37c0
- (id)initWithCenterImage:(id)arg1 highlightedImage:(id)arg2;	// IMP=0x00000001007e3754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
