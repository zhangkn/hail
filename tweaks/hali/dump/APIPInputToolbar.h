//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIToolbar.h"

@class UITextField;

@interface APIPInputToolbar : UIToolbar
{
    UITextField *textField;	// 8 = 0x8
    id <DoneCancelNumberPadToolbarDelegate><UIToolbarDelegate> delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <DoneCancelNumberPadToolbarDelegate><UIToolbarDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;	// IMP=0x00000001010c98cc
- (void)doneWithNumberPad;	// IMP=0x00000001010c9828
- (void)prevNumberPad;	// IMP=0x00000001010c97d0
- (void)nextNumberPad;	// IMP=0x00000001010c9778
- (id)initWithTextField:(id)arg1 hasMutipleInput:(_Bool)arg2;	// IMP=0x00000001010c919c

@end
