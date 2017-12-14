//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextViewDelegate.h"

@class AEOrderListSubListDTO, AEOrderViewListDTO, AEPlaceHolderTextView, NSString, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIView;

@interface AEFollowupFeedbackTableViewCell : UITableViewCell <UITextViewDelegate>
{
    struct CGRect bounds;	// 8 = 0x8
    AEOrderViewListDTO *order;	// 40 = 0x28
    AEOrderListSubListDTO *productDTO;	// 48 = 0x30
    UILabel *followupTitle;	// 56 = 0x38
    UIView *vLine;	// 64 = 0x40
    UIView *maskClick;	// 72 = 0x48
    long long _section;	// 80 = 0x50
    UIView *_feedbackBox;	// 88 = 0x58
    AEPlaceHolderTextView *_inputCommit;	// 96 = 0x60
    id <followupSaveCommentDelegate> _delegate;	// 104 = 0x68
    TTTAttributedLabel *_productName;	// 112 = 0x70
    UILabel *_properties;	// 120 = 0x78
    UILabel *_price;	// 128 = 0x80
    UILabel *_quantity;	// 136 = 0x88
    UIImageView *_productImgView;	// 144 = 0x90
    UIImageView *_sepImg;	// 152 = 0x98
    UILabel *_propertiesL;	// 160 = 0xa0
    UIButton *_feedbackBt;	// 168 = 0xa8
}

@property(retain, nonatomic) UIButton *feedbackBt; // @synthesize feedbackBt=_feedbackBt;
@property(retain, nonatomic) UILabel *propertiesL; // @synthesize propertiesL=_propertiesL;
@property(retain, nonatomic) UIImageView *sepImg; // @synthesize sepImg=_sepImg;
@property(retain, nonatomic) UIImageView *productImgView; // @synthesize productImgView=_productImgView;
@property(retain, nonatomic) UILabel *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) UILabel *price; // @synthesize price=_price;
@property(retain, nonatomic) UILabel *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) TTTAttributedLabel *productName; // @synthesize productName=_productName;
@property(nonatomic) id <followupSaveCommentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AEPlaceHolderTextView *inputCommit; // @synthesize inputCommit=_inputCommit;
@property(retain, nonatomic) UIView *feedbackBox; // @synthesize feedbackBox=_feedbackBox;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;	// IMP=0x000000010010e138
- (void)layoutSubviews;	// IMP=0x000000010010db38
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010010db2c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010010d9f8
- (_Bool)isEmoji:(id)arg1;	// IMP=0x000000010010d910
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x000000010010d768
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000010010d6b8
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x000000010010d624
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x000000010010d51c
- (void)maskTap:(id)arg1;	// IMP=0x000000010010d41c
- (void)bindData:(id)arg1 rateDic:(id)arg2 section:(long long)arg3;	// IMP=0x000000010010c6d0
- (void)removePhoto:(id)arg1;	// IMP=0x000000010010c5f4
- (void)hiddenKeyBoard;	// IMP=0x000000010010c5dc
- (void)submitComment:(id)arg1;	// IMP=0x000000010010c500
- (void)dealloc;	// IMP=0x000000010010c4a0
- (void)setupSubmit;	// IMP=0x000000010010b9fc
- (void)setupPhoto;	// IMP=0x000000010010b16c
- (void)setupInput;	// IMP=0x000000010010a484
- (void)setupMaskClick;	// IMP=0x000000010010a0d0
- (void)setupLine;	// IMP=0x0000000100109c9c
- (void)setupArrow;	// IMP=0x000000010010991c
- (void)setupPrice;	// IMP=0x0000000100109220
- (void)setupProperties;	// IMP=0x0000000100108918
- (void)setupProductName;	// IMP=0x0000000100108484
- (void)setupProductImg;	// IMP=0x0000000100107bcc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 withNoImage:(_Bool)arg3;	// IMP=0x0000000100107a8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
