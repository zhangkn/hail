//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageViewController.h"

@interface AENYTPageViewController : UIPageViewController
{
    id <AENYTPageViewControllerExceptionDelegate> _AENYTExceptionDelegate;	// 8 = 0x8
}

+ (void)AENYTSwizzleSEL:(SEL)arg1 withSEL:(SEL)arg2;	// IMP=0x000000010070170c
+ (void)initialize;	// IMP=0x00000001007015c0
@property(nonatomic) __weak id <AENYTPageViewControllerExceptionDelegate> AENYTExceptionDelegate; // @synthesize AENYTExceptionDelegate=_AENYTExceptionDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100701804
- (void)AENYTPageViewConrollerExceptionOccurred:(id)arg1;	// IMP=0x0000000100701424
- (void)AENYT_hideNameForScrollView:(id)arg1 hideNameForRevealedView:(id)arg2;	// IMP=0x0000000100701350

@end
