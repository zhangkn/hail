//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIActivityIndicatorView, UIColor, UIFont;

@interface PopoverView : UIView
{
    struct CGRect boxFrame;	// 8 = 0x8
    struct CGSize contentSize;	// 40 = 0x28
    struct CGPoint arrowPoint;	// 56 = 0x38
    _Bool above;	// 72 = 0x48
    id <PopoverViewDelegate> delegate;	// 80 = 0x50
    UIView *parentView;	// 88 = 0x58
    UIView *topView;	// 96 = 0x60
    NSArray *subviewsArray;	// 104 = 0x68
    NSArray *dividerRects;	// 112 = 0x70
    UIView *contentView;	// 120 = 0x78
    UIView *titleView;	// 128 = 0x80
    UIActivityIndicatorView *activityIndicator;	// 136 = 0x88
    _Bool showDividerRects;	// 144 = 0x90
    _Bool _disableShowAnimation;	// 145 = 0x91
    UIColor *_bgColor;	// 152 = 0x98
    UIColor *_textColor;	// 160 = 0xa0
    UIColor *_titleColor;	// 168 = 0xa8
    UIFont *_textFont;	// 176 = 0xb0
    UIFont *_titleFont;	// 184 = 0xb8
    double _archorDistance;	// 192 = 0xc0
}

+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContentView:(id)arg3 delegate:(id)arg4;	// IMP=0x000000010088c6d8
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withContentView:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010088c5b4
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withStringArray:(id)arg4 withImageArray:(id)arg5 delegate:(id)arg6;	// IMP=0x000000010088c46c
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withStringArray:(id)arg3 withImageArray:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010088c348
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withStringArray:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010088c224
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withStringArray:(id)arg3 delegate:(id)arg4;	// IMP=0x000000010088c11c
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withViewArray:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010088bff8
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withViewArray:(id)arg3 delegate:(id)arg4;	// IMP=0x000000010088bef0
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withText:(id)arg4 delegate:(id)arg5;	// IMP=0x000000010088bdcc
+ (id)showPopoverAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withText:(id)arg3 delegate:(id)arg4;	// IMP=0x000000010088bcc4
@property(nonatomic) _Bool disableShowAnimation; // @synthesize disableShowAnimation=_disableShowAnimation;
@property(nonatomic) double archorDistance; // @synthesize archorDistance=_archorDistance;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) __weak id <PopoverViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView;
@property(retain, nonatomic) NSArray *subviewsArray; // @synthesize subviewsArray;
- (void).cxx_destruct;	// IMP=0x0000000100891dcc
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010089144c
- (void)animateRotationToNewPoint:(struct CGPoint)arg1 inView:(id)arg2 withDuration:(double)arg3;	// IMP=0x0000000100891440
- (void)dismissComplete;	// IMP=0x0000000100891364
- (void)dismiss:(_Bool)arg1;	// IMP=0x00000001008911e0
- (void)dismiss;	// IMP=0x00000001008911d0
- (void)didTapButton:(id)arg1;	// IMP=0x00000001008910e4
- (void)tapped:(id)arg1;	// IMP=0x0000000100890ee4
- (void)showSuccess;	// IMP=0x0000000100890a58
- (void)showError;	// IMP=0x00000001008905cc
- (void)showImage:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000100890078
- (void)hideActivityIndicatorWithMessage:(id)arg1;	// IMP=0x000000010088fe90
- (void)showActivityIndicatorWithMessage:(id)arg1;	// IMP=0x000000010088fb1c
- (void)setupLayout:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x000000010088f448
- (void)layoutAtPoint:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x000000010088f330
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContentView:(id)arg3;	// IMP=0x000000010088efdc
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withContentView:(id)arg4;	// IMP=0x000000010088ef2c
- (id)makeTempViewsWithStrings:(id)arg1 andImages:(id)arg2;	// IMP=0x000000010088e980
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withStringArray:(id)arg4 withImageArray:(id)arg5;	// IMP=0x000000010088e8ac
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withStringArray:(id)arg3 withImageArray:(id)arg4;	// IMP=0x000000010088e7fc
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withStringArray:(id)arg4;	// IMP=0x000000010088e22c
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withStringArray:(id)arg3;	// IMP=0x000000010088dcd0
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withViewArray:(id)arg4;	// IMP=0x000000010088d638
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withViewArray:(id)arg3;	// IMP=0x000000010088d124
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withTitle:(id)arg3 withText:(id)arg4;	// IMP=0x000000010088ce78
- (void)showAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withText:(id)arg3;	// IMP=0x000000010088cbf0
- (struct CGSize)screenSize;	// IMP=0x000000010088cad0
- (void)dealloc;	// IMP=0x000000010088c9f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010088c7e0

@end

