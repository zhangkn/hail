//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardStaticDataStore.h"

@class NSString;

@interface SecurityGuardStaticDataStore : NSObject <ISecurityGuardStaticDataStore>
{
}

- (Class)getMetaClass;	// IMP=0x00000001014dd8a4
- (id)getExtraData:(id)arg1;	// IMP=0x00000001014dd798
- (id)getAppKey:(id)arg1;	// IMP=0x00000001014dd69c
- (long long)getKeyType:(id)arg1;	// IMP=0x00000001014dd58c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

