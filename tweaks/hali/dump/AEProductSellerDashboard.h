//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface AEProductSellerDashboard : UIView
{
    UILabel *_mainLabel;	// 8 = 0x8
    UILabel *_subLabel;	// 16 = 0x10
    long long _textAlignment;	// 24 = 0x18
}

@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;	// IMP=0x00000001005eea44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001005ee208

@end
