//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class AELeaveFeedbackbuyerInfoSuggstionDTO, AELeaveFeedbackbuyerInfoSuggstionSubDTO, AEOrderViewListDTO, AEPlaceHolderTextView, AMRatingControl, NSArray, NSDictionary, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UITextField, UIView;

@interface AEFeedbackTableViewCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate>
{
    struct CGRect bounds;	// 8 = 0x8
    UIImageView *image;	// 40 = 0x28
    UILabel *subject;	// 48 = 0x30
    UILabel *rateLb;	// 56 = 0x38
    UILabel *vLine1;	// 64 = 0x40
    UILabel *rateDetailLb;	// 72 = 0x48
    UILabel *rateDetailLb1;	// 80 = 0x50
    UILabel *rateDetailLb2;	// 88 = 0x58
    UILabel *rateDetailLb3;	// 96 = 0x60
    UIImage *starNormal;	// 104 = 0x68
    UIImage *starSelected;	// 112 = 0x70
    UILabel *noteLb;	// 120 = 0x78
    struct CGSize noteSize;	// 128 = 0x80
    AEOrderViewListDTO *order;	// 144 = 0x90
    NSString *heightKey;	// 152 = 0x98
    NSString *weightKey;	// 160 = 0xa0
    NSString *height;	// 168 = 0xa8
    NSString *weight;	// 176 = 0xb0
    UIView *suggestArea;	// 184 = 0xb8
    NSArray *itemTxts;	// 192 = 0xc0
    AELeaveFeedbackbuyerInfoSuggstionSubDTO *currentBuyerDTO;	// 200 = 0xc8
    UILabel *itemTitle1;	// 208 = 0xd0
    UIView *itemBox;	// 216 = 0xd8
    UILabel *itemTitle2;	// 224 = 0xe0
    UIView *itemBox2;	// 232 = 0xe8
    UIView *vLine;	// 240 = 0xf0
    UIView *vLine2;	// 248 = 0xf8
    UIView *vLine3;	// 256 = 0x100
    UITextField *item2_input_1;	// 264 = 0x108
    UITextField *item2_input_2;	// 272 = 0x110
    UILabel *item2_title_1;	// 280 = 0x118
    UILabel *item2_title_2;	// 288 = 0x120
    UILabel *item2_titleEnd_1;	// 296 = 0x128
    UILabel *item2_titleEnd_2;	// 304 = 0x130
    NSDictionary *currRateDic;	// 312 = 0x138
    int _mainRate;	// 320 = 0x140
    int _subRate1;	// 324 = 0x144
    int _subRate2;	// 328 = 0x148
    int _subRate3;	// 332 = 0x14c
    int _isNoteShow;	// 336 = 0x150
    long long _section;	// 344 = 0x158
    UIView *_feedbackBox;	// 352 = 0x160
    UILabel *_rateContentTxt;	// 360 = 0x168
    UILabel *_subRateContentTxt1;	// 368 = 0x170
    UILabel *_subRateContentTxt2;	// 376 = 0x178
    UILabel *_subRateContentTxt3;	// 384 = 0x180
    AMRatingControl *_simpleRatingControl;	// 392 = 0x188
    AMRatingControl *_simpleRatingControlDetail1;	// 400 = 0x190
    AMRatingControl *_simpleRatingControlDetail2;	// 408 = 0x198
    AMRatingControl *_simpleRatingControlDetail3;	// 416 = 0x1a0
    AEPlaceHolderTextView *_inputCommit;	// 424 = 0x1a8
    NSMutableArray *_cellData;	// 432 = 0x1b0
    id <saveCommentDelegate> _delegate;	// 440 = 0x1b8
    NSDictionary *_canLeavePhotos;	// 448 = 0x1c0
    AELeaveFeedbackbuyerInfoSuggstionDTO *_buyerInfoSuggstion;	// 456 = 0x1c8
    struct CGRect _originRect;	// 464 = 0x1d0
}

@property(retain, nonatomic) AELeaveFeedbackbuyerInfoSuggstionDTO *buyerInfoSuggstion; // @synthesize buyerInfoSuggstion=_buyerInfoSuggstion;
@property(retain, nonatomic) NSDictionary *canLeavePhotos; // @synthesize canLeavePhotos=_canLeavePhotos;
@property(nonatomic) id <saveCommentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) int isNoteShow; // @synthesize isNoteShow=_isNoteShow;
@property(nonatomic) int subRate3; // @synthesize subRate3=_subRate3;
@property(nonatomic) int subRate2; // @synthesize subRate2=_subRate2;
@property(nonatomic) int subRate1; // @synthesize subRate1=_subRate1;
@property(nonatomic) int mainRate; // @synthesize mainRate=_mainRate;
@property(retain, nonatomic) NSMutableArray *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) AEPlaceHolderTextView *inputCommit; // @synthesize inputCommit=_inputCommit;
@property(retain, nonatomic) AMRatingControl *simpleRatingControlDetail3; // @synthesize simpleRatingControlDetail3=_simpleRatingControlDetail3;
@property(retain, nonatomic) AMRatingControl *simpleRatingControlDetail2; // @synthesize simpleRatingControlDetail2=_simpleRatingControlDetail2;
@property(retain, nonatomic) AMRatingControl *simpleRatingControlDetail1; // @synthesize simpleRatingControlDetail1=_simpleRatingControlDetail1;
@property(retain, nonatomic) AMRatingControl *simpleRatingControl; // @synthesize simpleRatingControl=_simpleRatingControl;
@property(retain, nonatomic) UILabel *subRateContentTxt3; // @synthesize subRateContentTxt3=_subRateContentTxt3;
@property(retain, nonatomic) UILabel *subRateContentTxt2; // @synthesize subRateContentTxt2=_subRateContentTxt2;
@property(retain, nonatomic) UILabel *subRateContentTxt1; // @synthesize subRateContentTxt1=_subRateContentTxt1;
@property(retain, nonatomic) UILabel *rateContentTxt; // @synthesize rateContentTxt=_rateContentTxt;
@property(retain, nonatomic) UIView *feedbackBox; // @synthesize feedbackBox=_feedbackBox;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;	// IMP=0x00000001000f9e80
- (void)layoutSubviews;	// IMP=0x00000001000f9234
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000f9228
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000f8efc
- (id)json2Dic:(id)arg1;	// IMP=0x00000001000f8e6c
- (void)buildRequirText:(id)arg1 withLabel:(id)arg2 isRequired:(_Bool)arg3;	// IMP=0x00000001000f8ad4
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000001000f8ab0
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000001000f83c8
- (_Bool)validateNumber:(id)arg1;	// IMP=0x00000001000f82c4
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000f82b4
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000001000f8248
- (_Bool)isEmoji:(id)arg1;	// IMP=0x00000001000f8160
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000001000f7fb8
- (void)textViewDidChange:(id)arg1;	// IMP=0x00000001000f7f08
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x00000001000f7e3c
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000001000f7ce8
- (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize)arg3 lineBreakMode:(long long)arg4;	// IMP=0x00000001000f7b34
- (void)tapthis:(id)arg1;	// IMP=0x00000001000f7800
- (void)bindData:(id)arg1 rateDic:(id)arg2 section:(long long)arg3;	// IMP=0x00000001000f3208
- (void)removePhoto:(id)arg1;	// IMP=0x00000001000f312c
- (void)resizeView:(struct CGSize)arg1;	// IMP=0x00000001000f2a14
- (void)mustHave:(_Bool)arg1;	// IMP=0x00000001000f27bc
- (void)hiddenKeyBoard;	// IMP=0x00000001000f26dc
- (id)originImage:(id)arg1 scaleToSize:(struct CGSize)arg2;	// IMP=0x00000001000f2658
- (void)dealloc;	// IMP=0x00000001000f25f8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 withNoImage:(_Bool)arg3;	// IMP=0x00000001000f04ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

