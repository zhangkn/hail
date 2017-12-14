//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIViewController;

@interface AEDisputeDetailVM : NSObject
{
    NSString *_sellerId;	// 8 = 0x8
    NSMutableArray *_disputeComponents;	// 16 = 0x10
    UIViewController *_disputeController;	// 24 = 0x18
}

@property(nonatomic) __weak UIViewController *disputeController; // @synthesize disputeController=_disputeController;
@property(retain, nonatomic) NSMutableArray *disputeComponents; // @synthesize disputeComponents=_disputeComponents;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
- (void).cxx_destruct;	// IMP=0x0000000100085c8c
- (void)handlerCancelReturnGoodsWithData:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100085444
- (void)handlerCancelDisputeWithData:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100084d14
- (void)handlerDeleteRequestWithData:(id)arg1;	// IMP=0x00000001000848f8
- (void)handlerAcceptRequestWithDTO:(id)arg1 data:(id)arg2 sender:(id)arg3;	// IMP=0x0000000100083f44
- (void)handlerRejectRequestWithData:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100083a34
- (void)solutionCartComponentsWithDisputeDetailDto:(id)arg1;	// IMP=0x0000000100082f10
- (void)reload;	// IMP=0x0000000100082ed0
- (id)components;	// IMP=0x0000000100082ec4
- (void)unRegisterComponents;	// IMP=0x0000000100082ec0
- (void)registerComponentsWithComponent:(id)arg1;	// IMP=0x0000000100082e50
- (id)headerTitleBySubmitBy:(id)arg1;	// IMP=0x0000000100082d04
- (void)configDisputeDetailWithDto:(id)arg1;	// IMP=0x0000000100081e64
- (void)requestDeleteRequestWithIssueId:(id)arg1 solutionId:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100081c30
- (void)requestCancelReturnGoodsWithIssueId:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081a1c
- (void)requestCancelDisputeWithIssueId:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081808
- (void)requestAcceptSolutionWithIssueId:(id)arg1 solutionId:(id)arg2 solutionType:(id)arg3 refundAmount:(id)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0000000100081594
- (void)requestRejectSolutionWithIssueId:(id)arg1 solutionId:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100081360
- (void)requestDisputeWithDisputeId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000810f4
- (id)initDisputeDetailWithController:(id)arg1;	// IMP=0x000000010008107c

@end

