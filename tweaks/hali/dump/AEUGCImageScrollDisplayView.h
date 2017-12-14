//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AEUGCImageDisplayViewSetting, DDPageControl, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UILabel, UIScrollView;

@interface AEUGCImageScrollDisplayView : UIView <UIScrollViewDelegate>
{
    NSMutableDictionary *_imageHolders;	// 8 = 0x8
    NSMutableArray *_urls;	// 16 = 0x10
    NSArray *_images;	// 24 = 0x18
    long long _startIndex;	// 32 = 0x20
    long long _currentIndex;	// 40 = 0x28
    NSMutableDictionary *_loadedURL;	// 48 = 0x30
    float _singleDisplayWidth;	// 56 = 0x38
    float _singleDisplayHeight;	// 60 = 0x3c
    float _imageGap;	// 64 = 0x40
    struct CGRect _originRect;	// 72 = 0x48
    UIImageView *closeIcon;	// 104 = 0x68
    CDUnknownBlockType _tapBlock;	// 112 = 0x70
    DDPageControl *_pageControl;	// 120 = 0x78
    UIScrollView *_scrollView;	// 128 = 0x80
    AEUGCImageDisplayViewSetting *_setting;	// 136 = 0x88
    UILabel *_numberPageLabel;	// 144 = 0x90
    UIView *_bottomTipView;	// 152 = 0x98
    UILabel *_bottomTipLabel;	// 160 = 0xa0
}

@property(retain, nonatomic) UILabel *bottomTipLabel; // @synthesize bottomTipLabel=_bottomTipLabel;
@property(retain, nonatomic) UIView *bottomTipView; // @synthesize bottomTipView=_bottomTipView;
@property(retain, nonatomic) UILabel *numberPageLabel; // @synthesize numberPageLabel=_numberPageLabel;
@property(retain) AEUGCImageDisplayViewSetting *setting; // @synthesize setting=_setting;
@property(retain) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain) DDPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property long long startIndex; // @synthesize startIndex=_startIndex;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;	// IMP=0x000000010077d3d8
- (void)dismisssCloseIcon;	// IMP=0x000000010077d244
- (void)heightAdded:(float)arg1 bottomtoTop:(_Bool)arg2;	// IMP=0x000000010077d158
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010077d0d0
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010077d068
- (void)setCurrentOffset:(struct CGPoint)arg1;	// IMP=0x000000010077cfa0
- (void)renderImageByIndex:(long long)arg1;	// IMP=0x000000010077cb10
- (void)loadImageByIndex:(long long)arg1;	// IMP=0x000000010077c980
- (id)getCurrentImageView;	// IMP=0x000000010077c8dc
- (void)dealloc;	// IMP=0x000000010077c87c
- (id)initWithFrame:(struct CGRect)arg1 imageurls:(id)arg2 startIndex:(long long)arg3 setting:(id)arg4;	// IMP=0x000000010077bd88
- (id)initWithFrame:(struct CGRect)arg1 imageurls:(id)arg2 startIndex:(long long)arg3;	// IMP=0x000000010077bcc0
- (id)initWithFrame:(struct CGRect)arg1 andImages:(id)arg2;	// IMP=0x000000010077bc8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

