//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface UTIGlobalVar : NSObject
{
    struct dispatch_queue_s *mMethodQueue;	// 8 = 0x8
    NSMutableDictionary *mGlobalReserves;	// 16 = 0x10
    _Bool mIsH5MethodCalled;	// 24 = 0x18
    _Bool mTurnOffCrashHandler;	// 25 = 0x19
    NSString *mCurrentPageName;	// 32 = 0x20
    NSString *mH5PrePageName;	// 40 = 0x28
    NSString *mH5Url;	// 48 = 0x30
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a88dfc
+ (id)getInstance;	// IMP=0x0000000101a88d24
@property _Bool mTurnOffCrashHandler; // @synthesize mTurnOffCrashHandler;
@property(retain) NSString *mH5Url; // @synthesize mH5Url;
@property _Bool mIsH5MethodCalled; // @synthesize mIsH5MethodCalled;
@property(retain) NSString *mH5PrePageName; // @synthesize mH5PrePageName;
@property(retain) NSString *mCurrentPageName; // @synthesize mCurrentPageName;
- (void).cxx_destruct;	// IMP=0x0000000101a8915c
- (void)clearGlobalReserves;	// IMP=0x0000000101a89018
- (id)getGlobalReserves;	// IMP=0x0000000101a88f94
- (void)addGlobalReserves:(id)arg1;	// IMP=0x0000000101a88ee4
- (struct dispatch_queue_s *)methodDispatchSerialQueue;	// IMP=0x0000000101a88ed4
- (id)init;	// IMP=0x0000000101a88e20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a88e1c

@end
