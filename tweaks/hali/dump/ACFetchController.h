//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDataRemoveProtocol.h"
#import "ACDataTransferProtocol.h"

@class AEFloorService, NSDictionary, NSMutableDictionary, NSString;

@interface ACFetchController : NSObject <ACDataTransferProtocol, ACDataRemoveProtocol>
{
    _Bool _isFirstFetch;	// 8 = 0x8
    NSString *_streamId;	// 16 = 0x10
    NSString *_visitorId;	// 24 = 0x18
    long long _currentSegmentIndex;	// 32 = 0x20
    NSMutableDictionary *_requests;	// 40 = 0x28
    AEFloorService *_floorService;	// 48 = 0x30
    NSDictionary *_initialParam;	// 56 = 0x38
}

@property(retain, nonatomic) NSDictionary *initialParam; // @synthesize initialParam=_initialParam;
@property(retain, nonatomic) AEFloorService *floorService; // @synthesize floorService=_floorService;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
@property(nonatomic) long long currentSegmentIndex; // @synthesize currentSegmentIndex=_currentSegmentIndex;
@property(nonatomic) _Bool isFirstFetch; // @synthesize isFirstFetch=_isFirstFetch;
@property(retain, nonatomic) NSString *visitorId; // @synthesize visitorId=_visitorId;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
- (void).cxx_destruct;	// IMP=0x00000001009bcdf8
- (void)removeSegmentsExceptSegment:(long long)arg1;	// IMP=0x00000001009bcafc
- (void)removeSegmentAtIndex:(long long)arg1;	// IMP=0x00000001009bca84
- (void)transferDataFrom:(long long)arg1 toSegmentAtIndex:(long long)arg2;	// IMP=0x00000001009bc8e8
- (_Bool)needRetryInChannel:(id)arg1 withData:(id)arg2;	// IMP=0x00000001009bc790
- (void)didFinishFetchedData:(id)arg1 withChannelContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001009bc598
- (void)fetchDataWithParamPreProcessing:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 channelContext:(id)arg3;	// IMP=0x00000001009bbb28
- (_Bool)haveNextPageForSegmentAtIndex:(long long)arg1;	// IMP=0x00000001009bbadc
- (void)handleParam:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000001009bb878
- (_Bool)needBricksApiForChannel:(id)arg1;	// IMP=0x00000001009bb7b4
- (_Bool)needLegencyBricksApiForChannel:(id)arg1;	// IMP=0x00000001009bb6c8
- (id)requestForSegmentIndex:(long long)arg1;	// IMP=0x00000001009bb558
- (id)initWithParam:(id)arg1;	// IMP=0x00000001009bb40c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

