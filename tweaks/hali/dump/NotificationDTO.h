//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface NotificationDTO : NSObject
{
    _Bool _isRead;	// 8 = 0x8
    int _nid;	// 12 = 0xc
    int _badge;	// 16 = 0x10
    int _msgType;	// 20 = 0x14
    NSString *_alert;	// 24 = 0x18
    NSString *_sound;	// 32 = 0x20
    NSString *_m;	// 40 = 0x28
    NSDictionary *_args;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    NSDate *_et;	// 64 = 0x40
    NSDate *_notiDate;	// 72 = 0x48
}

@property(retain, nonatomic) NSDate *notiDate; // @synthesize notiDate=_notiDate;
@property(retain, nonatomic) NSDate *et; // @synthesize et=_et;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *args; // @synthesize args=_args;
@property(nonatomic) int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *m; // @synthesize m=_m;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(nonatomic) int badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *alert; // @synthesize alert=_alert;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) int nid; // @synthesize nid=_nid;
- (void).cxx_destruct;	// IMP=0x0000000100a71398

@end

