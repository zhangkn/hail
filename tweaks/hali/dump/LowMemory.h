//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LowMemory : NSObject
{
    _Bool _isActive;	// 8 = 0x8
}

+ (id)shareInstance;	// IMP=0x00000001016469f0
- (void)didReceiveMemoryWarning;	// IMP=0x0000000101646bd4
- (void)becomeBackground;	// IMP=0x0000000101646bc4
- (void)becomeActive;	// IMP=0x0000000101646bb0
- (void)registLowMemoryObservers;	// IMP=0x0000000101646aec
- (id)init;	// IMP=0x0000000101646aa4

@end

