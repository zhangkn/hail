//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString;

@interface ShippingDetailView : UIView <TTTAttributedLabelDelegate>
{
}

- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;	// IMP=0x00000001002c6860
- (id)getDashLineImage;	// IMP=0x00000001002c670c
- (void)bindData:(id)arg1;	// IMP=0x00000001002c39b0
- (float)getViewHeight;	// IMP=0x00000001002c37c8
- (float)getHeightForView:(id)arg1;	// IMP=0x00000001002c36ac
- (void)setupUI;	// IMP=0x00000001002c36a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002c3650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

