//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BeforeFilter.h"

@class NSString;

@interface CacheBeforeFilter : NSObject <BeforeFilter>
{
}

- (id)tryCache:(id)arg1;	// IMP=0x0000000101d15844
- (void)handle:(id)arg1 result:(id)arg2;	// IMP=0x0000000101d15748
- (id)getName;	// IMP=0x0000000101d1571c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

