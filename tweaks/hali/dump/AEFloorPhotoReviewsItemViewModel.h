//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentPhotoReviewsItemViewModel;

@interface AEFloorPhotoReviewsItemViewModel : AEBaseTile
{
    AEComponentPhotoReviewsItemViewModel *_itemModel;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x0000000100369a44
@property(retain, nonatomic) AEComponentPhotoReviewsItemViewModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;	// IMP=0x0000000100369910
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001003698b0
- (id)infoButtonWithComponentDTO:(id)arg1 image:(id)arg2;	// IMP=0x000000010036a180
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100369a64

@end

