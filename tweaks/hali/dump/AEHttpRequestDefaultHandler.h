//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEHttpRequestHandler.h"
#import "AFShellHTTPHandler.h"

@class NSString, WKNavigationAction;

@interface AEHttpRequestDefaultHandler : NSObject <AEHttpRequestHandler, AFShellHTTPHandler>
{
    WKNavigationAction *_navigationAction;	// 8 = 0x8
}

+ (_Bool)handleHttpCommand:(id)arg1;	// IMP=0x0000000100b63534
+ (id)sharedInstance;	// IMP=0x0000000100b63264
- (void).cxx_destruct;	// IMP=0x0000000100b6422c
- (_Bool)shouldWebView:(id)arg1 loadRequest:(id)arg2;	// IMP=0x0000000100b63974
- (id)paramJoinInLine:(id)arg1;	// IMP=0x0000000100b63740
- (_Bool)handleHttpCommand:(id)arg1;	// IMP=0x0000000100b635b0
- (_Bool)canHandleUrl:(id)arg1;	// IMP=0x0000000100b63468
- (_Bool)isAppStoreLink:(id)arg1;	// IMP=0x0000000100b63318
- (id)init;	// IMP=0x0000000100b6322c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

