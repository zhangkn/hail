//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextViewDelegate.h"

@class AEFeedback4PhotoReviewDTO, AEPlaceHolderTextView, NSMutableArray, NSString, TTTAttributedLabel, UIImageView, UIView;

@interface AEFeedback2PRTableViewCell : UITableViewCell <UITextViewDelegate>
{
    struct CGRect bounds;	// 8 = 0x8
    AEFeedback4PhotoReviewDTO *feedbackDTO;	// 40 = 0x28
    UIView *vLine;	// 48 = 0x30
    long long _section;	// 56 = 0x38
    UIView *_feedbackBox;	// 64 = 0x40
    AEPlaceHolderTextView *_inputCommit;	// 72 = 0x48
    NSMutableArray *_cellData;	// 80 = 0x50
    id <Feedback2PhotoReviewDelegate> _delegate;	// 88 = 0x58
    TTTAttributedLabel *_productName;	// 96 = 0x60
    UIImageView *_productImgView;	// 104 = 0x68
    UIImageView *_selectView;	// 112 = 0x70
    UIView *_productView;	// 120 = 0x78
    struct CGRect _originRect;	// 128 = 0x80
}

+ (void)setWidth:(double)arg1;	// IMP=0x00000001000ce16c
@property(retain, nonatomic) UIView *productView; // @synthesize productView=_productView;
@property(retain, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIImageView *productImgView; // @synthesize productImgView=_productImgView;
@property(retain, nonatomic) TTTAttributedLabel *productName; // @synthesize productName=_productName;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) id <Feedback2PhotoReviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) AEPlaceHolderTextView *inputCommit; // @synthesize inputCommit=_inputCommit;
@property(retain, nonatomic) UIView *feedbackBox; // @synthesize feedbackBox=_feedbackBox;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;	// IMP=0x00000001000ce3e0
- (void)layoutSubviews;	// IMP=0x00000001000ce138
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000ce12c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000ce000
- (_Bool)isEmoji:(id)arg1;	// IMP=0x00000001000cdf18
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000001000cdd70
- (void)textViewDidChange:(id)arg1;	// IMP=0x00000001000cdc58
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x00000001000cdb0c
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000001000cd990
- (void)bindData:(id)arg1 section:(long long)arg2;	// IMP=0x00000001000ccdfc
- (void)removePhoto:(id)arg1;	// IMP=0x00000001000ccd20
- (void)reloadCell:(unsigned long long)arg1;	// IMP=0x00000001000cccd8
- (void)hiddenKeyBoard;	// IMP=0x00000001000cccc0
- (void)doSelect:(_Bool)arg1;	// IMP=0x00000001000ccc44
- (void)selectItem:(id)arg1;	// IMP=0x00000001000cca58
- (void)dealloc;	// IMP=0x00000001000cc9f8
- (void)setupInput;	// IMP=0x00000001000cc1dc
- (void)setupPhoto;	// IMP=0x00000001000cb9c0
- (void)setupLine;	// IMP=0x00000001000cb5e4
- (void)setupProductName;	// IMP=0x00000001000cb114
- (void)setupProductImg;	// IMP=0x00000001000cacc0
- (void)setupSelectView;	// IMP=0x00000001000ca950
- (void)setupProductView;	// IMP=0x00000001000ca0f0
- (void)setupProduct;	// IMP=0x00000001000ca08c
- (void)hideKeyBoard:(id)arg1;	// IMP=0x00000001000ca074
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000c9e98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
