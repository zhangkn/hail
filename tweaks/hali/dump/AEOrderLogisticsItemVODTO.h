//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEOrderLogisticsItemVODTO : NSObject
{
    NSString *_logisticsTypeCode;	// 8 = 0x8
    NSString *_logisticsServiceName;	// 16 = 0x10
    NSString *_logisticsNum;	// 24 = 0x18
    NSArray *_logisticsTracks;	// 32 = 0x20
    NSString *_officialWebsite;	// 40 = 0x28
    NSString *_toAreaWebsite;	// 48 = 0x30
    NSString *_sentTime;	// 56 = 0x38
    NSString *_sentTimeString;	// 64 = 0x40
}

@property(copy, nonatomic) NSString *sentTimeString; // @synthesize sentTimeString=_sentTimeString;
@property(copy, nonatomic) NSString *sentTime; // @synthesize sentTime=_sentTime;
@property(copy, nonatomic) NSString *toAreaWebsite; // @synthesize toAreaWebsite=_toAreaWebsite;
@property(copy, nonatomic) NSString *officialWebsite; // @synthesize officialWebsite=_officialWebsite;
@property(retain, nonatomic) NSArray *logisticsTracks; // @synthesize logisticsTracks=_logisticsTracks;
@property(copy, nonatomic) NSString *logisticsNum; // @synthesize logisticsNum=_logisticsNum;
@property(copy, nonatomic) NSString *logisticsServiceName; // @synthesize logisticsServiceName=_logisticsServiceName;
@property(copy, nonatomic) NSString *logisticsTypeCode; // @synthesize logisticsTypeCode=_logisticsTypeCode;
- (void).cxx_destruct;	// IMP=0x00000001001f6394

@end
