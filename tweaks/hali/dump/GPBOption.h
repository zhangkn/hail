//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBAny, NSString;

@interface GPBOption : GPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000001017c0dfc

// Remaining properties
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBAny *value; // @dynamic value;

@end
