//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AEProductListDiscountView : UIView
{
    UILabel *_discountLabel;	// 8 = 0x8
    UIImageView *_mobileDiscountIcon;	// 16 = 0x10
}

@property(retain, nonatomic) UIImageView *mobileDiscountIcon; // @synthesize mobileDiscountIcon=_mobileDiscountIcon;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
- (void).cxx_destruct;	// IMP=0x0000000100c0d2dc
- (void)bindDiscount:(int)arg1 mobileOnly:(_Bool)arg2 isBigSale:(_Bool)arg3;	// IMP=0x0000000100c0ce28
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100c0caec

@end
