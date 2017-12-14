//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMNetworkProtocol.h"

@class MKTConnection, NSString;

@interface PMNetworkMix : NSObject <PMNetworkProtocol>
{
    MKTConnection *_mtop;	// 8 = 0x8
    MKTConnection *_accs;	// 16 = 0x10
}

@property(retain, nonatomic) MKTConnection *accs; // @synthesize accs=_accs;
@property(retain, nonatomic) MKTConnection *mtop; // @synthesize mtop=_mtop;
- (void).cxx_destruct;	// IMP=0x00000001014195e0
- (void)externData:(id)arg1;	// IMP=0x0000000101419538
- (id)getPMSendChannel;	// IMP=0x00000001014194dc
- (_Bool)isSendByMtop:(id)arg1;	// IMP=0x0000000101419368
- (void)sendMsgByMtop:(id)arg1;	// IMP=0x0000000101419280
- (void)sendMsgByAccs:(id)arg1;	// IMP=0x0000000101419198
- (void)sendMsg:(id)arg1;	// IMP=0x0000000101419128
- (id)getMtop;	// IMP=0x000000010141905c
- (id)getAccs;	// IMP=0x0000000101418f90
- (id)init;	// IMP=0x0000000101418f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

