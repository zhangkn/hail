//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class RACCommand;

@interface UIButton (RACCommandSupport)
- (void)rac_commandPerformAction:(id)arg1;	// IMP=0x000000010145b9a0
- (void)rac_hijackActionAndTargetIfNeeded;	// IMP=0x000000010145b848
@property(retain, nonatomic) RACCommand *rac_command;
@end
