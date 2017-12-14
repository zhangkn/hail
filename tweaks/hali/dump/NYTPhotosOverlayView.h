//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDictionary, NSString, UIBarButtonItem, UINavigationBar, UINavigationItem;

@interface NYTPhotosOverlayView : UIView
{
    UINavigationBar *_navigationBar;	// 8 = 0x8
    UIView *_captionView;	// 16 = 0x10
    UINavigationItem *_navigationItem;	// 24 = 0x18
}

@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(retain, nonatomic) UIView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;	// IMP=0x0000000100704738
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *rightBarButtonItems;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property(copy, nonatomic) NSArray *leftBarButtonItems;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
- (void)setupNavigationBar;	// IMP=0x0000000100703a5c
- (void)layoutSubviews;	// IMP=0x00000001007038a0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010070382c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007037d4

@end
