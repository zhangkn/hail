//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFCommandClass.h"
#import "UIActionSheetDelegate.h"

@class NSDictionary, NSString;

@interface AESaveImageCommand : NSObject <AFCommandClass, UIActionSheetDelegate>
{
    NSDictionary *tempParams;	// 8 = 0x8
}

+ (id)saveimg:(id)arg1;	// IMP=0x0000000100b88754
+ (void)execute:(id)arg1;	// IMP=0x0000000100b88730
- (void).cxx_destruct;	// IMP=0x0000000100b88d40
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;	// IMP=0x0000000100b88c28
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x0000000100b888f8
- (void)saveimg:(id)arg1;	// IMP=0x0000000100b887c8
- (id)init:(id)arg1;	// IMP=0x0000000100b886b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

