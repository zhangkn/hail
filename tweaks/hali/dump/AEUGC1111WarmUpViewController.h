//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActivityChannelViewController.h"

@class UIImage;

@interface AEUGC1111WarmUpViewController : ActivityChannelViewController
{
    _Bool _navigationBarCanUpdateAppearance;	// 8 = 0x8
    double _navigationBarAlpha;	// 16 = 0x10
    UIImage *_navigationBarBackgroundImage;	// 24 = 0x18
}

@property(nonatomic) _Bool navigationBarCanUpdateAppearance; // @synthesize navigationBarCanUpdateAppearance=_navigationBarCanUpdateAppearance;
@property(retain, nonatomic) UIImage *navigationBarBackgroundImage; // @synthesize navigationBarBackgroundImage=_navigationBarBackgroundImage;
@property(nonatomic) double navigationBarAlpha; // @synthesize navigationBarAlpha=_navigationBarAlpha;
- (void).cxx_destruct;	// IMP=0x0000000100da53dc
- (id)pageTrackName;	// IMP=0x0000000100da5328
- (_Bool)needPullToRefreshForSegmentIndex:(long long)arg1;	// IMP=0x0000000100da5320
- (_Bool)needLocalCache;	// IMP=0x0000000100da5318
- (void)collectionViewDidScrollToOffset:(struct CGPoint)arg1;	// IMP=0x0000000100da4ec8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100da4b48
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100da4670
- (void)viewDidLoad;	// IMP=0x0000000100da44b8

@end

