//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEOrderLogisticsTrackVODTO : NSObject
{
    NSString *_eventDate;	// 8 = 0x8
    NSString *_eventDesc;	// 16 = 0x10
    NSString *_addressForDisplay;	// 24 = 0x18
    NSString *_eventDateString;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *eventDateString; // @synthesize eventDateString=_eventDateString;
@property(copy, nonatomic) NSString *addressForDisplay; // @synthesize addressForDisplay=_addressForDisplay;
@property(copy, nonatomic) NSString *eventDesc; // @synthesize eventDesc=_eventDesc;
@property(copy, nonatomic) NSString *eventDate; // @synthesize eventDate=_eventDate;
- (void).cxx_destruct;	// IMP=0x00000001001f6220

@end
