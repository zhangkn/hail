//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ARUPConfiguration : NSObject
{
    id <ARUPLogProtocol> _loger;	// 8 = 0x8
    id <ARUPStatisticsProtocol> _statistics;	// 16 = 0x10
}

@property(retain) id <ARUPStatisticsProtocol> statistics; // @synthesize statistics=_statistics;
@property(retain) id <ARUPLogProtocol> loger; // @synthesize loger=_loger;
- (void).cxx_destruct;	// IMP=0x0000000101191f10

@end
