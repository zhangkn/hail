//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardAVMPSafeToken.h"

@class NSString;

@interface SecurityGuardAVMPSafeToken : NSObject <ISecurityGuardAVMPSafeToken>
{
}

- (Class)getMetaClass;	// IMP=0x0000000101497b48
- (int)getOTP:(id)arg1 flag:(int)arg2;	// IMP=0x0000000101497af4
- (id)signWithToken:(id)arg1 inputData:(id)arg2 flag:(int)arg3;	// IMP=0x00000001014979d4
- (id)decryptWithToken:(id)arg1 inputData:(id)arg2 flag:(int)arg3;	// IMP=0x00000001014978cc
- (id)encryptWithToken:(id)arg1 inputData:(id)arg2 flag:(int)arg3;	// IMP=0x00000001014977b8
- (void)removeToken:(id)arg1;	// IMP=0x00000001014976e0
- (_Bool)isTokenExist:(id)arg1;	// IMP=0x00000001014975e4
- (_Bool)saveToken:(id)arg1 forKey:(id)arg2 additional:(id)arg3 flag:(int)arg4;	// IMP=0x000000010149747c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

