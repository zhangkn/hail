//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EventTracker : NSObject
{
}

+ (void)realTimeTrack:(id)arg1 params:(id)arg2;	// IMP=0x000000010102ed80
+ (void)trackEventCustom:(id)arg1 params:(id)arg2;	// IMP=0x000000010102eb14
+ (void)trackEventClick:(id)arg1 params:(id)arg2;	// IMP=0x000000010102e9a8
+ (void)trackEventRegister:(id)arg1;	// IMP=0x000000010102e8f8
+ (void)trackEventLogOut;	// IMP=0x000000010102e878
+ (void)trackEventLogin:(id)arg1 userid:(id)arg2 params:(id)arg3;	// IMP=0x000000010102e6d8
+ (void)trackEventLogin:(id)arg1;	// IMP=0x000000010102e614
+ (id)getTypeStringWithType:(long long)arg1;	// IMP=0x000000010101f5c0
+ (void)exceptionEventModule:(id)arg1 page:(id)arg2 type:(long long)arg3 info:(id)arg4;	// IMP=0x000000010101f3e8

@end

