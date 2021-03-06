//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEUGCLabel, NSString, UIImageView, UILabel;

@interface AEUGCPostCommentTableViewCell : UITableViewCell
{
    UIImageView *_avatarImageView;	// 8 = 0x8
    UIImageView *_countryFlagImageView;	// 16 = 0x10
    UILabel *_nameLabel;	// 24 = 0x18
    AEUGCLabel *_floorLabel;	// 32 = 0x20
    UILabel *_timeLabel;	// 40 = 0x28
    UILabel *_contentLabel;	// 48 = 0x30
    NSString *_currentUserId;	// 56 = 0x38
}

+ (float)estimateCellHeight:(id)arg1 isTranslateContent:(_Bool)arg2;	// IMP=0x0000000100df9524
@property(retain, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) AEUGCLabel *floorLabel; // @synthesize floorLabel=_floorLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UIImageView *countryFlagImageView; // @synthesize countryFlagImageView=_countryFlagImageView;
@property(readonly, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;	// IMP=0x0000000100df9880
- (void)bindData:(id)arg1 isShowFloor:(_Bool)arg2 isTranslateContent:(_Bool)arg3;	// IMP=0x0000000100df8cac
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100df83c4
- (void)private_layoutContentLabel;	// IMP=0x0000000100df7f7c
- (void)private_layoutFloorLable;	// IMP=0x0000000100df7d48
- (void)private_layoutCountryFlagImageView;	// IMP=0x0000000100df7900
- (void)private_layoutTimeLabel;	// IMP=0x0000000100df75a0
- (void)private_layoutNameLabel;	// IMP=0x0000000100df723c
- (void)private_layoutAvatarImageView;	// IMP=0x0000000100df6e10

@end

