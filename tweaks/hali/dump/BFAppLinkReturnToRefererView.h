//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BFAppLink, UIButton, UIColor, UILabel, UITapGestureRecognizer;

@interface BFAppLinkReturnToRefererView : UIView
{
    _Bool _explicitlyHidden;	// 8 = 0x8
    _Bool _closed;	// 9 = 0x9
    id <BFAppLinkReturnToRefererViewDelegate> _delegate;	// 16 = 0x10
    UIColor *_textColor;	// 24 = 0x18
    BFAppLink *_refererAppLink;	// 32 = 0x20
    unsigned long long _includeStatusBarInSize;	// 40 = 0x28
    UILabel *_labelView;	// 48 = 0x30
    UIButton *_closeButton;	// 56 = 0x38
    UITapGestureRecognizer *_insideTapGestureRecognizer;	// 64 = 0x40
}

@property(retain, nonatomic) UITapGestureRecognizer *insideTapGestureRecognizer; // @synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) unsigned long long includeStatusBarInSize; // @synthesize includeStatusBarInSize=_includeStatusBarInSize;
@property(retain, nonatomic) BFAppLink *refererAppLink; // @synthesize refererAppLink=_refererAppLink;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <BFAppLinkReturnToRefererViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001008c97f0
- (void)updateHidden;	// IMP=0x00000001008c9624
- (void)onTapInside:(id)arg1;	// IMP=0x00000001008c95d4
- (void)closeButtonTapped:(id)arg1;	// IMP=0x00000001008c9590
- (_Bool)hasRefererData;	// IMP=0x00000001008c9518
- (id)localizedLabelForReferer:(id)arg1;	// IMP=0x00000001008c943c
- (id)drawCloseButtonImageWithColor:(id)arg1;	// IMP=0x00000001008c931c
- (void)updateColors;	// IMP=0x00000001008c9294
- (void)updateLabelText;	// IMP=0x00000001008c914c
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000001008c9134
- (double)statusBarHeight;	// IMP=0x00000001008c8e84
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001008c8dec
- (void)layoutSubviews;	// IMP=0x00000001008c8c44
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001008c8ba0
- (void)initViews;	// IMP=0x00000001008c8854
- (void)commonInit;	// IMP=0x00000001008c8778
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001008c8720
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001008c86b8

@end

