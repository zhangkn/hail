//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class SVPullToRefreshView;

@interface UIScrollView (SVPullToRefresh)
@property(nonatomic) _Bool showsPullToRefresh; // @dynamic showsPullToRefresh;
@property(readonly, nonatomic) SVPullToRefreshView *pullToRefreshView; // @dynamic pullToRefreshView;
- (void)setPullToRefreshView:(id)arg1;	// IMP=0x00000001015ef248
- (void)triggerPullToRefresh;	// IMP=0x00000001015ef1c8
- (void)addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001015ef098
@end
