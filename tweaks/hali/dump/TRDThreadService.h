//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TRDThreadService : NSObject
{
    NSObject<OS_dispatch_queue> *_trdThreadHandle;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_trdEncryptThread;	// 16 = 0x10
}

+ (void)releaseInstance;	// IMP=0x0000000101a16f70
+ (id)shareInstance;	// IMP=0x0000000101a16ebc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *trdEncryptThread; // @synthesize trdEncryptThread=_trdEncryptThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *trdThreadHandle; // @synthesize trdThreadHandle=_trdThreadHandle;
- (void).cxx_destruct;	// IMP=0x0000000101a30464
- (id)init;	// IMP=0x0000000101a30304
- (void)addEncryptTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000101a16cec
- (void)addTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000101a16b1c

@end

