//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBCrashReporterAbortDelegate.h"

@class NSString;

@interface TBCrashReporterDumpState : NSObject <TBCrashReporterAbortDelegate>
{
}

- (id)getCurrentView;	// IMP=0x0000000101644950
- (void)abortCallBack:(id)arg1;	// IMP=0x0000000101644908

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

