//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardOpenStaticDataStore.h"

@class NSString;

@interface SecurityGuardOpenStaticDataStore : NSObject <ISecurityGuardOpenStaticDataStore>
{
}

- (Class)getMetaClass;	// IMP=0x000000010156f0f4
- (id)getExtraData:(id)arg1 authCode:(id)arg2;	// IMP=0x000000010156e7c8
- (id)getAppKey:(id)arg1 authCode:(id)arg2;	// IMP=0x000000010156de0c
- (long long)getKeyType:(id)arg1 authCode:(id)arg2;	// IMP=0x000000010156d550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
