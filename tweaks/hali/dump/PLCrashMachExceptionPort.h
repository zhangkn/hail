//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCrashMachExceptionPort : NSObject
{
    unsigned int _mask;	// 8 = 0x8
    unsigned int _port;	// 12 = 0xc
    int _behavior;	// 16 = 0x10
    int _flavor;	// 20 = 0x14
}

+ (id)exceptionPortsForThread:(unsigned int)arg1 mask:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000010123970c
+ (id)exceptionPortsForTask:(unsigned int)arg1 mask:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000101239644
@property(readonly, nonatomic) int flavor; // @synthesize flavor=_flavor;
@property(readonly, nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) unsigned int mask; // @synthesize mask=_mask;
@property(readonly, nonatomic) unsigned int server_port; // @synthesize server_port=_port;
- (_Bool)registerForThread:(unsigned int)arg1 previousPortSet:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000101239a40
- (_Bool)registerForTask:(unsigned int)arg1 previousPortSet:(id *)arg2 error:(id *)arg3;	// IMP=0x000000010123993c
- (void)dealloc;	// IMP=0x00000001012398b4
- (id)initWithServerPort:(unsigned int)arg1 mask:(unsigned int)arg2 behavior:(int)arg3 flavor:(int)arg4;	// IMP=0x00000001012397d4

@end

