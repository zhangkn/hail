//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEStoreBaseCell.h"

@class NSLayoutConstraint, NSMutableArray;

@interface AEStoreMultiImageCell : AEStoreBaseCell
{
    NSMutableArray *_imageViews;	// 8 = 0x8
    NSLayoutConstraint *_ratioConstraints;	// 16 = 0x10
    NSMutableArray *_horConstraintsForIVs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100865910
- (void)bindData:(id)arg1;	// IMP=0x0000000100865144
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010086460c

@end

