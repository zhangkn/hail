//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface APCrashTrackControl : NSObject
{
    NSArray *_crashArr;	// 8 = 0x8
}

+ (void)stopTrack;	// IMP=0x00000001010df938
+ (void)beginTrack;	// IMP=0x00000001010df54c
@property(copy, nonatomic) NSArray *crashArr; // @synthesize crashArr=_crashArr;
- (void).cxx_destruct;	// IMP=0x00000001010df9ec

@end

