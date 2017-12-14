//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEDisputeEditBaseVC.h"

#import "AFCommandTest.h"

@class AEDisputeReasonQueryModifyDTO, AEEditDoubleDropDownSelector, AEEditMoneyAmount, AEEditRadioSelector, NSString;

@interface AEDisputeReasonVC : AEDisputeEditBaseVC <AFCommandTest>
{
    AEEditRadioSelector *_receivePackageRadio;	// 8 = 0x8
    AEEditDoubleDropDownSelector *_disputeReasonSelector;	// 16 = 0x10
    AEDisputeReasonQueryModifyDTO *_dto;	// 24 = 0x18
    AEEditMoneyAmount *_refundAmountView;	// 32 = 0x20
    _Bool _isFirstOpen;	// 40 = 0x28
    _Bool _hasReceivePackage;	// 41 = 0x29
    _Bool _isEasyReturn;	// 42 = 0x2a
    NSString *_solutionId;	// 48 = 0x30
}

+ (id)paramsToTest;	// IMP=0x000000010009feac
@property(retain, nonatomic) AEDisputeReasonQueryModifyDTO *dto; // @synthesize dto=_dto;
@property(copy, nonatomic) NSString *solutionId; // @synthesize solutionId=_solutionId;
@property(nonatomic) _Bool isEasyReturn; // @synthesize isEasyReturn=_isEasyReturn;
@property(nonatomic) _Bool hasReceivePackage; // @synthesize hasReceivePackage=_hasReceivePackage;
- (void).cxx_destruct;	// IMP=0x000000010009fe30
- (void)onSubmit;	// IMP=0x000000010009f814
- (_Bool)getPackageReceiveIndexFromReasonId:(id)arg1;	// IMP=0x000000010009f324
- (id)getComponents;	// IMP=0x000000010009ea48
- (id)pageTrackName;	// IMP=0x000000010009ea1c
- (id)getPreText;	// IMP=0x000000010009e9f0
- (id)initWithIssueId:(id)arg1;	// IMP=0x000000010009e7ac
- (id)initWithParam:(id)arg1;	// IMP=0x000000010009e744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

