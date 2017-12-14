//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSCopying.h"

@class AELabelSelectionItemViewModel, UILabel;

@interface AELabelSelectionItemView : UIView <NSCopying>
{
    id <AELabelSelectionItemViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    AELabelSelectionItemViewModel *_viewModel;	// 24 = 0x18
}

+ (double)cornerRadius;	// IMP=0x0000000100bf309c
+ (id)textFont;	// IMP=0x0000000100bf307c
+ (id)textColor;	// IMP=0x0000000100bf3060
+ (double)horizontalGap;	// IMP=0x0000000100bf3058
+ (double)borderWidth;	// IMP=0x0000000100bf3050
+ (id)borderColor;	// IMP=0x0000000100bf3034
+ (id)backgroundViewColor;	// IMP=0x0000000100bf3020
+ (double)heightWithViewModel:(id)arg1;	// IMP=0x0000000100bf2f00
+ (double)widthWithViewModel:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000100bf2d84
@property(retain, nonatomic) AELabelSelectionItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <AELabelSelectionItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100bf3424
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100bf32cc
- (void)gestureTapped:(id)arg1;	// IMP=0x0000000100bf30a4
- (id)itemId;	// IMP=0x0000000100bf2fcc
- (void)disableSubViewsUserInteraction;	// IMP=0x0000000100bf2fbc
- (void)bindDataWithViewModel:(id)arg1;	// IMP=0x0000000100bf2f0c
- (id)init;	// IMP=0x0000000100bf27ec

@end
