//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface NWPolicyViewer : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001013a0ac4
- (id)queryAmdcPolicy:(id)arg1;	// IMP=0x00000001013a09dc
- (id)queryInternalPolicy:(id)arg1;	// IMP=0x00000001013a08ac
- (id)queryCustomPolicy:(id)arg1;	// IMP=0x00000001013a0794
- (id)convertGroup2Aisles:(id)arg1;	// IMP=0x00000001013a04c8
- (void)notifyQueryResult:(id)arg1 withAisles:(id)arg2;	// IMP=0x00000001013a0330
- (void)onQueryTask:(id)arg1;	// IMP=0x00000001013a007c
- (void)asyncQueryHost:(id)arg1 withDelegate:(id)arg2;	// IMP=0x000000010139fef0
- (id)init;	// IMP=0x000000010139fe64

@end

