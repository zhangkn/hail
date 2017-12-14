//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCProfileTableViewCell.h"

@class AEUGCFloatingLabelsContentView, NSMutableArray, UILabel, UIView;

@interface AEUGCCollectionTagTableViewCell : AEUGCProfileTableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    AEUGCFloatingLabelsContentView *_containerView;	// 16 = 0x10
    UILabel *_timeLabel;	// 24 = 0x18
    UIView *_bottomLine;	// 32 = 0x20
    UIView *_bottomView;	// 40 = 0x28
    UIView *_splitLine;	// 48 = 0x30
    NSMutableArray *_tempArr;	// 56 = 0x38
}

@property(retain, nonatomic) NSMutableArray *tempArr; // @synthesize tempArr=_tempArr;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) AEUGCFloatingLabelsContentView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;	// IMP=0x0000000100e85fd8
- (void)bindModel:(id)arg1;	// IMP=0x0000000100e849c8
- (void)configConstraints;	// IMP=0x0000000100e83ad4
- (void)updateConstraints;	// IMP=0x0000000100e83aa0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100e83534

@end

