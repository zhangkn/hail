//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEUGCComponentHeaderViewDelegate.h"
#import "AEUGCComponentProxy.h"

@class AEUGCActionToolsView, AEUGCComponentTopView, AEUGCComponetHeaderView, NSString;

@interface AEUGCCardView : UIView <AEUGCComponentHeaderViewDelegate, AEUGCComponentProxy>
{
    AEUGCComponentTopView *_topView;	// 8 = 0x8
    AEUGCComponetHeaderView *_headerView;	// 16 = 0x10
    AEUGCActionToolsView *_actionToolsView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    id <AEUGCCardViewModel> _viewModel;	// 40 = 0x28
}

@property(nonatomic) __weak id <AEUGCCardViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;	// IMP=0x0000000100734758
@property(readonly, nonatomic) AEUGCActionToolsView *actionToolsView; // @synthesize actionToolsView=_actionToolsView;
@property(readonly, nonatomic) AEUGCComponetHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) AEUGCComponentTopView *topView; // @synthesize topView=_topView;
- (void)bindModel:(id)arg1;	// IMP=0x00000001007342e0
- (id)initWithContentView:(id)arg1;	// IMP=0x0000000100733964

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
