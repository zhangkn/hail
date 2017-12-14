//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AEPopViewConfiguration : NSObject
{
    _Bool _showMaskLayer;	// 8 = 0x8
    _Bool _clickForHidden;	// 9 = 0x9
    _Bool _needAutoLayoutMainSize;	// 10 = 0xa
    NSString *_uri;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    NSString *_modalThreshold;	// 32 = 0x20
    NSString *_appear;	// 40 = 0x28
    NSString *_startTime;	// 48 = 0x30
    NSString *_endTime;	// 56 = 0x38
    NSString *_uuid;	// 64 = 0x40
    long long _times;	// 72 = 0x48
    long long _timeInterval;	// 80 = 0x50
    NSString *_mustAppearIn;	// 88 = 0x58
    NSString *_paramContains;	// 96 = 0x60
    NSString *_showCloseBtn;	// 104 = 0x68
    long long _timeoutWhenNext;	// 112 = 0x70
    long long _showViewMode;	// 120 = 0x78
    NSDictionary *_extra;	// 128 = 0x80
    NSString *_deviceType;	// 136 = 0x88
    struct CGPoint _customPoint;	// 144 = 0x90
}

@property(nonatomic) _Bool needAutoLayoutMainSize; // @synthesize needAutoLayoutMainSize=_needAutoLayoutMainSize;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) struct CGPoint customPoint; // @synthesize customPoint=_customPoint;
@property(nonatomic) _Bool clickForHidden; // @synthesize clickForHidden=_clickForHidden;
@property(nonatomic) long long showViewMode; // @synthesize showViewMode=_showViewMode;
@property(nonatomic) long long timeoutWhenNext; // @synthesize timeoutWhenNext=_timeoutWhenNext;
@property(retain, nonatomic) NSString *showCloseBtn; // @synthesize showCloseBtn=_showCloseBtn;
@property(retain, nonatomic) NSString *paramContains; // @synthesize paramContains=_paramContains;
@property(retain, nonatomic) NSString *mustAppearIn; // @synthesize mustAppearIn=_mustAppearIn;
@property(nonatomic) _Bool showMaskLayer; // @synthesize showMaskLayer=_showMaskLayer;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *appear; // @synthesize appear=_appear;
@property(retain, nonatomic) NSString *modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;	// IMP=0x00000001008414c8

@end

