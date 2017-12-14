//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface UTReportDataSet : NSObject
{
    int _cacheTotalTimes;	// 8 = 0x8
    int _cacheReadTotalDates;	// 12 = 0xc
    int _cacheReadTotalTimes;	// 16 = 0x10
    int _cacheWriteTotalDates;	// 20 = 0x14
    int _cacheWriteTotalTimes;	// 24 = 0x18
    int _cacheWriteTotalContentLength;	// 28 = 0x1c
    NSNumber *_spdyTotalTimes;	// 32 = 0x20
    NSNumber *_spdyTotaldates;	// 40 = 0x28
    NSNumber *_spdyTotalContentLength;	// 48 = 0x30
    NSNumber *_httpTotalTimes;	// 56 = 0x38
    NSNumber *_httpTotalDates;	// 64 = 0x40
    NSNumber *_httpTotalContentLength;	// 72 = 0x48
}

+ (id)shareInstance;	// IMP=0x0000000101d0aadc
@property(nonatomic) int cacheWriteTotalContentLength; // @synthesize cacheWriteTotalContentLength=_cacheWriteTotalContentLength;
@property(nonatomic) int cacheWriteTotalTimes; // @synthesize cacheWriteTotalTimes=_cacheWriteTotalTimes;
@property(nonatomic) int cacheWriteTotalDates; // @synthesize cacheWriteTotalDates=_cacheWriteTotalDates;
@property(nonatomic) int cacheReadTotalTimes; // @synthesize cacheReadTotalTimes=_cacheReadTotalTimes;
@property(nonatomic) int cacheReadTotalDates; // @synthesize cacheReadTotalDates=_cacheReadTotalDates;
@property(nonatomic) int cacheTotalTimes; // @synthesize cacheTotalTimes=_cacheTotalTimes;
@property(copy, nonatomic) NSNumber *httpTotalContentLength; // @synthesize httpTotalContentLength=_httpTotalContentLength;
@property(copy, nonatomic) NSNumber *httpTotalDates; // @synthesize httpTotalDates=_httpTotalDates;
@property(copy, nonatomic) NSNumber *httpTotalTimes; // @synthesize httpTotalTimes=_httpTotalTimes;
@property(copy, nonatomic) NSNumber *spdyTotalContentLength; // @synthesize spdyTotalContentLength=_spdyTotalContentLength;
@property(copy, nonatomic) NSNumber *spdyTotaldates; // @synthesize spdyTotaldates=_spdyTotaldates;
@property(copy, nonatomic) NSNumber *spdyTotalTimes; // @synthesize spdyTotalTimes=_spdyTotalTimes;
- (void).cxx_destruct;	// IMP=0x0000000101d0b64c
- (void)cleanAll;	// IMP=0x0000000101d0b3cc
- (int)getTotalContantLength;	// IMP=0x0000000101d0b340
- (double)getTotalDates;	// IMP=0x0000000101d0b2ac
- (int)getTotalTimes;	// IMP=0x0000000101d0b220
- (void)incrementCacheWrite:(id)arg1 withCacheSize:(long long)arg2;	// IMP=0x0000000101d0b100
- (void)incrementCacheHitTimes:(id)arg1;	// IMP=0x0000000101d0b020
- (void)incrementCacheTimes;	// IMP=0x0000000101d0afcc
- (void)incrementTcpLinks:(id)arg1;	// IMP=0x0000000101d0af6c
- (void)saveSPDYTotalData:(long long)arg1 withTotalDate:(id)arg2 withTotalContentLength:(id)arg3;	// IMP=0x0000000101d0ad74
- (void)saveHttpTotalData:(long long)arg1 withTotalDate:(id)arg2 withTotalContentLength:(id)arg3;	// IMP=0x0000000101d0ab7c
- (long long)getTcpLinkDates;	// IMP=0x0000000101d0ab70
- (long long)getTcpLinkTimes;	// IMP=0x0000000101d0ab64

@end

