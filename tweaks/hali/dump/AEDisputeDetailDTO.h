//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEDisputeDetailAddressDTO, AEDisputeDetailAppealResultDTO, AEDisputeDetailLogisticsDTO, AEDisputeDetailSolutionDTO, NSArray, NSString;

@interface AEDisputeDetailDTO : NSObject
{
    _Bool _reasonCanModify;	// 8 = 0x8
    _Bool _canCancel;	// 9 = 0x9
    _Bool _isOverProtection;	// 10 = 0xa
    _Bool _needReturn;	// 11 = 0xb
    _Bool _canGiveUpReturn;	// 12 = 0xc
    _Bool _canRespond;	// 13 = 0xd
    _Bool _canAppeal;	// 14 = 0xe
    _Bool _needCountDown;	// 15 = 0xf
    _Bool _paypalIssue;	// 16 = 0x10
    NSString *_disputeId;	// 24 = 0x18
    NSString *_errorCode;	// 32 = 0x20
    NSString *_startDate;	// 40 = 0x28
    NSString *_statusText;	// 48 = 0x30
    NSString *_status;	// 56 = 0x38
    NSArray *_platformJudgementList;	// 64 = 0x40
    NSString *_reminderBefore;	// 72 = 0x48
    long long _reminderTriggerDate;	// 80 = 0x50
    NSString *_reminderAfter;	// 88 = 0x58
    NSString *_reasonText;	// 96 = 0x60
    NSArray *_proofTopList;	// 104 = 0x68
    long long _proofCount;	// 112 = 0x70
    NSArray *_solutionCardList;	// 120 = 0x78
    NSString *_sellerAdminId;	// 128 = 0x80
    NSString *_sellerAdminName;	// 136 = 0x88
    NSString *_subOrderId;	// 144 = 0x90
    AEDisputeDetailSolutionDTO *_finishedSolution;	// 152 = 0x98
    AEDisputeDetailAddressDTO *_returnAddress;	// 160 = 0xa0
    NSString *_caiNiaoLP;	// 168 = 0xa8
    NSString *_parentOrderId;	// 176 = 0xb0
    AEDisputeDetailLogisticsDTO *_returnLogisticsDTO;	// 184 = 0xb8
    NSArray *_returnTips;	// 192 = 0xc0
    AEDisputeDetailAppealResultDTO *_AppealResult;	// 200 = 0xc8
    NSString *_reminderAfterNextProcess;	// 208 = 0xd0
    NSString *_paypalReminder;	// 216 = 0xd8
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100056acc
@property(copy, nonatomic) NSString *paypalReminder; // @synthesize paypalReminder=_paypalReminder;
@property(nonatomic) _Bool paypalIssue; // @synthesize paypalIssue=_paypalIssue;
@property(copy, nonatomic) NSString *reminderAfterNextProcess; // @synthesize reminderAfterNextProcess=_reminderAfterNextProcess;
@property(nonatomic) _Bool needCountDown; // @synthesize needCountDown=_needCountDown;
@property(retain, nonatomic) AEDisputeDetailAppealResultDTO *AppealResult; // @synthesize AppealResult=_AppealResult;
@property(nonatomic) _Bool canAppeal; // @synthesize canAppeal=_canAppeal;
@property(retain, nonatomic) NSArray *returnTips; // @synthesize returnTips=_returnTips;
@property(nonatomic) _Bool canRespond; // @synthesize canRespond=_canRespond;
@property(retain, nonatomic) AEDisputeDetailLogisticsDTO *returnLogisticsDTO; // @synthesize returnLogisticsDTO=_returnLogisticsDTO;
@property(retain, nonatomic) NSString *parentOrderId; // @synthesize parentOrderId=_parentOrderId;
@property(retain, nonatomic) NSString *caiNiaoLP; // @synthesize caiNiaoLP=_caiNiaoLP;
@property(retain, nonatomic) AEDisputeDetailAddressDTO *returnAddress; // @synthesize returnAddress=_returnAddress;
@property(nonatomic) _Bool canGiveUpReturn; // @synthesize canGiveUpReturn=_canGiveUpReturn;
@property(nonatomic) _Bool needReturn; // @synthesize needReturn=_needReturn;
@property(retain, nonatomic) AEDisputeDetailSolutionDTO *finishedSolution; // @synthesize finishedSolution=_finishedSolution;
@property(retain, nonatomic) NSString *subOrderId; // @synthesize subOrderId=_subOrderId;
@property(retain, nonatomic) NSString *sellerAdminName; // @synthesize sellerAdminName=_sellerAdminName;
@property(retain, nonatomic) NSString *sellerAdminId; // @synthesize sellerAdminId=_sellerAdminId;
@property(nonatomic) _Bool isOverProtection; // @synthesize isOverProtection=_isOverProtection;
@property(nonatomic) _Bool canCancel; // @synthesize canCancel=_canCancel;
@property(retain, nonatomic) NSArray *solutionCardList; // @synthesize solutionCardList=_solutionCardList;
@property(nonatomic) long long proofCount; // @synthesize proofCount=_proofCount;
@property(retain, nonatomic) NSArray *proofTopList; // @synthesize proofTopList=_proofTopList;
@property(nonatomic) _Bool reasonCanModify; // @synthesize reasonCanModify=_reasonCanModify;
@property(retain, nonatomic) NSString *reasonText; // @synthesize reasonText=_reasonText;
@property(retain, nonatomic) NSString *reminderAfter; // @synthesize reminderAfter=_reminderAfter;
@property(nonatomic) long long reminderTriggerDate; // @synthesize reminderTriggerDate=_reminderTriggerDate;
@property(retain, nonatomic) NSString *reminderBefore; // @synthesize reminderBefore=_reminderBefore;
@property(retain, nonatomic) NSArray *platformJudgementList; // @synthesize platformJudgementList=_platformJudgementList;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *disputeId; // @synthesize disputeId=_disputeId;
- (void).cxx_destruct;	// IMP=0x00000001000572b4

@end

