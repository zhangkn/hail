//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface WVNumberRange : NSObject
{
    NSNumber *_start;	// 8 = 0x8
    NSNumber *_end;	// 16 = 0x10
}

+ (id)rangeWithStart:(id)arg1 withEnd:(id)arg2;	// IMP=0x0000000101b753e0
@property(readonly, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(readonly, nonatomic) NSNumber *start; // @synthesize start=_start;
- (void).cxx_destruct;	// IMP=0x0000000101b7560c
- (id)initWithStart:(id)arg1 withEnd:(id)arg2;	// IMP=0x0000000101b7546c

@end

