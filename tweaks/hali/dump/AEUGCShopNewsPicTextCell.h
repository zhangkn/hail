//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCShopNewsBaseCell.h"

@class AEUGCComponentPicTextPostView;

@interface AEUGCShopNewsPicTextCell : AEUGCShopNewsBaseCell
{
    AEUGCComponentPicTextPostView *_contentView;	// 56 = 0x38
    CDUnknownBlockType _contentAction;	// 64 = 0x40
}

+ (struct CGSize)autoLayoutCalculateSizeWithViewModel:(id)arg1 preferredMaxLayoutWidth:(double)arg2;	// IMP=0x0000000100f1935c
- (CDUnknownBlockType)contentAction;	// IMP=0x0000000100f19e64
- (void).cxx_destruct;	// IMP=0x0000000100f19e74
- (void)reloadContentView;	// IMP=0x0000000100f197a8
- (void)setContentAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f195e0
- (void)setPreferredMaxLayoutWidth:(double)arg1;	// IMP=0x0000000100f192f4
- (id)viewModel;	// IMP=0x0000000100f19284
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f19190

@end
