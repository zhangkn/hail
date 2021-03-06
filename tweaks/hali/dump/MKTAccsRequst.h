//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MKTAccsRequst : NSObject
{
    float _timeout;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_routeId;	// 24 = 0x18
    NSString *_userId;	// 32 = 0x20
    NSString *_serviceId;	// 40 = 0x28
    NSString *_flag;	// 48 = 0x30
    NSString *_tag;	// 56 = 0x38
    NSString *_unitInfo;	// 64 = 0x40
    NSString *_host;	// 72 = 0x48
    CDUnknownBlockType _callback;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *unitInfo; // @synthesize unitInfo=_unitInfo;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *routeId; // @synthesize routeId=_routeId;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;	// IMP=0x0000000101347c78

@end

