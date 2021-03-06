//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEMyAEGuideDelegate.h"
#import "AEMyAEMessageNotificationDelegate.h"
#import "AEMyAEOrderViewDelegate.h"
#import "AEMyAESectionViewDelegate.h"
#import "AEMyUserProfileViewDelegate.h"
#import "AEVideoRecoderVCDelegate.h"
#import "AFCommandTest.h"
#import "UIAlertViewDelegate.h"

@class AEMyAEGuide, AEMyAEMessageAndNotificationView, AEMyAEModel, AEMyAEOrderView, AEMyAESectionView, AEMyAESectionViewModel, AEMyAEUserProfileView, AEMyCardCouponView, NSString, UIButton, UIRefreshControl, UIScrollView, UIView;

@interface AEMyAEVC : AEUIViewController <AFCommandTest, AEMyUserProfileViewDelegate, AEMyAEMessageNotificationDelegate, AEMyAEOrderViewDelegate, UIAlertViewDelegate, AEMyAEGuideDelegate, AEMyAESectionViewDelegate, AEVideoRecoderVCDelegate>
{
    _Bool _showGiftCard;	// 8 = 0x8
    _Bool _showCreditCard;	// 9 = 0x9
    _Bool _showMobileTopup;	// 10 = 0xa
    _Bool _showBadge;	// 11 = 0xb
    _Bool _isIpadApp;	// 12 = 0xc
    _Bool _allowTempUserLogout;	// 13 = 0xd
    _Bool _isGuestAccount;	// 14 = 0xe
    UIRefreshControl *_refreshControl;	// 16 = 0x10
    UIScrollView *_mainScrollView;	// 24 = 0x18
    AEMyAEModel *_myAEModel;	// 32 = 0x20
    AEMyAEUserProfileView *_myAEUserProfileView;	// 40 = 0x28
    AEMyAEOrderView *_orderView;	// 48 = 0x30
    AEMyAEMessageAndNotificationView *_messageNotificationView;	// 56 = 0x38
    AEMyCardCouponView *_myCardCouponView;	// 64 = 0x40
    UIButton *_logoutButton;	// 72 = 0x48
    UIView *_scrollViewBg;	// 80 = 0x50
    AEMyAESectionView *_sectionView;	// 88 = 0x58
    AEMyAESectionView *_voucherView;	// 96 = 0x60
    AEMyAESectionView *_secondSectionView;	// 104 = 0x68
    AEMyAESectionView *_thirdSectionView;	// 112 = 0x70
    AEMyAEGuide *_myAEGuide;	// 120 = 0x78
    AEMyAESectionViewModel *_myProfileModel;	// 128 = 0x80
    AEMyAESectionViewModel *_myAEVoucherModel;	// 136 = 0x88
}

+ (id)paramsToTest;	// IMP=0x00000001001a8fa4
@property(nonatomic) _Bool isGuestAccount; // @synthesize isGuestAccount=_isGuestAccount;
@property(nonatomic) _Bool allowTempUserLogout; // @synthesize allowTempUserLogout=_allowTempUserLogout;
@property(nonatomic) _Bool isIpadApp; // @synthesize isIpadApp=_isIpadApp;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(retain, nonatomic) AEMyAESectionViewModel *myAEVoucherModel; // @synthesize myAEVoucherModel=_myAEVoucherModel;
@property(retain, nonatomic) AEMyAESectionViewModel *myProfileModel; // @synthesize myProfileModel=_myProfileModel;
@property(retain, nonatomic) AEMyAEGuide *myAEGuide; // @synthesize myAEGuide=_myAEGuide;
@property(retain, nonatomic) AEMyAESectionView *thirdSectionView; // @synthesize thirdSectionView=_thirdSectionView;
@property(retain, nonatomic) AEMyAESectionView *secondSectionView; // @synthesize secondSectionView=_secondSectionView;
@property(retain, nonatomic) AEMyAESectionView *voucherView; // @synthesize voucherView=_voucherView;
@property(retain, nonatomic) AEMyAESectionView *sectionView; // @synthesize sectionView=_sectionView;
@property(nonatomic) _Bool showMobileTopup; // @synthesize showMobileTopup=_showMobileTopup;
@property(nonatomic) _Bool showCreditCard; // @synthesize showCreditCard=_showCreditCard;
@property(nonatomic) _Bool showGiftCard; // @synthesize showGiftCard=_showGiftCard;
@property(retain, nonatomic) UIView *scrollViewBg; // @synthesize scrollViewBg=_scrollViewBg;
@property(retain, nonatomic) UIButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(retain, nonatomic) AEMyCardCouponView *myCardCouponView; // @synthesize myCardCouponView=_myCardCouponView;
@property(retain, nonatomic) AEMyAEMessageAndNotificationView *messageNotificationView; // @synthesize messageNotificationView=_messageNotificationView;
@property(retain, nonatomic) AEMyAEOrderView *orderView; // @synthesize orderView=_orderView;
@property(retain, nonatomic) AEMyAEUserProfileView *myAEUserProfileView; // @synthesize myAEUserProfileView=_myAEUserProfileView;
@property(retain, nonatomic) AEMyAEModel *myAEModel; // @synthesize myAEModel=_myAEModel;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;	// IMP=0x00000001001a8e4c
- (void)myCardCouponAction:(id)arg1;	// IMP=0x00000001001a7828
- (void)doSelect:(id)arg1 sender:(id)arg2;	// IMP=0x00000001001a6efc
- (void)goToSeeWithView:(id)arg1;	// IMP=0x00000001001a6c7c
- (void)doNotNowWithView:(id)arg1;	// IMP=0x00000001001a6954
- (void)mobileTopUpLayout:(_Bool)arg1;	// IMP=0x00000001001a6868
- (void)mobileTopupLayout:(_Bool)arg1;	// IMP=0x00000001001a6654
- (void)giftCardLayout:(id)arg1;	// IMP=0x00000001001a635c
- (void)creditCardLayout:(id)arg1;	// IMP=0x00000001001a60b0
- (void)didReceiveSessionLoginNotification;	// IMP=0x00000001001a5fa8
- (id)getSubViewModules;	// IMP=0x00000001001a4d9c
- (void)doPushMessage;	// IMP=0x00000001001a4d2c
- (void)doPushNotification;	// IMP=0x00000001001a4cbc
- (void)doEnterMyProfile;	// IMP=0x00000001001a4ad0
- (void)didSelectOrderWithOrderStatus:(id)arg1;	// IMP=0x00000001001a49b0
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001001a4798
- (void)updateUserProfile:(id)arg1;	// IMP=0x00000001001a4714
- (_Bool)isNeedDisplayTabbar;	// IMP=0x00000001001a470c
- (id)pageTrackParams;	// IMP=0x00000001001a454c
- (id)pageTrackName;	// IMP=0x00000001001a4520
- (void)requestUserProfile;	// IMP=0x00000001001a3db4
- (void)requestUnreadNotificationMsg;	// IMP=0x00000001001a3bec
- (void)startRequest;	// IMP=0x00000001001a3b68
- (void)requestQandAUnreadMsgCount;	// IMP=0x00000001001a39ac
- (void)requestFetchAccountProfile;	// IMP=0x00000001001a396c
- (void)requestUnreadMsgCount;	// IMP=0x00000001001a3760
- (void)requestStatistic;	// IMP=0x00000001001a3400
- (void)requestStatisticFromUserDefault;	// IMP=0x00000001001a336c
- (id)getShareAction;	// IMP=0x00000001001a31f0
- (void)requestNewTaskNumberWithRequest;	// IMP=0x00000001001a2b18
- (void)updateSignoutButton;	// IMP=0x00000001001a29f0
- (void)refreshView:(id)arg1;	// IMP=0x00000001001a299c
- (void)doLogOut:(id)arg1;	// IMP=0x00000001001a2724
- (void)setupViewModules;	// IMP=0x00000001001a2664
- (void)privateLayoutScrollView;	// IMP=0x00000001001a1ec8
- (void)setupUI;	// IMP=0x00000001001a1dcc
- (void)dealloc;	// IMP=0x00000001001a1d50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001001a1d00
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001001a1c6c
- (void)doNewVersion:(id)arg1;	// IMP=0x00000001001a18bc
- (void)viewDidLoad;	// IMP=0x00000001001a16b8
- (unsigned long long)displayMode;	// IMP=0x00000001001a16b0
- (id)initWithParam:(id)arg1;	// IMP=0x00000001001a167c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

