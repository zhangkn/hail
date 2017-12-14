//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCLiveLikeView, AEUGCVideoLiveRoomViewModel;

@interface AEUGCLiveLikeViewManager : NSObject
{
    _Bool _isOriginLikeCount;	// 8 = 0x8
    AEUGCLiveLikeView *_liveLikeView;	// 16 = 0x10
    AEUGCVideoLiveRoomViewModel *_liveRoomViewModel;	// 24 = 0x18
    long long _totalLikeCount;	// 32 = 0x20
}

+ (id)sharedLikeManager;	// IMP=0x0000000100f65e18
@property(nonatomic) long long totalLikeCount; // @synthesize totalLikeCount=_totalLikeCount;
@property(nonatomic) _Bool isOriginLikeCount; // @synthesize isOriginLikeCount=_isOriginLikeCount;
@property(retain, nonatomic) AEUGCVideoLiveRoomViewModel *liveRoomViewModel; // @synthesize liveRoomViewModel=_liveRoomViewModel;
@property(retain, nonatomic) AEUGCLiveLikeView *liveLikeView; // @synthesize liveLikeView=_liveLikeView;
- (void).cxx_destruct;	// IMP=0x0000000100f66464
- (void)dealloc;	// IMP=0x0000000100f66324
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100f66168
- (void)bindBtnClickedEvent;	// IMP=0x0000000100f65fbc
- (void)privateConfigManager;	// IMP=0x0000000100f65f34
- (void)destroySharedManager;	// IMP=0x0000000100f65f1c

@end

