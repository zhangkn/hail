//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface TRDLoopService : NSObject
{
    _Bool _bUploadingProcess;	// 8 = 0x8
    id <TRDLoopServiceDelegate> _delegate;	// 16 = 0x10
    NSTimer *_loopTimer;	// 24 = 0x18
}

@property(nonatomic) _Bool bUploadingProcess; // @synthesize bUploadingProcess=_bUploadingProcess;
@property(retain, nonatomic) NSTimer *loopTimer; // @synthesize loopTimer=_loopTimer;
@property(nonatomic) __weak id <TRDLoopServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101a37a60
- (void)doNextTask;	// IMP=0x0000000101a379c4
- (void)handleLoopTask;	// IMP=0x0000000101a37908
- (void)stopService;	// IMP=0x0000000101a378ac
- (void)startService;	// IMP=0x0000000101a37818
- (id)init;	// IMP=0x0000000101a376d8

@end

