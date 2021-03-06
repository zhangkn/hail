//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEEditComponentBaseView.h"

#import "UITextViewDelegate.h"

@class NSString, UITextView;

@interface AEEditTextView : AEEditComponentBaseView <UITextViewDelegate>
{
    UITextView *_textView;	// 8 = 0x8
    NSString *_placeholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c9e4c
- (void)dealloc;	// IMP=0x00000001000c9dd0
- (_Bool)checkValidate;	// IMP=0x00000001000c9c2c
- (_Bool)resignFirstResponder;	// IMP=0x00000001000c9bd0
- (void)setText:(id)arg1;	// IMP=0x00000001000c9a80
- (id)getText;	// IMP=0x00000001000c99e0
- (_Bool)isEmoji:(id)arg1;	// IMP=0x00000001000c98f8
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000001000c98d4
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000001000c97ac
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x00000001000c9684
- (void)buildContentView;	// IMP=0x00000001000c8f10
- (id)getScrollView:(id)arg1;	// IMP=0x00000001000c8e68
- (void)keyboardWasShown:(id)arg1;	// IMP=0x00000001000c8c04
- (id)initWithTitle:(id)arg1 placeholder:(id)arg2;	// IMP=0x00000001000c8afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

