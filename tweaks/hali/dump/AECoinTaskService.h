//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AECoinTaskService : NSObject
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;	// IMP=0x0000000100800424
- (void)dealloc;	// IMP=0x00000001008003d4
- (void)doCoinTaskByBizType:(id)arg1 directShowCoinView:(_Bool)arg2 originAlertContent:(id)arg3 completion:(CDUnknownBlockType)arg4 refId:(id)arg5;	// IMP=0x00000001007ff8d0

@end

