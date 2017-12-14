//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TFERSA : NSObject
{
}

+ (id)decryptData:(id)arg1 publicKey:(id)arg2;	// IMP=0x0000000101084bc0
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;	// IMP=0x0000000101084ad8
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;	// IMP=0x0000000101084a44
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;	// IMP=0x000000010108495c
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;	// IMP=0x00000001010848c8
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;	// IMP=0x00000001010847e0
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;	// IMP=0x0000000101084660
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;	// IMP=0x00000001010845cc
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;	// IMP=0x00000001010844ac
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;	// IMP=0x0000000101084360
+ (struct __SecKey *)addPrivateKey:(id)arg1;	// IMP=0x0000000101083f04
+ (struct __SecKey *)addRawPublicKey:(id)arg1;	// IMP=0x0000000101083ba8
+ (struct __SecKey *)addPublicKey:(id)arg1;	// IMP=0x00000001010836e4
+ (id)stripPrivateKeyHeader:(id)arg1;	// IMP=0x00000001010835f8
+ (id)stripPublicKeyHeader:(id)arg1;	// IMP=0x00000001010834ec

@end

