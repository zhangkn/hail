//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AIFSPMManager : NSObject
{
    NSString *_SPM;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a3f2d4
+ (id)sharedInstance;	// IMP=0x0000000100a3f190
- (void).cxx_destruct;	// IMP=0x0000000100a3fa94
- (id)getValidTouchForAspectInfo:(id)arg1;	// IMP=0x0000000100a3f844
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100a3f5c8
- (void)generateSPMWithA:(id)arg1 andB:(id)arg2 andC:(id)arg3 andD:(id)arg4;	// IMP=0x0000000100a3f508
- (void)generateSPMWithVC:(id)arg1 andC:(id)arg2 andD:(id)arg3;	// IMP=0x0000000100a3f41c
- (id)consumeSPM;	// IMP=0x0000000100a3f330
- (id)init;	// IMP=0x0000000100a3f2fc
- (id)onceInit;	// IMP=0x0000000100a3f2f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a3f2f4

@end

