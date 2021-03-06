//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEUGCComponetThreeItemsViewDelegate.h"

@class AEUGCComponetThreeItemsView, NSString;

@interface AEUGCComponentPRContainerView : UIView <AEUGCComponetThreeItemsViewDelegate>
{
    id <AEUGCPhotoReviewImageContainerViewDelegate> _delegate;	// 8 = 0x8
    AEUGCComponetThreeItemsView *_topItemsView;	// 16 = 0x10
    AEUGCComponetThreeItemsView *_bottomItemsView;	// 24 = 0x18
    double _sideLength;	// 32 = 0x20
    long long _numberOfRows;	// 40 = 0x28
}

@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) double sideLength; // @synthesize sideLength=_sideLength;
@property(retain, nonatomic) AEUGCComponetThreeItemsView *bottomItemsView; // @synthesize bottomItemsView=_bottomItemsView;
@property(retain, nonatomic) AEUGCComponetThreeItemsView *topItemsView; // @synthesize topItemsView=_topItemsView;
@property(nonatomic) __weak id <AEUGCPhotoReviewImageContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010075a108
- (void)componet:(id)arg1 itemDidTouched:(id)arg2 AtIndex:(unsigned long long)arg3;	// IMP=0x0000000100759e94
- (void)setImageUrls:(id)arg1;	// IMP=0x0000000100759988
- (void)updateConstraints;	// IMP=0x000000010075965c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100758b6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

