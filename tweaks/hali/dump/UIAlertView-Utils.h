//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

@interface UIAlertView (Utils)
+ (id)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000010104c514
+ (id)showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010104c278
- (_Bool)alertViewShouldEnableFirstOtherButton:(id)arg1;	// IMP=0x000000010104cef0
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000010104ce1c
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000010104cd48
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000010104cc74
- (void)alertViewCancel:(id)arg1;	// IMP=0x000000010104cbb4
- (void)didPresentAlertView:(id)arg1;	// IMP=0x000000010104caf4
- (void)willPresentAlertView:(id)arg1;	// IMP=0x000000010104ca34
@property(copy, nonatomic) CDUnknownBlockType shouldEnableFirstOtherButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType willPresentBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock;
- (void)_checkAlertViewDelegate;	// IMP=0x000000010104c5d4
@end
