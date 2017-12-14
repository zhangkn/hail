//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class MPTableViewLoadingFooter, UIRefreshControl;

@interface MPTableView : UITableView
{
    _Bool _mp_hasNextPage;	// 8 = 0x8
    _Bool _mp_needLoadingFooter;	// 9 = 0x9
    id <MPTableViewDelegate> _mp_delegate;	// 16 = 0x10
    unsigned long long _mp_loadNextPageOffset;	// 24 = 0x18
    UIRefreshControl *_mpRefreshControl;	// 32 = 0x20
    MPTableViewLoadingFooter *_loadingFooter;	// 40 = 0x28
}

@property(retain, nonatomic) MPTableViewLoadingFooter *loadingFooter; // @synthesize loadingFooter=_loadingFooter;
@property(retain, nonatomic) UIRefreshControl *mpRefreshControl; // @synthesize mpRefreshControl=_mpRefreshControl;
@property(nonatomic) _Bool mp_needLoadingFooter; // @synthesize mp_needLoadingFooter=_mp_needLoadingFooter;
@property(nonatomic) unsigned long long mp_loadNextPageOffset; // @synthesize mp_loadNextPageOffset=_mp_loadNextPageOffset;
@property(nonatomic) _Bool mp_hasNextPage; // @synthesize mp_hasNextPage=_mp_hasNextPage;
@property(nonatomic) __weak id <MPTableViewDelegate> mp_delegate; // @synthesize mp_delegate=_mp_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100934abc
- (void)willDisplayIndex:(id)arg1;	// IMP=0x0000000100934810
- (void)dataLoadFinished;	// IMP=0x00000001009347d0
- (void)onLoadNextPage;	// IMP=0x0000000100934724
- (void)onRefresh;	// IMP=0x0000000100934678
- (void)setupLoadingFooter;	// IMP=0x00000001009344dc
- (void)setupMPRefreshControl;	// IMP=0x00000001009343d8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100934380
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000100934300

@end
