//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, UIColor, UILabel, UIView;

@interface AEUGCHashTagListTableViewCell : UITableViewCell
{
    double _hashtagContainerHeight;	// 8 = 0x8
    _Bool _didSetupConstraints;	// 16 = 0x10
    UILabel *_hashtagTitleLabel;	// 24 = 0x18
    NSArray *_hashtagButtonArr;	// 32 = 0x20
    UIColor *_customBackgroundColor;	// 40 = 0x28
    NSMutableArray *_hashtagArr;	// 48 = 0x30
    UIView *_hashTagContainerView;	// 56 = 0x38
    UIView *_wrapperView;	// 64 = 0x40
    NSMutableArray *_hashtagMutableButtonArr;	// 72 = 0x48
    NSLayoutConstraint *_heightContraint;	// 80 = 0x50
    UIView *_topLineView;	// 88 = 0x58
    UIView *_bottomLineView;	// 96 = 0x60
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) NSLayoutConstraint *heightContraint; // @synthesize heightContraint=_heightContraint;
@property(retain, nonatomic) NSMutableArray *hashtagMutableButtonArr; // @synthesize hashtagMutableButtonArr=_hashtagMutableButtonArr;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) UIView *hashTagContainerView; // @synthesize hashTagContainerView=_hashTagContainerView;
@property(retain, nonatomic) NSMutableArray *hashtagArr; // @synthesize hashtagArr=_hashtagArr;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(copy, nonatomic) NSArray *hashtagButtonArr; // @synthesize hashtagButtonArr=_hashtagButtonArr;
@property(retain, nonatomic) UILabel *hashtagTitleLabel; // @synthesize hashtagTitleLabel=_hashtagTitleLabel;
- (void).cxx_destruct;	// IMP=0x00000001006dd1a8
- (id)backgroundColor;	// IMP=0x00000001006dcdc8
- (void)updateUI;	// IMP=0x00000001006dc6cc
- (void)clearHashtagList;	// IMP=0x00000001006dc540
- (void)addHashtagList:(id)arg1;	// IMP=0x00000001006dc468
- (void)updateConstraints;	// IMP=0x00000001006dbe2c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001006dbb94

@end

