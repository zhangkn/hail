//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LogisticTrack : NSObject
{
    NSString *_addressForDisplay;	// 8 = 0x8
    NSString *_eventDate;	// 16 = 0x10
    NSString *_eventDateString;	// 24 = 0x18
    NSString *_eventDesc;	// 32 = 0x20
}

@property(retain) NSString *eventDesc; // @synthesize eventDesc=_eventDesc;
@property(retain) NSString *eventDateString; // @synthesize eventDateString=_eventDateString;
@property(retain) NSString *eventDate; // @synthesize eventDate=_eventDate;
@property(retain) NSString *addressForDisplay; // @synthesize addressForDisplay=_addressForDisplay;
- (void).cxx_destruct;	// IMP=0x00000001002b2188

@end
