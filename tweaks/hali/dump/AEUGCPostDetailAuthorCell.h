//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEUGCPostDetailAuthor, AEUGCPostFollowService, UIButton, UIImageView, UILabel, UIView;

@interface AEUGCPostDetailAuthorCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UIImageView *_headerview;	// 16 = 0x10
    UIButton *_followbtn;	// 24 = 0x18
    UIImageView *_timeImageView;	// 32 = 0x20
    UILabel *_nicklbl;	// 40 = 0x28
    UILabel *_datelbl;	// 48 = 0x30
    UIView *_bottomLine;	// 56 = 0x38
    AEUGCPostDetailAuthor *_author;	// 64 = 0x40
    AEUGCPostFollowService *_followService;	// 72 = 0x48
    UIView *_containerView;	// 80 = 0x50
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AEUGCPostFollowService *followService; // @synthesize followService=_followService;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) AEUGCPostDetailAuthor *author; // @synthesize author=_author;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *datelbl; // @synthesize datelbl=_datelbl;
@property(retain, nonatomic) UILabel *nicklbl; // @synthesize nicklbl=_nicklbl;
@property(retain, nonatomic) UIImageView *timeImageView; // @synthesize timeImageView=_timeImageView;
@property(retain, nonatomic) UIButton *followbtn; // @synthesize followbtn=_followbtn;
@property(retain, nonatomic) UIImageView *headerview; // @synthesize headerview=_headerview;
- (void).cxx_destruct;	// IMP=0x00000001006e2f28
- (void)onFollowButtonTouched:(id)arg1;	// IMP=0x00000001006e28a0
- (void)updateConstraints;	// IMP=0x00000001006e2164
- (void)updateFollowButtonStatus;	// IMP=0x00000001006e1f10
- (void)bindData:(id)arg1;	// IMP=0x00000001006e1510
- (void)layoutSubviews;	// IMP=0x00000001006e1400
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001006e11a0

@end
