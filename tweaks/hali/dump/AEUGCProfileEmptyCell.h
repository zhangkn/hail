//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface AEUGCProfileEmptyCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UILabel *_emptyLabel;	// 16 = 0x10
    UIImageView *_emptyImageView;	// 24 = 0x18
}

@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
- (void).cxx_destruct;	// IMP=0x0000000100e8af7c
- (void)configConstraints;	// IMP=0x0000000100e8aacc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100e8a950

@end

