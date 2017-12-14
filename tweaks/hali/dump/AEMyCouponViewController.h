//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AECouponServiceDelegate.h"
#import "AFCommandTest.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AECouponService, HMSegmentedControl, NSDictionary, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UITableView, UITextField, UIView;

@interface AEMyCouponViewController : AEUIViewController <AFCommandTest, UITableViewDataSource, UITableViewDelegate, AECouponServiceDelegate, UIScrollViewDelegate>
{
    _Bool _hasNextPage;	// 8 = 0x8
    _Bool _loading;	// 9 = 0x9
    int _pageIndex;	// 12 = 0xc
    NSDictionary *_parameters;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    long long _couponType;	// 32 = 0x20
    AECouponService *_couponService;	// 40 = 0x28
    NSMutableArray *_dataArray;	// 48 = 0x30
    UIButton *_aecouponBtn;	// 56 = 0x38
    UIButton *_sellerCouponBtn;	// 64 = 0x40
    NSLayoutConstraint *_bottomLineConstraint;	// 72 = 0x48
    UITextField *_couponCodeTextField;	// 80 = 0x50
    UIButton *_applyButton;	// 88 = 0x58
    UIView *_overlayView;	// 96 = 0x60
    HMSegmentedControl *_segmentedControl;	// 104 = 0x68
}

+ (id)paramsToTest;	// IMP=0x00000001001af228
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) UITextField *couponCodeTextField; // @synthesize couponCodeTextField=_couponCodeTextField;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) NSLayoutConstraint *bottomLineConstraint; // @synthesize bottomLineConstraint=_bottomLineConstraint;
@property(retain, nonatomic) UIButton *sellerCouponBtn; // @synthesize sellerCouponBtn=_sellerCouponBtn;
@property(retain, nonatomic) UIButton *aecouponBtn; // @synthesize aecouponBtn=_aecouponBtn;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) AECouponService *couponService; // @synthesize couponService=_couponService;
@property(nonatomic) long long couponType; // @synthesize couponType=_couponType;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;	// IMP=0x00000001001af134
- (void)applyInviteCode:(id)arg1;	// IMP=0x00000001001ae6a8
- (void)stopApplyButtonAnimating;	// IMP=0x00000001001ae690
- (void)startApplyButtonAnimating;	// IMP=0x00000001001ae678
- (void)showInvaildCodeMessage:(id)arg1;	// IMP=0x00000001001ae58c
- (void)resetUI;	// IMP=0x00000001001ae448
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000001001ae3c4
- (void)dismissKeyboard;	// IMP=0x00000001001ae350
- (_Bool)isNeedDisplayTabbar;	// IMP=0x00000001001ae348
- (_Bool)isNeedAuthCheck;	// IMP=0x00000001001ae340
- (id)pageTrackName;	// IMP=0x00000001001ae314
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001001ae264
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001001ae240
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001001ae224
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001001ae1e4
- (void)couponLoaded:(id)arg1 isSuccess:(_Bool)arg2 count:(unsigned long long)arg3 resultArray:(id)arg4;	// IMP=0x00000001001ae044
- (void)couponLoaded:(id)arg1 isSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000001001adf90
- (void)sharingCouponLoaded:(id)arg1 isSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000001001adeb4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001adc30
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001001adc28
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001001adc20
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001001adc08
- (void)viewDidLayoutSubviews;	// IMP=0x00000001001ad9b4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001001ad980
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001001ad94c
- (void)changeCouponType:(id)arg1;	// IMP=0x00000001001ad7d8
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000001001ad7d0
- (void)endLoading;	// IMP=0x00000001001ad7b8
- (void)tryLoadNextPage;	// IMP=0x00000001001ad774
- (void)startLoading;	// IMP=0x00000001001ad710
- (void)viewDidLoad;	// IMP=0x00000001001ac59c
- (void)setupSegmentedControl;	// IMP=0x00000001001abea8
- (void)dealloc;	// IMP=0x00000001001abe34
- (id)init;	// IMP=0x00000001001abd80
- (id)initWithParam:(id)arg1;	// IMP=0x00000001001abbe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

