//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class RACCommand;

@interface UIBarButtonItem (RACCommandSupport)
- (void)rac_commandPerformAction:(id)arg1;	// IMP=0x000000010145b684
- (void)rac_hijackActionAndTargetIfNeeded;	// IMP=0x000000010145b5ac
@property(retain, nonatomic) RACCommand *rac_command;
@end

