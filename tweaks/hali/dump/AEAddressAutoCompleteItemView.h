//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEAddressAutoCompleteCellModel, UILabel;

@interface AEAddressAutoCompleteItemView : UIView
{
    AEAddressAutoCompleteCellModel *_model;	// 8 = 0x8
    UILabel *_addressTitleLabel;	// 16 = 0x10
    UILabel *_addressDetailLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *addressDetailLabel; // @synthesize addressDetailLabel=_addressDetailLabel;
@property(retain, nonatomic) UILabel *addressTitleLabel; // @synthesize addressTitleLabel=_addressTitleLabel;
@property(retain, nonatomic) AEAddressAutoCompleteCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x000000010045cdf8
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010045cba8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010045bfec

@end
