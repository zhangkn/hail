//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFDataChannel.h"

@interface AIFDataLiveChannel : AIFDataChannel
{
}

+ (id)sharedInstance;	// IMP=0x0000000101060208
- (void)unSubscribeWithTopicId:(id)arg1 withFrom:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010106044c
- (void)subscribeWithTopicId:(id)arg1 withFrom:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101060308
- (id)initLive;	// IMP=0x00000001010602a4
- (id)init;	// IMP=0x00000001010601c8

@end

