//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface AEUGCExplorerMoreCell : UICollectionViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UILabel *_explorerLabel;	// 16 = 0x10
}

@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UILabel *explorerLabel; // @synthesize explorerLabel=_explorerLabel;
- (void).cxx_destruct;	// IMP=0x0000000100646348
- (void)updateConstraints;	// IMP=0x00000001006461f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100645ecc

@end

