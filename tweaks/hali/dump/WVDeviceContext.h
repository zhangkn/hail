//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVDeviceContext : NSObject
{
    id <WVBridgeCallbackContext> _context;	// 8 = 0x8
    id _callback;	// 16 = 0x10
    double _interval;	// 24 = 0x18
}

+ (id)contextWithContext:(id)arg1 withCallback:(id)arg2 withInterval:(double)arg3;	// IMP=0x0000000101b1bd08
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) id callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id <WVBridgeCallbackContext> context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x0000000101b1be2c

@end

