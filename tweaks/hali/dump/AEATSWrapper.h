//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface AEATSWrapper : NSObject
{
    _Bool _isAllowHTTPRequest;	// 8 = 0x8
    NSMutableArray *_httpHosts;	// 16 = 0x10
    NSMutableDictionary *_tasks;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010104ad94
@property(readonly) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(readonly) NSMutableArray *httpHosts; // @synthesize httpHosts=_httpHosts;
@property(readonly, nonatomic) _Bool isAllowHTTPRequest; // @synthesize isAllowHTTPRequest=_isAllowHTTPRequest;
- (void).cxx_destruct;	// IMP=0x000000010104bb2c
- (void)mock;	// IMP=0x000000010104b740
- (void)addWrapTask:(CDUnknownBlockType)arg1 taskName:(id)arg2;	// IMP=0x000000010104b69c
- (void)allowHTTP4Hosts:(id)arg1 includesSubdomains:(_Bool)arg2;	// IMP=0x000000010104b208
- (id)init;	// IMP=0x000000010104ae14

@end

