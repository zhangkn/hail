//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol AEProductListSliderProductFloorDelegate <NSObject>

@optional
- (void)cellScrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)cellScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)cellScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)cellScrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)cellScrollViewDidScroll:(UIScrollView *)arg1 clas:(id)arg2;
@end

