//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@interface APIPKeyboardObserver : NSObject
{
    double _showedContentHeight;	// 8 = 0x8
    struct CGRect _firstResponderRect;	// 16 = 0x10
    UIScrollView *_scrollView;	// 48 = 0x30
    struct UIEdgeInsets _originalInset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001010c6364
- (void)scrollToInput;	// IMP=0x00000001010c6220
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000001010c6034
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000001010c5afc
- (void)textDidBeginEditing:(id)arg1;	// IMP=0x00000001010c5a5c
- (void)deregisterObserver;	// IMP=0x00000001010c5a0c
- (void)registerObserver;	// IMP=0x00000001010c58c4
- (void)dealloc;	// IMP=0x00000001010c5874
- (id)initWithScrollView:(id)arg1;	// IMP=0x00000001010c5808

@end
