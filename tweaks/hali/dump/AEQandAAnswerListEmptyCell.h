//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface AEQandAAnswerListEmptyCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UIImageView *_emptyIconImageView;	// 16 = 0x10
    UILabel *_emptyTextLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *emptyTextLabel; // @synthesize emptyTextLabel=_emptyTextLabel;
@property(retain, nonatomic) UIImageView *emptyIconImageView; // @synthesize emptyIconImageView=_emptyIconImageView;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
- (void).cxx_destruct;	// IMP=0x0000000100232374
- (void)updateConstraints;	// IMP=0x00000001002319e0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010023186c

@end

