//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBRestDeviceInfo : NSObject
{
    NSString *mOsName;	// 8 = 0x8
    NSString *mUtdid;	// 16 = 0x10
    NSString *mAppVersion;	// 24 = 0x18
    NSString *mImei;	// 32 = 0x20
    NSString *mImsi;	// 40 = 0x28
    NSString *mBrand;	// 48 = 0x30
    NSString *mCpu;	// 56 = 0x38
    NSString *mDeviceId;	// 64 = 0x40
    NSString *mDeviceModel;	// 72 = 0x48
    NSString *mResolution;	// 80 = 0x50
    NSString *mCarrier;	// 88 = 0x58
    NSString *mAccess;	// 96 = 0x60
    NSString *mAccessSubType;	// 104 = 0x68
    NSString *mCountry;	// 112 = 0x70
    NSString *mLanguage;	// 120 = 0x78
    NSString *mOsVersion;	// 128 = 0x80
}

@property(retain) NSString *mOsVersion; // @synthesize mOsVersion;
@property(retain) NSString *mLanguage; // @synthesize mLanguage;
@property(retain) NSString *mCountry; // @synthesize mCountry;
@property(retain) NSString *mAccessSubType; // @synthesize mAccessSubType;
@property(retain) NSString *mAccess; // @synthesize mAccess;
@property(retain) NSString *mCarrier; // @synthesize mCarrier;
@property(retain) NSString *mResolution; // @synthesize mResolution;
@property(retain) NSString *mDeviceModel; // @synthesize mDeviceModel;
@property(retain) NSString *mDeviceId; // @synthesize mDeviceId;
@property(retain) NSString *mCpu; // @synthesize mCpu;
@property(retain) NSString *mBrand; // @synthesize mBrand;
@property(retain) NSString *mImsi; // @synthesize mImsi;
@property(retain) NSString *mImei; // @synthesize mImei;
@property(retain) NSString *mAppVersion; // @synthesize mAppVersion;
@property(retain) NSString *mUtdid; // @synthesize mUtdid;
@property(retain) NSString *mOsName; // @synthesize mOsName;
- (void).cxx_destruct;	// IMP=0x00000001017c1e08

@end

