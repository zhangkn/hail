//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface WebImageStatisticsItem : NSObject
{
    int _status;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    double _begintime;	// 24 = 0x18
    double _endtime;	// 32 = 0x20
    long long _size;	// 40 = 0x28
}

@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) double endtime; // @synthesize endtime=_endtime;
@property(nonatomic) double begintime; // @synthesize begintime=_begintime;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x0000000100b82860

@end

