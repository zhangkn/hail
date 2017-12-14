//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEUGCVideoLPCollectionViewControllerDelegate.h"
#import "AEUGCVideoLPTabDelegate.h"
#import "AFCommandViewController.h"
#import "UIScrollViewDelegate.h"

@class AEUGCVideoLPCollectionViewController, AEUGCVideoLPTab, NSArray, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, UIView;

@interface AEUGCVideoLPViewController : AEUIViewController <AEUGCVideoLPTabDelegate, UIScrollViewDelegate, AEUGCVideoLPCollectionViewControllerDelegate, AFCommandViewController>
{
    _Bool _previousNavigationBarHidden;	// 8 = 0x8
    _Bool _showError;	// 9 = 0x9
    UIView *_statusBarView;	// 16 = 0x10
    UIView *_fakeNavigationView;	// 24 = 0x18
    UILabel *_fakeNavigationTitleLabel;	// 32 = 0x20
    UIView *_fakeNavigationContainerView;	// 40 = 0x28
    UIButton *_backButton;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    UIView *_contentView;	// 64 = 0x40
    AEUGCVideoLPTab *_tabView;	// 72 = 0x48
    NSMutableArray *_scrollViewArr;	// 80 = 0x50
    NSArray *_languageArr;	// 88 = 0x58
    AEUGCVideoLPCollectionViewController *_currentLandingPageVC;	// 96 = 0x60
    NSMutableArray *_landingPageViewControllerArr;	// 104 = 0x68
    NSString *_currentLanguage;	// 112 = 0x70
    double _currentOffsetY;	// 120 = 0x78
    NSString *_lpId;	// 128 = 0x80
}

@property(nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(copy, nonatomic) NSString *lpId; // @synthesize lpId=_lpId;
@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(nonatomic) _Bool previousNavigationBarHidden; // @synthesize previousNavigationBarHidden=_previousNavigationBarHidden;
@property(copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(copy, nonatomic) NSMutableArray *landingPageViewControllerArr; // @synthesize landingPageViewControllerArr=_landingPageViewControllerArr;
@property(retain, nonatomic) AEUGCVideoLPCollectionViewController *currentLandingPageVC; // @synthesize currentLandingPageVC=_currentLandingPageVC;
@property(copy, nonatomic) NSArray *languageArr; // @synthesize languageArr=_languageArr;
@property(retain, nonatomic) NSMutableArray *scrollViewArr; // @synthesize scrollViewArr=_scrollViewArr;
@property(retain, nonatomic) AEUGCVideoLPTab *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *fakeNavigationContainerView; // @synthesize fakeNavigationContainerView=_fakeNavigationContainerView;
@property(retain, nonatomic) UILabel *fakeNavigationTitleLabel; // @synthesize fakeNavigationTitleLabel=_fakeNavigationTitleLabel;
@property(retain, nonatomic) UIView *fakeNavigationView; // @synthesize fakeNavigationView=_fakeNavigationView;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
- (void).cxx_destruct;	// IMP=0x0000000100f26f7c
- (id)pageTrackParams;	// IMP=0x0000000100f26500
- (id)pageTrackName;	// IMP=0x0000000100f264d4
- (void)remarkScrollViewConstraints;	// IMP=0x0000000100f25a18
- (id)getCollectionViewControllerByLanguage:(id)arg1;	// IMP=0x0000000100f258f4
- (id)containsLandingPage:(id)arg1;	// IMP=0x0000000100f25754
- (void)setupConstraints;	// IMP=0x0000000100f23ba0
- (void)onBackButtonTapped:(id)arg1;	// IMP=0x0000000100f23b50
- (void)collectionTopRefresh;	// IMP=0x0000000100f23aa8
- (void)collectionViewDidAppear;	// IMP=0x0000000100f23a64
- (void)collectionViewFetchError;	// IMP=0x0000000100f23900
- (void)collectionViewDidScroll:(id)arg1;	// IMP=0x0000000100f232ec
- (void)collectionViewFetchLanguageListDone:(id)arg1 withLanguageList:(id)arg2 withTitle:(id)arg3;	// IMP=0x0000000100f22f20
- (void)collectionViewFetchBannerDone:(id)arg1;	// IMP=0x0000000100f22eac
- (void)languageTabChanged:(long long)arg1;	// IMP=0x0000000100f2190c
- (void)dealloc;	// IMP=0x0000000100f21880
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100f2179c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100f215c0
- (void)viewDidLoad;	// IMP=0x0000000100f205f4
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100f204fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
