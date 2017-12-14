//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TBPopLayerTrackingTask, UIView;

@interface TBPopLayerOperation : NSObject
{
    TBPopLayerTrackingTask *_task;	// 8 = 0x8
    unsigned long long _totalTrackerCount;	// 16 = 0x10
    NSMutableArray *_activeTrackerArray;	// 24 = 0x18
    NSMutableArray *_inactiveTrackerArray;	// 32 = 0x20
    UIView *_popLayerTrackedView;	// 40 = 0x28
}

@property(retain, nonatomic) UIView *popLayerTrackedView; // @synthesize popLayerTrackedView=_popLayerTrackedView;
@property(retain, nonatomic) NSMutableArray *inactiveTrackerArray; // @synthesize inactiveTrackerArray=_inactiveTrackerArray;
@property(retain, nonatomic) NSMutableArray *activeTrackerArray; // @synthesize activeTrackerArray=_activeTrackerArray;
@property(nonatomic) unsigned long long totalTrackerCount; // @synthesize totalTrackerCount=_totalTrackerCount;
@property(retain, nonatomic) TBPopLayerTrackingTask *task; // @synthesize task=_task;
- (void).cxx_destruct;	// IMP=0x00000001017691fc
- (void)operateTrackingView:(id)arg1;	// IMP=0x0000000101768f80
- (void)poplayerUntrack:(id)arg1;	// IMP=0x0000000101768f24
- (void)popLayer:(id)arg1 trackToView:(id)arg2;	// IMP=0x0000000101768e34
- (id)getInfoForView:(id)arg1;	// IMP=0x0000000101768c2c
- (void)removeActiveTrackingViewFromTrackedView:(id)arg1;	// IMP=0x0000000101768a44
- (void)createAndAddTrackingViewForTrackedView:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010176857c
- (void)untrack;	// IMP=0x0000000101768320
- (void)trackToTrackedViews:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000101767e98
- (unsigned long long)getActiveTrackerCount;	// IMP=0x0000000101767e4c
- (_Bool)checkIfReachedAndUpdateTotalTrackerCountWithCount:(unsigned long long)arg1;	// IMP=0x0000000101767ddc
- (_Bool)isOperationWithOperationName:(id)arg1 andGroupId:(id)arg2;	// IMP=0x0000000101767d48
- (_Bool)isOperationWithOperationName:(id)arg1 andSelector:(id)arg2;	// IMP=0x0000000101767cb4
- (_Bool)isOperationWithOperationName:(id)arg1;	// IMP=0x0000000101767c3c
- (_Bool)isOperationWithTaskHandle:(id)arg1;	// IMP=0x0000000101767bc4
- (id)taskHandle;	// IMP=0x0000000101767b70
- (id)initWithTask:(id)arg1;	// IMP=0x0000000101767a74

@end
