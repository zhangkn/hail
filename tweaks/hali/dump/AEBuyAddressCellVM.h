//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETradeComponentModel.h"

@class NSAttributedString, UIColor;

@interface AEBuyAddressCellVM : AETradeComponentModel
{
    NSAttributedString *_attributedTitle;	// 8 = 0x8
    NSAttributedString *_attributedSubTitle;	// 16 = 0x10
    UIColor *_backgroundColor;	// 24 = 0x18
    CDUnknownBlockType _selectedAction;	// 32 = 0x20
    long long _accessoryType;	// 40 = 0x28
}

+ (id)buildCellVMWithMailingAddressDTO:(id)arg1;	// IMP=0x0000000100482f44
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(copy, nonatomic) CDUnknownBlockType selectedAction; // @synthesize selectedAction=_selectedAction;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSAttributedString *attributedSubTitle; // @synthesize attributedSubTitle=_attributedSubTitle;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void).cxx_destruct;	// IMP=0x0000000100483434
- (id)viewClassName;	// IMP=0x00000001004832f4

@end
