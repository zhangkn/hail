//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFUIViewController.h"

#import "AFUIPresenter.h"

@class NSString;

@interface AEUIViewController : AIFUIViewController <AFUIPresenter>
{
    _Bool _shouldShowShadowImage;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldShowShadowImage; // @synthesize shouldShowShadowImage=_shouldShowShadowImage;
- (_Bool)isNeedDisplayGoTop;	// IMP=0x0000000100a32414
- (_Bool)isNeedDisplayTabbar;	// IMP=0x0000000100a3240c
- (void)hiddenLoadingIndicator;	// IMP=0x0000000100a323d8
- (void)showLoadingIndicator;	// IMP=0x0000000100a323a4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100a32344
- (void)postPageLoadNotification;	// IMP=0x0000000100a32224
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100a32094
- (id)findShadowImageView:(id)arg1;	// IMP=0x0000000100a31ed0
- (void)viewDidLoad;	// IMP=0x0000000100a319e0
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100a3199c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100a31900
- (id)showMode;	// IMP=0x0000000100a318d4
- (unsigned long long)displayMode;	// IMP=0x0000000100a318cc
- (void)afDismiss:(id)arg1;	// IMP=0x0000000100a5c16c
- (void)afPresent:(id)arg1;	// IMP=0x0000000100a5c15c
- (void)afDismiss:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x0000000100a5c0d0
- (void)afPresent:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x0000000100a5c044
- (id)viewControllerHierarchyService;	// IMP=0x0000000100a5c030
- (id)presenter;	// IMP=0x0000000100a5c02c
- (id)cateIDString:(long long)arg1;	// IMP=0x0000000100ca2658
- (void)viewBrandProducts:(id)arg1;	// IMP=0x0000000100ca23f0
- (_Bool)viewCategoryProducts:(id)arg1 parentCategory:(id)arg2;	// IMP=0x0000000100ca2180

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
