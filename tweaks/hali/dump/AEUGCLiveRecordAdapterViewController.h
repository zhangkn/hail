//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandViewController.h"

@class NSString;

@interface AEUGCLiveRecordAdapterViewController : AEUIViewController <AFCommandViewController>
{
    _Bool _isShowVideoPush;	// 8 = 0x8
    NSString *_videoPushUrl;	// 16 = 0x10
}

@property(nonatomic) _Bool isShowVideoPush; // @synthesize isShowVideoPush=_isShowVideoPush;
@property(copy, nonatomic) NSString *videoPushUrl; // @synthesize videoPushUrl=_videoPushUrl;
- (void).cxx_destruct;	// IMP=0x0000000100f2c7c8
- (void)showVideoPush;	// IMP=0x0000000100f2c5fc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100f2c5c8
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100f2c594
- (void)viewDidLoad;	// IMP=0x0000000100f2c4c8
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100f2c40c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

