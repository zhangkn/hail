//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class AEDisputeReturnGoodsVM, AEDisputeTableView, NSString;

@interface AEDisputeReturnGoodsVC : AEUIViewController
{
    AEDisputeTableView *_returnGoodsTableView;	// 8 = 0x8
    NSString *_orderId;	// 16 = 0x10
    NSString *_issueId;	// 24 = 0x18
    AEDisputeReturnGoodsVM *_returnGoodsVM;	// 32 = 0x20
}

@property(retain, nonatomic) AEDisputeReturnGoodsVM *returnGoodsVM; // @synthesize returnGoodsVM=_returnGoodsVM;
@property(retain, nonatomic) NSString *issueId; // @synthesize issueId=_issueId;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) AEDisputeTableView *returnGoodsTableView; // @synthesize returnGoodsTableView=_returnGoodsTableView;
- (void).cxx_destruct;	// IMP=0x00000001000b5e20
- (void)dealloc;	// IMP=0x00000001000b5c7c
- (id)pageTrackName;	// IMP=0x00000001000b5c50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000b5c1c
- (void)dismissVC;	// IMP=0x00000001000b5bcc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000b5b54
- (void)viewDidLoad;	// IMP=0x00000001000b5a08
- (void)requestReturnGoods;	// IMP=0x00000001000b578c
- (void)privateLayoutSubviews;	// IMP=0x00000001000b556c
- (void)addSubviews;	// IMP=0x00000001000b54fc
- (id)initReturnGoodsWithSuborderId:(id)arg1 issueId:(id)arg2;	// IMP=0x00000001000b5450
- (id)initWithParam:(id)arg1;	// IMP=0x00000001000b538c

@end

