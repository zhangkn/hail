//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject
{
    BFCancellationToken *_token;	// 8 = 0x8
}

+ (id)cancellationTokenSource;	// IMP=0x00000001008ca690
@property(readonly, nonatomic) BFCancellationToken *token; // @synthesize token=_token;
- (void).cxx_destruct;	// IMP=0x00000001008ca724
- (void)dispose;	// IMP=0x00000001008ca6fc
- (void)cancelAfterDelay:(int)arg1;	// IMP=0x00000001008ca6e4
- (void)cancel;	// IMP=0x00000001008ca6cc
@property(readonly, nonatomic, getter=isCancellationRequested) _Bool cancellationRequested;
- (id)init;	// IMP=0x00000001008ca61c

@end

