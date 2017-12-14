//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVConnectionDelegate.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString, WVConnection;

@interface WVMtopRequest : NSObject <WVConnectionDelegate>
{
    _Bool _isSafeBoxProxy;	// 8 = 0x8
    _Bool _isUseAPI2;	// 9 = 0x9
    _Bool _isNeedEcode;	// 10 = 0xa
    _Bool _isResponseAllAttributes;	// 11 = 0xb
    id <WVMtopRequestDelegate> _delegate;	// 16 = 0x10
    NSData *_responseData;	// 24 = 0x18
    NSDictionary *_responseJSON;	// 32 = 0x20
    NSString *_responseString;	// 40 = 0x28
    NSString *_apiMethod;	// 48 = 0x30
    NSMutableDictionary *_data;	// 56 = 0x38
    NSMutableDictionary *_params;	// 64 = 0x40
    WVConnection *_wvRequest;	// 72 = 0x48
}

@property(retain, nonatomic) WVConnection *wvRequest; // @synthesize wvRequest=_wvRequest;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSDictionary *responseJSON; // @synthesize responseJSON=_responseJSON;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool isResponseAllAttributes; // @synthesize isResponseAllAttributes=_isResponseAllAttributes;
@property(nonatomic) _Bool isNeedEcode; // @synthesize isNeedEcode=_isNeedEcode;
@property(nonatomic) _Bool isUseAPI2; // @synthesize isUseAPI2=_isUseAPI2;
@property(nonatomic) _Bool isSafeBoxProxy; // @synthesize isSafeBoxProxy=_isSafeBoxProxy;
@property(nonatomic) __weak id <WVMtopRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101bbe2c8
- (id)dictToQueryString:(id)arg1;	// IMP=0x0000000101bbdcd0
- (id)md5:(id)arg1;	// IMP=0x0000000101bbdbf0
- (id)md5Data:(id)arg1;	// IMP=0x0000000101bbdb34
- (void)TopSignWithSignkey:(id)arg1;	// IMP=0x0000000101bbd360
- (void)resetSid;	// IMP=0x0000000101bbd2a8
- (void)prepareForRequest;	// IMP=0x0000000101bbce8c
- (id)parametersForRequest;	// IMP=0x0000000101bbcd08
- (id)urlForRequest;	// IMP=0x0000000101bbcbd8
- (void)removeParam:(id)arg1;	// IMP=0x0000000101bbcb68
- (void)addParam:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101bbcac4
- (void)removeTopParam:(id)arg1;	// IMP=0x0000000101bbca54
- (void)addTopParam:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101bbc9b0
- (int)responseStatusCode;	// IMP=0x0000000101bbc998
- (void)setFilePath:(id)arg1;	// IMP=0x0000000101bbc980
- (id)userInfo;	// IMP=0x0000000101bbc968
- (void)setUserInfo:(id)arg1;	// IMP=0x0000000101bbc950
- (void)setUsePOST:(_Bool)arg1;	// IMP=0x0000000101bbc938
- (_Bool)usePOST;	// IMP=0x0000000101bbc920
- (id)error;	// IMP=0x0000000101bbc908
- (void)cancel;	// IMP=0x0000000101bbc8f0
- (void)startAsynchronous;	// IMP=0x0000000101bbc8b4
- (void)requestFailed:(id)arg1;	// IMP=0x0000000101bbc800
- (void)requestFinished:(id)arg1;	// IMP=0x0000000101bbc418
- (void)requestStarted:(id)arg1;	// IMP=0x0000000101bbc364
- (void)dealloc;	// IMP=0x0000000101bbc2f8
- (id)initWithMethod:(id)arg1;	// IMP=0x0000000101bbbed4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
