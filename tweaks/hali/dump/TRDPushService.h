//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBAccsCallbackProtocol.h"

@class NSString, TBAccsManager;

@interface TRDPushService : NSObject <TBAccsCallbackProtocol>
{
    _Bool _executed;	// 8 = 0x8
    id <TRDPushServiceProtocal> _delegate;	// 16 = 0x10
    TBAccsManager *_accsManager;	// 24 = 0x18
    NSString *_userID;	// 32 = 0x20
}

+ (id)serviceID;	// IMP=0x0000000101a36d0c
+ (CDUnknownBlockType)callBack;	// IMP=0x0000000101a36934
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a3683c
+ (id)sharedInstance;	// IMP=0x0000000101a36758
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool executed; // @synthesize executed=_executed;
@property(retain, nonatomic) TBAccsManager *accsManager; // @synthesize accsManager=_accsManager;
@property(nonatomic) __weak id <TRDPushServiceProtocal> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101a37370
- (id)sendData:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000101a371ec
- (_Bool)listener;	// IMP=0x0000000101a36d38
- (void)dealloc;	// IMP=0x0000000101a368cc
- (void)listenerByID:(id)arg1;	// IMP=0x0000000101a36860
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a3685c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
