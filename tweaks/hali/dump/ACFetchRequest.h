//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ACFetchRequest : NSObject
{
    _Bool _haveNextPage;	// 8 = 0x8
    NSDictionary *_param;	// 16 = 0x10
    long long _page;	// 24 = 0x18
    NSString *_streamId;	// 32 = 0x20
    long long _retryTimes;	// 40 = 0x28
}

@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) _Bool haveNextPage; // @synthesize haveNextPage=_haveNextPage;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;	// IMP=0x00000001009bb3cc
- (void)addParamFromDictionary:(id)arg1;	// IMP=0x00000001009bb1a4
- (void)refreshStreamId;	// IMP=0x00000001009bb150
- (id)initWithParam:(id)arg1;	// IMP=0x00000001009bb010

@end

