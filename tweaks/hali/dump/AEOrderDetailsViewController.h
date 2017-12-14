//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEOrderCancelReasonListViewDelegate.h"
#import "AEOrderFilterDelegate.h"
#import "AFCommandTest.h"
#import "EGORefreshTableDelegate.h"
#import "OrderDisplayDelegate.h"
#import "OrderMessageDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "feedback2PRPostSuccessDelegate.h"
#import "feedbackPostSuccessDelegate.h"
#import "followupFeedbackPostSuccessDelegate.h"

@class AELeaveFeedbackbuyerInfoSuggstionDTO, AEOrderCancelReasonListView, AEOrderDetailsDTO, AEOrderInfoService, AEOrderViewListDTO, AESlideOutSubView, AETextInputView, EGORefreshTableHeaderView, NSDictionary, NSMutableArray, NSString, OrderMessageService, UIButton, UILabel, UIRefreshControl, UITableView;

@interface AEOrderDetailsViewController : AEUIViewController <AFCommandTest, UITableViewDataSource, UITableViewDelegate, EGORefreshTableDelegate, OrderMessageDelegate, OrderDisplayDelegate, UIActionSheetDelegate, UITextFieldDelegate, AEOrderCancelReasonListViewDelegate, feedbackPostSuccessDelegate, followupFeedbackPostSuccessDelegate, feedback2PRPostSuccessDelegate, AEOrderFilterDelegate>
{
    _Bool _reloading;	// 8 = 0x8
    _Bool _isFollowup;	// 9 = 0x9
    int _countOfMessage;	// 12 = 0xc
    int _currentExtendMaxDay;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    EGORefreshTableHeaderView *_refreshHeaderView;	// 32 = 0x20
    OrderMessageService *_orderMessageService;	// 40 = 0x28
    AEOrderInfoService *_orderInfoService;	// 48 = 0x30
    AEOrderDetailsDTO *_orderDetailsDTO;	// 56 = 0x38
    AESlideOutSubView *_slideOutSubview;	// 64 = 0x40
    AETextInputView *_extendProcessingTimeInput;	// 72 = 0x48
    UILabel *_extendProcessingRemindLabel;	// 80 = 0x50
    AESlideOutSubView *_cancelSliderOutSubview;	// 88 = 0x58
    NSString *_currentReason;	// 96 = 0x60
    AEOrderCancelReasonListView *_cancelOrderListView;	// 104 = 0x68
    UIButton *_selectReasonBtn;	// 112 = 0x70
    UIButton *_cancelThisOrderBtn;	// 120 = 0x78
    UILabel *_extraReasonLabel;	// 128 = 0x80
    UILabel *_selectReasonLabel;	// 136 = 0x88
    NSString *_orderId;	// 144 = 0x90
    NSMutableArray *_cancelOrderReasonKey;	// 152 = 0x98
    NSMutableArray *_cancelOrderReasonValue;	// 160 = 0xa0
    UIRefreshControl *_refreshControl;	// 168 = 0xa8
    AEOrderViewListDTO *_orderViewList;	// 176 = 0xb0
    double _performanceBeginTime;	// 184 = 0xb8
    NSDictionary *_needHiddenPhotoDic;	// 192 = 0xc0
    AELeaveFeedbackbuyerInfoSuggstionDTO *_buyerInfoSuggstion;	// 200 = 0xc8
    NSMutableArray *_expandStatus;	// 208 = 0xd0
    NSString *_orderIds;	// 216 = 0xd8
}

+ (id)paramsToTest;	// IMP=0x00000001001ea3d4
@property(retain, nonatomic) NSString *orderIds; // @synthesize orderIds=_orderIds;
@property(retain, nonatomic) NSMutableArray *expandStatus; // @synthesize expandStatus=_expandStatus;
@property(retain, nonatomic) AELeaveFeedbackbuyerInfoSuggstionDTO *buyerInfoSuggstion; // @synthesize buyerInfoSuggstion=_buyerInfoSuggstion;
@property(nonatomic) _Bool isFollowup; // @synthesize isFollowup=_isFollowup;
@property(retain, nonatomic) NSDictionary *needHiddenPhotoDic; // @synthesize needHiddenPhotoDic=_needHiddenPhotoDic;
@property(nonatomic) double performanceBeginTime; // @synthesize performanceBeginTime=_performanceBeginTime;
@property(retain, nonatomic) AEOrderViewListDTO *orderViewList; // @synthesize orderViewList=_orderViewList;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) NSMutableArray *cancelOrderReasonValue; // @synthesize cancelOrderReasonValue=_cancelOrderReasonValue;
@property(retain, nonatomic) NSMutableArray *cancelOrderReasonKey; // @synthesize cancelOrderReasonKey=_cancelOrderReasonKey;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UILabel *selectReasonLabel; // @synthesize selectReasonLabel=_selectReasonLabel;
@property(retain, nonatomic) UILabel *extraReasonLabel; // @synthesize extraReasonLabel=_extraReasonLabel;
@property(retain, nonatomic) UIButton *cancelThisOrderBtn; // @synthesize cancelThisOrderBtn=_cancelThisOrderBtn;
@property(retain, nonatomic) UIButton *selectReasonBtn; // @synthesize selectReasonBtn=_selectReasonBtn;
@property(retain, nonatomic) AEOrderCancelReasonListView *cancelOrderListView; // @synthesize cancelOrderListView=_cancelOrderListView;
@property(copy, nonatomic) NSString *currentReason; // @synthesize currentReason=_currentReason;
@property(retain, nonatomic) AESlideOutSubView *cancelSliderOutSubview; // @synthesize cancelSliderOutSubview=_cancelSliderOutSubview;
@property(retain, nonatomic) UILabel *extendProcessingRemindLabel; // @synthesize extendProcessingRemindLabel=_extendProcessingRemindLabel;
@property(nonatomic) int currentExtendMaxDay; // @synthesize currentExtendMaxDay=_currentExtendMaxDay;
@property(retain, nonatomic) AETextInputView *extendProcessingTimeInput; // @synthesize extendProcessingTimeInput=_extendProcessingTimeInput;
@property(retain, nonatomic) AESlideOutSubView *slideOutSubview; // @synthesize slideOutSubview=_slideOutSubview;
@property(retain, nonatomic) AEOrderDetailsDTO *orderDetailsDTO; // @synthesize orderDetailsDTO=_orderDetailsDTO;
@property(retain, nonatomic) AEOrderInfoService *orderInfoService; // @synthesize orderInfoService=_orderInfoService;
@property(nonatomic) int countOfMessage; // @synthesize countOfMessage=_countOfMessage;
@property(retain, nonatomic) OrderMessageService *orderMessageService; // @synthesize orderMessageService=_orderMessageService;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x00000001001ea1dc
- (_Bool)shouldKeepFullScreenInIPad;	// IMP=0x00000001001e9acc
- (void)dealloc;	// IMP=0x00000001001e99e0
- (_Bool)isMobileRecharge;	// IMP=0x00000001001e9950
- (_Bool)isGiftCardOrder;	// IMP=0x00000001001e98c0
- (id)getAroundNumber;	// IMP=0x00000001001e9728
- (id)egoRefreshTableDataSourceLastUpdated:(id)arg1;	// IMP=0x00000001001e9714
- (_Bool)egoRefreshTableDataSourceIsLoading:(id)arg1;	// IMP=0x00000001001e9704
- (void)egoRefreshTableDidTriggerRefresh:(int)arg1;	// IMP=0x00000001001e96c0
- (void)postSuccess;	// IMP=0x00000001001e965c
- (void)doFeedback:(id)arg1 isFollowup:(_Bool)arg2;	// IMP=0x00000001001e935c
- (void)checkNeedHiddenPhoto:(id)arg1;	// IMP=0x00000001001e8c64
- (void)pushToMyGiftCard;	// IMP=0x00000001001e8c14
- (id)getSubOrderIds;	// IMP=0x00000001001e8a14
- (void)pushToPhotoReview:(id)arg1;	// IMP=0x00000001001e8804
- (void)pushToFeedBack:(id)arg1;	// IMP=0x00000001001e85f0
- (void)pushToTrack:(id)arg1;	// IMP=0x00000001001e84b0
- (void)warrantyClick:(id)arg1;	// IMP=0x00000001001e82d0
- (void)disputeClick:(id)arg1;	// IMP=0x00000001001e7bb4
- (void)refundInfoClick:(id)arg1;	// IMP=0x00000001001e7a04
- (void)memoViewClick:(id)arg1;	// IMP=0x00000001001e78b0
- (void)setupCancelOrderView;	// IMP=0x00000001001e657c
- (void)pushToCancel;	// IMP=0x00000001001e61b0
- (void)cancelOrder;	// IMP=0x00000001001e5e48
- (void)pushToResume;	// IMP=0x00000001001e5ca8
- (void)pushToExtend;	// IMP=0x00000001001e5000
- (void)pushToConfirmReceived:(id)arg1;	// IMP=0x00000001001e4eac
- (void)pushToPayNow:(id)arg1;	// IMP=0x00000001001e487c
- (void)doCancelOrder;	// IMP=0x00000001001e44b8
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001001e4464
- (void)clickCancelThisOrder:(id)arg1;	// IMP=0x00000001001e41a8
- (void)clickSelectReason:(id)arg1;	// IMP=0x00000001001e3e78
- (void)didSelectRowAtIndexPath:(id)arg1;	// IMP=0x00000001001e3a8c
- (void)clickExtendSubmit:(id)arg1;	// IMP=0x00000001001e3518
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000001001e338c
- (void)updateLabelUsingContentsOfTextField:(id)arg1;	// IMP=0x00000001001e3138
- (void)dismissSlideOutView:(id)arg1;	// IMP=0x00000001001e300c
- (void)willPresentActionSheet:(id)arg1;	// IMP=0x00000001001e2d90
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001001e2a3c
- (id)pageTrackName;	// IMP=0x00000001001e2a10
- (id)pageTrackParams;	// IMP=0x00000001001e2958
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001001e2908
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001001e2604
- (void)orderMessageCountLoaded:(id)arg1 isSuccess:(_Bool)arg2 result:(int)arg3 error:(id)arg4;	// IMP=0x00000001001e24c8
- (void)showUserGuider;	// IMP=0x00000001001e20d0
- (void)requestOrderDetail;	// IMP=0x00000001001e11fc
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001001e11e4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001001e10e8
- (void)doneLoadingTableViewData;	// IMP=0x00000001001e10b4
- (void)reloadTableViewDataSource;	// IMP=0x00000001001e10a0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001df210
- (void)orderSubActionButtonTouched:(id)arg1 button:(id)arg2;	// IMP=0x00000001001df03c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001001de360
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001001de280
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001001de10c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001001de0cc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001dde2c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001001dde18
- (void)setupUIWithHidden:(_Bool)arg1;	// IMP=0x00000001001dd858
- (void)viewDidLoad;	// IMP=0x00000001001dd714
- (_Bool)isNeedAuthCheck;	// IMP=0x00000001001dd70c
- (id)initWithParam:(id)arg1;	// IMP=0x00000001001dd638
- (id)initWithOrderId:(id)arg1 orderViewListDto:(id)arg2;	// IMP=0x00000001001dd570
- (void)baseInit;	// IMP=0x00000001001dd450

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

