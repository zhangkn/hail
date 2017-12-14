//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HPGrowingTextView, UIButton;

@interface ChatInputContainerView : UIView
{
    UIView *_inputView;	// 8 = 0x8
    HPGrowingTextView *_textView;	// 16 = 0x10
    UIButton *_emotionSelectingBtn;	// 24 = 0x18
    UIButton *_imgSelectingBtn;	// 32 = 0x20
    UIButton *_custumerFaqBtn;	// 40 = 0x28
}

@property(retain, nonatomic) UIButton *custumerFaqBtn; // @synthesize custumerFaqBtn=_custumerFaqBtn;
@property(retain, nonatomic) UIButton *imgSelectingBtn; // @synthesize imgSelectingBtn=_imgSelectingBtn;
@property(retain, nonatomic) UIButton *emotionSelectingBtn; // @synthesize emotionSelectingBtn=_emotionSelectingBtn;
@property(readonly, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;	// IMP=0x0000000100a773a4
- (void)dealloc;	// IMP=0x0000000100a77214
- (void)showUserGuider;	// IMP=0x0000000100a76f34
- (void)toggleFaq:(_Bool)arg1;	// IMP=0x0000000100a7696c
- (void)faqClick:(id)arg1;	// IMP=0x0000000100a76968
- (void)imageSelectingClick;	// IMP=0x0000000100a76964
- (void)emotionSelectingClick;	// IMP=0x0000000100a76960
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100a74a18

@end

