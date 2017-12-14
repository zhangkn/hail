//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AEDisputeTableViewCellProtocol.h"

@class AEDisputeDetailInfoCellVM, AEDisputeTableViewTopHeaderView, AEHTMLDescriptionLabel, AIFCopyLabel, MASViewAttribute, NSString, NSTimer, UIButton, UILabel;

@interface AEDisputeDetailsDisputeInfoCell : UITableViewCell <AEDisputeTableViewCellProtocol>
{
    CDUnknownBlockType _editDisputeBlock;	// 8 = 0x8
    CDUnknownBlockType _responseDisputeBlock;	// 16 = 0x10
    UILabel *_disputeStart;	// 24 = 0x18
    AIFCopyLabel *_status;	// 32 = 0x20
    AIFCopyLabel *_reminder;	// 40 = 0x28
    AEHTMLDescriptionLabel *_paypalReminder;	// 48 = 0x30
    AIFCopyLabel *_disputeReason;	// 56 = 0x38
    UILabel *_aliexpressArbitrationL;	// 64 = 0x40
    AIFCopyLabel *_aliexpressArbitration;	// 72 = 0x48
    AIFCopyLabel *_solution;	// 80 = 0x50
    AEDisputeTableViewTopHeaderView *_topHeaderView;	// 88 = 0x58
    MASViewAttribute *_currentViewsAttribute;	// 96 = 0x60
    UIButton *_editDisputeReasonBtn;	// 104 = 0x68
    UIButton *_responseBtn;	// 112 = 0x70
    UILabel *_disputeReasonL;	// 120 = 0x78
    UILabel *_reminderL;	// 128 = 0x80
    UILabel *_solutionL;	// 136 = 0x88
    UILabel *_statusL;	// 144 = 0x90
    AEDisputeDetailInfoCellVM *_disputeDetailInfoCellVM;	// 152 = 0x98
    NSTimer *_timer;	// 160 = 0xa0
    long long _deadline;	// 168 = 0xa8
}

@property(nonatomic) long long deadline; // @synthesize deadline=_deadline;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AEDisputeDetailInfoCellVM *disputeDetailInfoCellVM; // @synthesize disputeDetailInfoCellVM=_disputeDetailInfoCellVM;
@property(retain, nonatomic) UILabel *statusL; // @synthesize statusL=_statusL;
@property(retain, nonatomic) UILabel *solutionL; // @synthesize solutionL=_solutionL;
@property(retain, nonatomic) UILabel *reminderL; // @synthesize reminderL=_reminderL;
@property(retain, nonatomic) UILabel *disputeReasonL; // @synthesize disputeReasonL=_disputeReasonL;
@property(retain, nonatomic) UIButton *responseBtn; // @synthesize responseBtn=_responseBtn;
@property(retain, nonatomic) UIButton *editDisputeReasonBtn; // @synthesize editDisputeReasonBtn=_editDisputeReasonBtn;
@property(retain, nonatomic) MASViewAttribute *currentViewsAttribute; // @synthesize currentViewsAttribute=_currentViewsAttribute;
@property(retain, nonatomic) AEDisputeTableViewTopHeaderView *topHeaderView; // @synthesize topHeaderView=_topHeaderView;
@property(retain, nonatomic) AIFCopyLabel *solution; // @synthesize solution=_solution;
@property(retain, nonatomic) AIFCopyLabel *aliexpressArbitration; // @synthesize aliexpressArbitration=_aliexpressArbitration;
@property(retain, nonatomic) UILabel *aliexpressArbitrationL; // @synthesize aliexpressArbitrationL=_aliexpressArbitrationL;
@property(retain, nonatomic) AIFCopyLabel *disputeReason; // @synthesize disputeReason=_disputeReason;
@property(retain, nonatomic) AEHTMLDescriptionLabel *paypalReminder; // @synthesize paypalReminder=_paypalReminder;
@property(retain, nonatomic) AIFCopyLabel *reminder; // @synthesize reminder=_reminder;
@property(retain, nonatomic) AIFCopyLabel *status; // @synthesize status=_status;
@property(retain, nonatomic) UILabel *disputeStart; // @synthesize disputeStart=_disputeStart;
@property(copy, nonatomic) CDUnknownBlockType responseDisputeBlock; // @synthesize responseDisputeBlock=_responseDisputeBlock;
@property(copy, nonatomic) CDUnknownBlockType editDisputeBlock; // @synthesize editDisputeBlock=_editDisputeBlock;
- (void).cxx_destruct;	// IMP=0x000000010007950c
- (_Bool)shouldShowCountDown:(id)arg1;	// IMP=0x0000000100077a2c
- (long long)calculateDeadline:(id)arg1;	// IMP=0x00000001000779a8
- (void)timerFired;	// IMP=0x00000001000778d4
- (void)updateReminder;	// IMP=0x000000010007784c
- (void)handlerResponseButtonAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077840
- (void)handlerEditDisputeButtonAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077834
- (void)doResponse:(id)arg1;	// IMP=0x000000010007777c
- (void)doEditDisputeReason:(id)arg1;	// IMP=0x00000001000776a4
- (void)remakeConstraintsWithLabel:(id)arg1;	// IMP=0x0000000100077250
- (void)setResponseBtnWithShow:(_Bool)arg1;	// IMP=0x000000010007688c
- (void)setAliexpressArbitrationText:(id)arg1;	// IMP=0x0000000100075be8
- (void)setEditDisputeReasonBtnWithShow:(_Bool)arg1;	// IMP=0x0000000100075354
- (void)setDisputeReasonText:(id)arg1;	// IMP=0x00000001000751a4
- (void)setPaypalReminderText:(id)arg1;	// IMP=0x0000000100074f0c
- (void)setReminderText:(id)arg1;	// IMP=0x0000000100074d64
- (void)setSolutionText:(id)arg1;	// IMP=0x0000000100074bbc
- (void)setStatusText:(id)arg1;	// IMP=0x00000001000749c0
- (void)setDisputeStartText:(id)arg1;	// IMP=0x00000001000748ec
- (void)bindData:(id)arg1;	// IMP=0x0000000100074600
- (void)privateLayoutResponseBtn;	// IMP=0x0000000100074184
- (void)privateLayoutAliexpressArbitration;	// IMP=0x00000001000738f8
- (void)privateEditDisputeBtn;	// IMP=0x000000010007347c
- (void)privateLayoutDisputeReason;	// IMP=0x0000000100072b60
- (void)privateLayoutReminder;	// IMP=0x0000000100072238
- (void)privateLayoutSolution;	// IMP=0x000000010007191c
- (void)privateLayoutStatus;	// IMP=0x0000000100070f90
- (void)privateLayoutDisputeStart;	// IMP=0x0000000100070410
- (void)privateLayoutTopHeader;	// IMP=0x000000010007001c
- (void)privateLayoutPaypalReminder;	// IMP=0x000000010006f81c
- (void)privateLayoutViews;	// IMP=0x000000010006f768
- (void)addSubViews;	// IMP=0x000000010006f494
- (void)dealloc;	// IMP=0x000000010006f418
- (id)initDisputeInfoWithVM:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010006f35c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
