//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKAppInviteContent, UIViewController;

@interface FBSDKAppInviteDialog : NSObject
{
    UIViewController *_fromViewController;	// 8 = 0x8
    id <FBSDKAppInviteDialogDelegate> _delegate;	// 16 = 0x10
    FBSDKAppInviteContent *_content;	// 24 = 0x18
}

+ (id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000101284a00
+ (id)showWithContent:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010128499c
+ (void)initialize;	// IMP=0x0000000101284928
@property(copy, nonatomic) FBSDKAppInviteContent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <FBSDKAppInviteDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void).cxx_destruct;	// IMP=0x0000000101285a20
- (void)_logDialogShow;	// IMP=0x0000000101285924
- (void)_invokeDelegateDidFailWithError:(id)arg1;	// IMP=0x0000000101285770
- (void)_invokeDelegateDidCompleteWithResults:(id)arg1;	// IMP=0x00000001012855e4
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;	// IMP=0x0000000101285580
- (_Bool)_canShowNative;	// IMP=0x0000000101285500
- (_Bool)validateWithError:(id *)arg1;	// IMP=0x0000000101285494
- (_Bool)show;	// IMP=0x0000000101284ae8
- (_Bool)canShow;	// IMP=0x0000000101284ae0

@end
