//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBListValue, GPBStruct, NSString;

@interface GPBValue : GPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000001017c0638

// Remaining properties
@property(nonatomic) _Bool boolValue; // @dynamic boolValue;
@property(readonly, nonatomic) int kindOneOfCase; // @dynamic kindOneOfCase;
@property(retain, nonatomic) GPBListValue *listValue; // @dynamic listValue;
@property(nonatomic) int nullValue; // @dynamic nullValue;
@property(nonatomic) double numberValue; // @dynamic numberValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(retain, nonatomic) GPBStruct *structValue; // @dynamic structValue;

@end

