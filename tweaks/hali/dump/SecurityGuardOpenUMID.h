//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardOpenUMID.h"

@class NSString;

@interface SecurityGuardOpenUMID : NSObject <ISecurityGuardOpenUMID>
{
}

- (Class)getMetaClass;	// IMP=0x000000010156d4d0
- (id)getUMIDVersion;	// IMP=0x000000010156d478
- (void)resetClientData:(int)arg1;	// IMP=0x000000010156d420
- (void)setOnlineHost:(id)arg1;	// IMP=0x000000010156d3c8
- (id)getSecurityToken:(int)arg1;	// IMP=0x000000010156d370
- (id)getSecurityToken;	// IMP=0x000000010156d308
- (_Bool)initUMID:(id)arg1 environment:(int)arg2 authCode:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010156d234
- (void)registerInitListener:(CDUnknownBlockType)arg1;	// IMP=0x000000010156d1d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

