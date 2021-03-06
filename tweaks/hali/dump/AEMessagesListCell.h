//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CustomBadge, UIImageView, UILabel;

@interface AEMessagesListCell : UITableViewCell
{
    float _cellHeight;	// 8 = 0x8
    UIImageView *_avatarImgView;	// 16 = 0x10
    CustomBadge *_badge;	// 24 = 0x18
    UILabel *_sellerNameLB;	// 32 = 0x20
    UILabel *_lastMsgTimeLB;	// 40 = 0x28
    UILabel *_lastMsgLB;	// 48 = 0x30
    UILabel *_refInfoLB;	// 56 = 0x38
}

@property float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UILabel *refInfoLB; // @synthesize refInfoLB=_refInfoLB;
@property(retain, nonatomic) UILabel *lastMsgLB; // @synthesize lastMsgLB=_lastMsgLB;
@property(retain, nonatomic) UILabel *lastMsgTimeLB; // @synthesize lastMsgTimeLB=_lastMsgTimeLB;
@property(retain, nonatomic) UILabel *sellerNameLB; // @synthesize sellerNameLB=_sellerNameLB;
@property(retain, nonatomic) CustomBadge *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
- (void).cxx_destruct;	// IMP=0x0000000100aac3e4
- (void)bindData:(id)arg1 msgSource:(id)arg2;	// IMP=0x0000000100aab6d0
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100aab69c
- (void)layoutSubviews;	// IMP=0x0000000100aab520
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100aaaf44

@end

