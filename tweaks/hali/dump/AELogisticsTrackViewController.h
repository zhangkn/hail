//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class AELogisticsTrackDetailView, LogisticPackage, UIScrollView;

@interface AELogisticsTrackViewController : AEUIViewController
{
    LogisticPackage *_package;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    AELogisticsTrackDetailView *_detailView;	// 24 = 0x18
}

@property(retain, nonatomic) AELogisticsTrackDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) LogisticPackage *package; // @synthesize package=_package;
- (void).cxx_destruct;	// IMP=0x000000010013aefc
- (void)didReceiveMemoryWarning;	// IMP=0x000000010013ae10
- (void)close;	// IMP=0x000000010013adf8
- (void)setupLeftButton;	// IMP=0x000000010013ac94
- (void)viewDidLoad;	// IMP=0x000000010013a564

@end

