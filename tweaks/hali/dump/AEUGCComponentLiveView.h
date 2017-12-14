//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AELikeAnimationView, AEUGCLiveIconView, UIImageView, UILabel;

@interface AEUGCComponentLiveView : UIView
{
    AEUGCLiveIconView *_liveIconView;	// 8 = 0x8
    UIImageView *_backgroundImageView;	// 16 = 0x10
    AELikeAnimationView *_likeAnimationView;	// 24 = 0x18
    UIImageView *_couponIcon;	// 32 = 0x20
    UILabel *_couponLabel;	// 40 = 0x28
    id <AEUGCComponentLiveViewModel> _viewModel;	// 48 = 0x30
}

@property(nonatomic) __weak id <AEUGCComponentLiveViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100755190
- (void)stopAnimation;	// IMP=0x0000000100755144
- (void)startAnimation;	// IMP=0x0000000100755088
- (void)bindModel:(id)arg1;	// IMP=0x00000001007547c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100753684

@end

