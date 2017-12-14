//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UICollectionView, UILabel, UIScrollView, UITextView;

@interface AEUGCPostProductCardEditView : UIView <UITextViewDelegate>
{
    UIButton *_closeButton;	// 8 = 0x8
    UIButton *_doneButton;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIView *_separateLine;	// 32 = 0x20
    UILabel *_contentTitleLabel;	// 40 = 0x28
    UIView *_descriptionBottomLine;	// 48 = 0x30
    UIScrollView *_contentScrollView;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    UIActivityIndicatorView *_indicatorView;	// 72 = 0x48
    UITextView *_descriptionTextView;	// 80 = 0x50
    UILabel *_descriptionCountLabel;	// 88 = 0x58
    double _preferredMaxLayoutHeight;	// 96 = 0x60
    double _preferredMaxLayoutWidth;	// 104 = 0x68
    id <AEUGCPostProductCardEditViewDelegate> _delegate;	// 112 = 0x70
    id <AEUGCPostProductCardEditViewDataSource> _dataSource;	// 120 = 0x78
}

+ (id)chineseSet;	// IMP=0x0000000100e44cec
+ (id)filterText:(id)arg1;	// IMP=0x0000000100e44b10
+ (_Bool)shouldForbiddenChineseTextInput:(id)arg1;	// IMP=0x0000000100e44954
@property(nonatomic) __weak id <AEUGCPostProductCardEditViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <AEUGCPostProductCardEditViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) double preferredMaxLayoutHeight; // @synthesize preferredMaxLayoutHeight=_preferredMaxLayoutHeight;
@property(readonly, nonatomic) UILabel *descriptionCountLabel; // @synthesize descriptionCountLabel=_descriptionCountLabel;
@property(readonly, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(readonly, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;	// IMP=0x0000000100e45a1c
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000100e45834
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000100e45828
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000100e4581c
- (void)textViewDidChange:(id)arg1;	// IMP=0x0000000100e455e4
- (void)cancelAction:(id)arg1;	// IMP=0x0000000100e45548
- (void)doneAction:(id)arg1;	// IMP=0x0000000100e454ac
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100e45394
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100e45370
- (void)updateDescriptionCountLabel;	// IMP=0x0000000100e44f1c
- (void)setTextViewText:(id)arg1;	// IMP=0x0000000100e44d8c
- (double)descriptionHeigh;	// IMP=0x0000000100e448ec
- (void)updateUI;	// IMP=0x0000000100e447dc
- (double)calculateCollectionHeight;	// IMP=0x0000000100e446e0
- (void)configAutoLayout;	// IMP=0x0000000100e42c40
- (void)viewDidLoad;	// IMP=0x0000000100e42bd0
- (void)loadView;	// IMP=0x0000000100e4201c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100e41fc4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100e41f6c
- (void)dealloc;	// IMP=0x0000000100e41f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

