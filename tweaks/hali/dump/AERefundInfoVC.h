//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class AEOrderRefundInfoVM, AEOrderRefundInfoView, NSString;

@interface AERefundInfoVC : AEUIViewController
{
    NSString *_orderId;	// 8 = 0x8
    NSString *_subOrderId;	// 16 = 0x10
    AEOrderRefundInfoVM *_infoVM;	// 24 = 0x18
    AEOrderRefundInfoView *_refundInfoView;	// 32 = 0x20
}

@property(retain, nonatomic) AEOrderRefundInfoView *refundInfoView; // @synthesize refundInfoView=_refundInfoView;
@property(retain, nonatomic) AEOrderRefundInfoVM *infoVM; // @synthesize infoVM=_infoVM;
@property(copy, nonatomic) NSString *subOrderId; // @synthesize subOrderId=_subOrderId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;	// IMP=0x000000010025f9f4
- (void)didReceiveMemoryWarning;	// IMP=0x000000010025f8a8
- (id)convertRefundInfoVM:(id)arg1;	// IMP=0x000000010025f1ec
- (void)requestRefundinfo:(id)arg1 subOrderId:(id)arg2;	// IMP=0x000000010025eff0
- (void)viewDidLoad;	// IMP=0x000000010025eccc
- (id)initWithOrderId:(id)arg1 subOrderId:(id)arg2;	// IMP=0x000000010025ec20

@end

