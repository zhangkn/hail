//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NWTLogBizProtocol.h"

@class NSString;

@interface NWLogAvatar : NSObject <NWTLogBizProtocol>
{
}

- (void)error:(id)arg1;	// IMP=0x00000001011a076c
- (void)info:(id)arg1;	// IMP=0x00000001011a0768
- (void)debug:(id)arg1;	// IMP=0x00000001011a0764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
