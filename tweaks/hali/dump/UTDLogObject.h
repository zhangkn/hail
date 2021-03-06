//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface UTDLogObject : NSObject
{
    NSString *_eventID;	// 8 = 0x8
    NSString *_priority;	// 16 = 0x10
    NSData *_content;	// 24 = 0x18
    long long _time;	// 32 = 0x20
    unsigned long long _rowID;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long rowID; // @synthesize rowID=_rowID;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;	// IMP=0x000000010120ebe8
- (id)description;	// IMP=0x000000010120ea10
- (void)setRowID2:(unsigned long long)arg1;	// IMP=0x000000010120ea00

@end

