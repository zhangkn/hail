//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIPasteboard, UTDIDHelper, UTDIDPersistentConf;

@interface UTDIDMain : NSObject
{
    UIPasteboard *mUIPasteBoard;	// 8 = 0x8
    NSString *mFilePath;	// 16 = 0x10
    UTDIDHelper *mUtdidHelper;	// 24 = 0x18
    UTDIDPersistentConf *mDevicePersistentConfig;	// 32 = 0x20
}

+ (id)generateUtdid;	// IMP=0x0000000101aad488
+ (id)uniqueGlobalDeviceIdentifier;	// IMP=0x0000000101aad3c0
- (void).cxx_destruct;	// IMP=0x0000000101aad828
- (id)NSData2Str:(id)arg1;	// IMP=0x0000000101aad294
- (id)getUTDIDFromOldKeyChain;	// IMP=0x0000000101aad10c
- (id)getUTDIDFromOldUIPasteboard;	// IMP=0x0000000101aacf84
- (id)getUTDIDFromOldNSUserDefaults;	// IMP=0x0000000101aacdd0
- (void)testInit;	// IMP=0x0000000101aacc1c
- (id)value;	// IMP=0x0000000101aac5f0
- (void)removeUtdid;	// IMP=0x0000000101aac554
- (void)saveUtdid:(id)arg1;	// IMP=0x0000000101aac498
- (_Bool)isUtdidValid:(id)arg1;	// IMP=0x0000000101aac3c0
- (id)generateUtdidAndSave;	// IMP=0x0000000101aac288
- (void)preInit;	// IMP=0x0000000101aac10c

@end

