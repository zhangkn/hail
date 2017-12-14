//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IJKMediaUrlOpenData : NSObject
{
    NSString *_url;	// 8 = 0x8
    _Bool _handled;	// 16 = 0x10
    _Bool _urlChanged;	// 17 = 0x11
    int _segmentIndex;	// 20 = 0x14
    int _retryCounter;	// 24 = 0x18
    int _error;	// 28 = 0x1c
    long long _openType;	// 32 = 0x20
}

@property(nonatomic, getter=isUrlChanged) _Bool urlChanged; // @synthesize urlChanged=_urlChanged;
@property(nonatomic) int error; // @synthesize error=_error;
@property(readonly, nonatomic) int retryCounter; // @synthesize retryCounter=_retryCounter;
@property(readonly, nonatomic) int segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) long long openType; // @synthesize openType=_openType;
- (void).cxx_destruct;	// IMP=0x0000000101805df8
@property(retain, nonatomic) NSString *url;
@property(nonatomic, getter=isHandled) _Bool handled;
- (id)initWithUrl:(id)arg1 openType:(long long)arg2 segmentIndex:(int)arg3 retryCounter:(int)arg4;	// IMP=0x0000000101805b88

@end

