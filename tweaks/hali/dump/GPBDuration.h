//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@interface GPBDuration : GPBMessage
{
}

+ (id)descriptor;	// IMP=0x0000000101789ec0
@property(nonatomic) double timeIntervalSince1970;
- (id)initWithTimeIntervalSince1970:(double)arg1;	// IMP=0x000000010178cf58

// Remaining properties
@property(nonatomic) int nanos; // @dynamic nanos;
@property(nonatomic) long long seconds; // @dynamic seconds;

@end

