//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVURLInterceptorRuleHandlerProtocol.h"

@class NSString;

@interface WVURLInterceptorRuleHandler : NSObject <WVURLInterceptorRuleHandlerProtocol>
{
    _Bool _updating;	// 8 = 0x8
}

+ (id)getAppRuleConfigurationFilePath;	// IMP=0x0000000101bb856c
+ (id)getRuleConfigurationFilePath;	// IMP=0x0000000101bb84e8
+ (id)getDefaultConfig;	// IMP=0x0000000101bb8254
+ (id)useDefaultConfig;	// IMP=0x0000000101bb81f4
+ (id)sharedInstance;	// IMP=0x0000000101bb7d24
@property _Bool updating; // @synthesize updating=_updating;
- (void)requestFailed:(id)arg1;	// IMP=0x0000000101bb84d8
- (void)requestFinished:(id)arg1;	// IMP=0x0000000101bb838c
- (_Bool)isOpenURLInterceptor;	// IMP=0x0000000101bb816c
- (void)updateURLInterceptorRule;	// IMP=0x0000000101bb7ef0
- (_Bool)isNeedUpdateURLInterceptorRule;	// IMP=0x0000000101bb7e54
- (id)getURLInterceptorRule;	// IMP=0x0000000101bb7dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

