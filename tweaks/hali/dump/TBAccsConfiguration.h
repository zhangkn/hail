//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBAccsConfiguration : NSObject
{
    NSString *_appkey;	// 8 = 0x8
    NSString *_appKeyEncode;	// 16 = 0x10
    NSString *_sign;	// 24 = 0x18
    NSString *_deviceID;	// 32 = 0x20
    NSMutableDictionary *_requestBaseParameters;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableDictionary *requestBaseParameters; // @synthesize requestBaseParameters=_requestBaseParameters;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(retain, nonatomic) NSString *appKeyEncode; // @synthesize appKeyEncode=_appKeyEncode;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;	// IMP=0x0000000101606148
- (id)init;	// IMP=0x0000000101605b88

@end

