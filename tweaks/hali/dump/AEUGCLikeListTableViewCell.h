//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface AEUGCLikeListTableViewCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    NSString *_avatar;	// 16 = 0x10
    NSString *_nickName;	// 24 = 0x18
    UILabel *_nicklbl;	// 32 = 0x20
    UIImageView *_avatarImageView;	// 40 = 0x28
}

@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *nicklbl; // @synthesize nicklbl=_nicklbl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;	// IMP=0x0000000100dd7628
- (void)layoutSubviews;	// IMP=0x0000000100dd7268
- (void)updateConstraints;	// IMP=0x0000000100dd7044
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100dd6f20

@end

