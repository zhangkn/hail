//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardDynamicDataStore.h"

@class NSString;

@interface SecurityGuardDynamicDataStore : NSObject <ISecurityGuardDynamicDataStore>
{
}

- (Class)getMetaClass;	// IMP=0x000000010155a624
- (void)removeDataDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x000000010155a554
- (_Bool)putDataDDpEx:(id)arg1 forKey:(id)arg2 flag:(int)arg3;	// IMP=0x000000010155a410
- (id)getDataDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x000000010155a324
- (void)removeStringDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x000000010155a23c
- (_Bool)putStringDDpEx:(id)arg1 forKey:(id)arg2 flag:(int)arg3;	// IMP=0x000000010155a0f8
- (id)getStringDDpEx:(id)arg1 flag:(int)arg2;	// IMP=0x000000010155a004
- (void)removeBoolForKey:(id)arg1;	// IMP=0x0000000101559f38
- (int)putBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000101559e24
- (_Bool)getBool:(id)arg1;	// IMP=0x0000000101559d20
- (void)removeDoubleForKey:(id)arg1;	// IMP=0x0000000101559c50
- (int)putDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000101559b40
- (double)getDouble:(id)arg1;	// IMP=0x0000000101559a50
- (void)removeFloatForKey:(id)arg1;	// IMP=0x000000010155997c
- (int)putFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x0000000101559884
- (float)getFloat:(id)arg1;	// IMP=0x0000000101559794
- (void)removeIntegerForKey:(id)arg1;	// IMP=0x00000001015596b8
- (int)putInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000001015595c0
- (long long)getInteger:(id)arg1;	// IMP=0x00000001015594cc
- (void)removeDataForKeyDDp:(id)arg1;	// IMP=0x00000001015593f0
- (int)putDataDDp:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001015592d4
- (id)getDataDDp:(id)arg1;	// IMP=0x00000001015591e0
- (void)removeDataForKey:(id)arg1;	// IMP=0x0000000101559108
- (int)putData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101558fdc
- (id)getData:(id)arg1;	// IMP=0x0000000101558ee0
- (void)removeStringForKeyDDp:(id)arg1;	// IMP=0x0000000101558e10
- (int)putStringDDp:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101558cec
- (id)getStringDDp:(id)arg1;	// IMP=0x0000000101558c00
- (void)removeStringForKey:(id)arg1;	// IMP=0x0000000101558b1c
- (int)putString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001015589f4
- (id)getString:(id)arg1;	// IMP=0x0000000101558910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

