//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class WVPullToRefreshView;

@interface UIScrollView (WVPullToRefresh)
@property(nonatomic) _Bool wvShowsPullToRefresh;
@property(readonly, nonatomic) WVPullToRefreshView *wvPullToRefreshView;
- (void)wvTriggerPullToRefresh;	// IMP=0x0000000101b36064
- (void)wvAddPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000101b35f98
@end
