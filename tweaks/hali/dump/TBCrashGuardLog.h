//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface TBCrashGuardLog : NSObject
{
    CDUnknownBlockType _getCallStackBlock;	// 8 = 0x8
    CDUnknownBlockType _handleBlock;	// 16 = 0x10
    NSMutableArray *_filterCrashArray;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

+ (id)dateString;	// IMP=0x0000000101637e38
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *filterCrashArray; // @synthesize filterCrashArray=_filterCrashArray;
@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
@property(copy, nonatomic) CDUnknownBlockType getCallStackBlock; // @synthesize getCallStackBlock=_getCallStackBlock;
- (void).cxx_destruct;	// IMP=0x0000000101638008
- (void)logWithException:(id)arg1 reason:(id)arg2;	// IMP=0x0000000101637a14
- (void)setHandleLogBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010163799c
- (void)logErrorWithException:(id)arg1;	// IMP=0x0000000101637924
- (void)logErrorOnly:(id)arg1;	// IMP=0x0000000101637628
- (void)logError:(id)arg1;	// IMP=0x000000010163756c
- (id)init;	// IMP=0x00000001016374f4

@end

