//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AfterFilter.h"

@class NSString;

@interface XCommandAfterFilter : NSObject <AfterFilter>
{
}

- (void)handle:(id)arg1 response:(id)arg2 result:(id)arg3;	// IMP=0x0000000101d150e0
- (id)getName;	// IMP=0x0000000101d150b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

