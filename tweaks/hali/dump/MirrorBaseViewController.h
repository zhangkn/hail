//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MirrorLayoutSubViewsDelegate.h"

@class NSString;

@interface MirrorBaseViewController : UIViewController <MirrorLayoutSubViewsDelegate>
{
    NSString *_paramURLArgs;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *paramURLArgs; // @synthesize paramURLArgs=_paramURLArgs;
- (void).cxx_destruct;	// IMP=0x0000000101354148
- (void)dealloc;	// IMP=0x000000010135401c
- (void)layoutSubviews;	// IMP=0x0000000101354018
- (void)didReceiveMemoryWarning;	// IMP=0x0000000101353fe0
- (void)showToast:(id)arg1 display:(double)arg2;	// IMP=0x00000001013539d0
- (void)showToast:(id)arg1;	// IMP=0x00000001013539c0
- (void)loadView;	// IMP=0x0000000101353778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

