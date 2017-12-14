//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UITextField;

@interface AECheckCodeView : UIView
{
    NSString *_checkCodeValue;	// 8 = 0x8
    UITextField *_checkCodeTf;	// 16 = 0x10
    UIImageView *_checkCodeImageView;	// 24 = 0x18
    UIButton *_checkCodeRefreshBtn;	// 32 = 0x20
    NSString *_checkCodeImageURL;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *checkCodeImageURL; // @synthesize checkCodeImageURL=_checkCodeImageURL;
@property(retain, nonatomic) UIButton *checkCodeRefreshBtn; // @synthesize checkCodeRefreshBtn=_checkCodeRefreshBtn;
@property(retain, nonatomic) UIImageView *checkCodeImageView; // @synthesize checkCodeImageView=_checkCodeImageView;
@property(retain, nonatomic) UITextField *checkCodeTf; // @synthesize checkCodeTf=_checkCodeTf;
@property(retain, nonatomic) NSString *checkCodeValue; // @synthesize checkCodeValue=_checkCodeValue;
- (void).cxx_destruct;	// IMP=0x0000000100ba16d0
- (void)refreshCheckCode;	// IMP=0x0000000100ba155c
- (void)hiddenCheckCode;	// IMP=0x0000000100ba154c
- (void)showCheckCode:(id)arg1;	// IMP=0x0000000100ba1430
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ba0764

@end
