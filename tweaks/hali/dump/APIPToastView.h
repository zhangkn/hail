//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString;

@interface APIPToastView : UIView
{
    _Bool _ajaxFlag;	// 8 = 0x8
    long long _toastDuration;	// 16 = 0x10
    NSDictionary *_onload;	// 24 = 0x18
    NSString *_toastInfo;	// 32 = 0x20
    UIView *_maskView;	// 40 = 0x28
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) NSString *toastInfo; // @synthesize toastInfo=_toastInfo;
@property(retain, nonatomic) NSDictionary *onload; // @synthesize onload=_onload;
@property(nonatomic) _Bool ajaxFlag; // @synthesize ajaxFlag=_ajaxFlag;
@property(nonatomic) long long toastDuration; // @synthesize toastDuration=_toastDuration;
- (void).cxx_destruct;	// IMP=0x00000001010ef434
- (void)dealloc;	// IMP=0x00000001010ef2cc
- (void)checkRotation;	// IMP=0x00000001010ef1b8
- (void)layoutSubviews;	// IMP=0x00000001010ef0b0
- (void)hideViews;	// IMP=0x00000001010eef64
- (void)dismiss;	// IMP=0x00000001010eedd8
- (void)present;	// IMP=0x00000001010ee4d8
- (void)parseBlock:(id)arg1;	// IMP=0x00000001010ee2ac
- (void)handleOnload;	// IMP=0x00000001010edef0
- (id)build:(id)arg1;	// IMP=0x00000001010edc44
- (id)init;	// IMP=0x00000001010edbb0

@end
