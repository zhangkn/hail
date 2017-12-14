//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UIScrollViewDelegate.h"

@class AEImageScrollView, NSString, UIButton, UIImage;

@interface AEPhotoViewController : AEUIViewController <UIScrollViewDelegate>
{
    AEImageScrollView *_contentScrollView;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIButton *_selectBtn;	// 24 = 0x18
    _Bool _showSelectedIV;	// 32 = 0x20
    _Bool _isSelected;	// 33 = 0x21
    long long pageIndex;	// 40 = 0x28
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool showSelectedIV; // @synthesize showSelectedIV=_showSelectedIV;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex;
- (void).cxx_destruct;	// IMP=0x000000010083cb58
- (void)didReceiveMemoryWarning;	// IMP=0x000000010083caf4
@property(readonly, nonatomic) UIButton *selectBtn;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010083c924
- (void)viewDidLoad;	// IMP=0x000000010083c5e4
- (id)initWithImage:(id)arg1;	// IMP=0x000000010083c538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

