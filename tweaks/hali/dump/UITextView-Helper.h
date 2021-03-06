//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface UITextView (Helper) <UIGestureRecognizerDelegate>
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001007dcb28
- (void)tapGesture:(id)arg1;	// IMP=0x00000001007dca58
- (_Bool)isOpenTapBeginEditAndMoveCaret;	// IMP=0x00000001007dca1c
- (void)hp_closeTapBeginEditAndMoveCaret;	// IMP=0x00000001007dc9b4
- (void)hp_openTapBeginEditAndMoveCaret;	// IMP=0x00000001007dc928
- (struct CGRect)hp_caretRect;	// IMP=0x00000001007dc820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

