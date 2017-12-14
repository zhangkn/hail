//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface PMProtocolItem : NSObject
{
    unsigned char _msgType;	// 8 = 0x8
    unsigned char _DUP;	// 9 = 0x9
    unsigned char _Qos;	// 10 = 0xa
    unsigned char _retainx;	// 11 = 0xb
    unsigned char _version;	// 12 = 0xc
    unsigned char _serializeType;	// 13 = 0xd
    unsigned char _type;	// 14 = 0xe
    unsigned char _typeVersion;	// 15 = 0xf
    unsigned char _sysCode;	// 16 = 0x10
    unsigned short _bizCode;	// 18 = 0x12
    NSData *_head;	// 24 = 0x18
    NSData *_body;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    NSString *_dataId;	// 48 = 0x30
    NSString *_dataTag;	// 56 = 0x38
    double _netTime;	// 64 = 0x40
    double _pacTime;	// 72 = 0x48
}

@property(nonatomic) double pacTime; // @synthesize pacTime=_pacTime;
@property(nonatomic) double netTime; // @synthesize netTime=_netTime;
@property(retain, nonatomic) NSString *dataTag; // @synthesize dataTag=_dataTag;
@property(retain, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSData *head; // @synthesize head=_head;
@property(nonatomic) unsigned char sysCode; // @synthesize sysCode=_sysCode;
@property(nonatomic) unsigned short bizCode; // @synthesize bizCode=_bizCode;
@property(nonatomic) unsigned char typeVersion; // @synthesize typeVersion=_typeVersion;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(nonatomic) unsigned char serializeType; // @synthesize serializeType=_serializeType;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(nonatomic) unsigned char retainx; // @synthesize retainx=_retainx;
@property(nonatomic) unsigned char Qos; // @synthesize Qos=_Qos;
@property(nonatomic) unsigned char DUP; // @synthesize DUP=_DUP;
@property(nonatomic) unsigned char msgType; // @synthesize msgType=_msgType;
- (void).cxx_destruct;	// IMP=0x0000000101405e70

@end
