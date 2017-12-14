//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CHTCollectionViewDelegateWaterfallLayout.h"
#import "UICollectionViewDataSource.h"

@class NSString, UICollectionView, UIImage, UILabel;

@interface AEUGCComponentImageCollectionView : UIView <CHTCollectionViewDelegateWaterfallLayout, UICollectionViewDataSource>
{
    UILabel *_descriptionLabel;	// 8 = 0x8
    UILabel *_tagsLabel;	// 16 = 0x10
    UIImage *_placeHolder;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    double _preferredMaxLayoutWidth;	// 40 = 0x28
    unsigned long long _maxDisplayCount;	// 48 = 0x30
    CDUnknownBlockType _imageTapHandler;	// 56 = 0x38
    id <AEUGCComponentImageCollectionViewModel> _viewModel;	// 64 = 0x40
}

@property(nonatomic) __weak id <AEUGCComponentImageCollectionViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType imageTapHandler; // @synthesize imageTapHandler=_imageTapHandler;
@property(nonatomic) unsigned long long maxDisplayCount; // @synthesize maxDisplayCount=_maxDisplayCount;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001007535ec
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100752708
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100752640
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;	// IMP=0x0000000100752638
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010075260c
- (void)bindModel:(id)arg1;	// IMP=0x00000001007521a0
- (void)setTagsAttributedText:(id)arg1;	// IMP=0x0000000100751df8
- (void)setImagesDescriptionText:(id)arg1;	// IMP=0x0000000100751a7c
- (void)setImagesDescriptionAttributedText:(id)arg1;	// IMP=0x0000000100751700
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100750990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
