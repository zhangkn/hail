//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEHomeViewControlerLifeCycleProtocol.h"

@class AEHomeViewController, NSString;

@interface AEHomeViewControllerHandler : NSObject <AEHomeViewControlerLifeCycleProtocol>
{
    AEHomeViewController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100a6110c
- (void)dealloc;	// IMP=0x0000000100a61094
- (void)homeViewController:(id)arg1 willDisappear:(_Bool)arg2;	// IMP=0x0000000100a61090
- (void)homeViewController:(id)arg1 willAppear:(_Bool)arg2;	// IMP=0x0000000100a6108c
- (void)homeViewControllerDidLoad:(id)arg1;	// IMP=0x0000000100a60fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
