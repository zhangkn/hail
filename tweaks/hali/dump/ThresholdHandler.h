//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ErrorHandler.h"

@class NSMutableDictionary, NSString;

@interface ThresholdHandler : NSObject <ErrorHandler>
{
    NSMutableDictionary *_metadata;	// 8 = 0x8
}

+ (id)getInstance;	// IMP=0x0000000101d1d658
- (void).cxx_destruct;	// IMP=0x0000000101d1e724
- (void)reportUT:(id)arg1;	// IMP=0x0000000101d1e520
- (void)recordThresholdMetadata:(id)arg1;	// IMP=0x0000000101d1e350
- (void)cacheThresholdResponse:(id)arg1;	// IMP=0x0000000101d1defc
- (_Bool)isThresholdedWithApiName:(id)arg1 apiVersion:(id)arg2 isOrderLimitRequest:(_Bool)arg3;	// IMP=0x0000000101d1dcf0
- (unsigned short)handle:(id)arg1;	// IMP=0x0000000101d1d850
- (void)dealloc;	// IMP=0x0000000101d1d7f4
- (id)init;	// IMP=0x0000000101d1d774

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
