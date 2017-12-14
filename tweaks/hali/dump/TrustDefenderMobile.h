//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSMutableArray, NSNumber, NSString, TDDefaults, TDLocationHandler, TrustDefenderMobileCore;

@interface TrustDefenderMobile : NSObject
{
    int _in_progress;	// 8 = 0x8
    _Bool _shouldCancel;	// 12 = 0xc
    _Bool _manualSessionID;	// 13 = 0xd
    _Bool _generateSessionID;	// 14 = 0xe
    _Bool _shouldEnableLocationServices;	// 15 = 0xf
    _Bool _shouldEnableLocationServicesQuietly;	// 16 = 0x10
    TDLocationHandler *_locationHandler;	// 24 = 0x18
    long long _status;	// 32 = 0x20
    NSMutableArray *_urlRequests;	// 40 = 0x28
    TrustDefenderMobileCore *_td;	// 48 = 0x30
    CLLocation *_manualLocation;	// 56 = 0x38
    id _delegate;	// 64 = 0x40
    NSNumber *_timeout;	// 72 = 0x48
    TDDefaults *_defaults;	// 80 = 0x50
    CDUnknownBlockType _callbackBlock;	// 88 = 0x58
}

@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) TDDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CLLocation *manualLocation; // @synthesize manualLocation=_manualLocation;
@property(readonly, nonatomic) TrustDefenderMobileCore *td; // @synthesize td=_td;
@property(readonly, nonatomic) NSMutableArray *urlRequests; // @synthesize urlRequests=_urlRequests;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool shouldEnableLocationServicesQuietly; // @synthesize shouldEnableLocationServicesQuietly=_shouldEnableLocationServicesQuietly;
@property(nonatomic) _Bool shouldEnableLocationServices; // @synthesize shouldEnableLocationServices=_shouldEnableLocationServices;
@property(nonatomic) _Bool generateSessionID; // @synthesize generateSessionID=_generateSessionID;
@property(nonatomic) _Bool manualSessionID; // @synthesize manualSessionID=_manualSessionID;
@property(retain, nonatomic) TDLocationHandler *locationHandler; // @synthesize locationHandler=_locationHandler;
@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
- (void).cxx_destruct;	// IMP=0x00000001011596b8
- (id)version;	// IMP=0x00000001011590cc
- (id)location;	// IMP=0x0000000101159068
- (void)setLocation:(id)arg1;	// IMP=0x0000000101158fd4
- (void)pauseLocationServices:(_Bool)arg1;	// IMP=0x0000000101158f14
- (void)setSessionID:(id)arg1;	// IMP=0x0000000101158d44
@property(readonly, nonatomic) NSString *sessionID;
- (id)getResult;	// IMP=0x0000000101158afc
- (long long)isDone;	// IMP=0x0000000101158ac8
- (void)cancel;	// IMP=0x0000000101158654
- (long long)doProfileRequest:(id)arg1;	// IMP=0x00000001011578f4
- (long long)doProfileRequest;	// IMP=0x00000001011578b8
- (long long)doProfileRequestWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000101157824
- (long long)doProfileRequestWithOptions:(id)arg1 andCallbackBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010115775c
- (id)initWithConfig:(id)arg1;	// IMP=0x00000001011560cc
- (void)doProfileMain;	// IMP=0x0000000101154be8
- (void)readDefaults;	// IMP=0x0000000101154718
- (void)updateDefaults;	// IMP=0x00000001011540a0
- (long long)waitForConnections:(_Bool)arg1;	// IMP=0x0000000101153be8
- (void)tidyUp;	// IMP=0x0000000101153874
- (_Bool)connectToFPXMLServer:(id)arg1;	// IMP=0x0000000101153544
- (_Bool)connectToDNS;	// IMP=0x0000000101153424
- (long long)getConfigFromServer:(id)arg1 with:(long long)arg2;	// IMP=0x0000000101153118
- (void)dealloc;	// IMP=0x00000001011530c8

@end

