//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface AEUGCVideoLPEmptyFooter : UICollectionReusableView
{
    UIImageView *_errorImageView;	// 8 = 0x8
    UILabel *_errorLabel;	// 16 = 0x10
    UIActivityIndicatorView *_loadingView;	// 24 = 0x18
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
- (void).cxx_destruct;	// IMP=0x0000000100f80170
- (void)setupConstraints;	// IMP=0x0000000100f7f228
- (void)showEmpty;	// IMP=0x0000000100f7f130
- (void)showError:(id)arg1 showErrorImage:(_Bool)arg2;	// IMP=0x0000000100f7ef74
- (void)showLoading;	// IMP=0x0000000100f7ee54
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f7ec48

@end

