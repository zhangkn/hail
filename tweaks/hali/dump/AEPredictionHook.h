//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AEPredictionHook : NSObject
{
    NSMutableArray *_aspectToken;	// 8 = 0x8
}

+ (void)removeHook;	// IMP=0x0000000100c8f2d4
+ (void)hookScrollViewWithInstance:(id)arg1;	// IMP=0x0000000100c8edc4
+ (void)hookGestureWithInstance:(id)arg1;	// IMP=0x0000000100c8ea9c
+ (void)aepd_handleGesture:(id)arg1;	// IMP=0x0000000100c8ea18
+ (id)sharedInstance;	// IMP=0x0000000100c8e998
@property(retain, nonatomic) NSMutableArray *aspectToken; // @synthesize aspectToken=_aspectToken;
- (void).cxx_destruct;	// IMP=0x0000000100c8f3b4
- (void)dealloc;	// IMP=0x0000000100c8f31c
- (void)addInstance:(id)arg1;	// IMP=0x0000000100c8f200
- (void)removeHook;	// IMP=0x0000000100c8f12c

@end

