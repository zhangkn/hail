//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEUGCComponentProxy.h"

@class NSString;

@interface AEUGCComponentTopView : UIView <AEUGCComponentProxy>
{
    UIView *_bottomLine;	// 8 = 0x8
    id <AEUGCComponentTopViewViewModel> _viewModel;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
}

@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;	// IMP=0x0000000100761dc4
- (void)bindModel:(id)arg1;	// IMP=0x00000001007614f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100761210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

