//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEPlaceOrderTotalAmountView, UIButton;

@interface AEBuyBottomBar : UIView
{
    UIButton *_confirmPayBtn;	// 8 = 0x8
    AEPlaceOrderTotalAmountView *_totalAmountView;	// 16 = 0x10
    CDUnknownBlockType _payButtonAction;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType payButtonAction; // @synthesize payButtonAction=_payButtonAction;
@property(retain, nonatomic) AEPlaceOrderTotalAmountView *totalAmountView; // @synthesize totalAmountView=_totalAmountView;
@property(retain, nonatomic) UIButton *confirmPayBtn; // @synthesize confirmPayBtn=_confirmPayBtn;
- (void).cxx_destruct;	// IMP=0x000000010048589c
- (void)updatePayNowButton:(unsigned long long)arg1;	// IMP=0x000000010048575c
- (void)unlockPayButton;	// IMP=0x0000000100485680
- (void)lockPayButton;	// IMP=0x00000001004855a4
- (void)payButtonClicked:(id)arg1;	// IMP=0x000000010048551c
- (void)bindData:(id)arg1;	// IMP=0x0000000100484e7c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100484c88

@end
