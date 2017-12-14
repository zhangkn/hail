//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface AERelatedCategoriesCell : UITableViewCell
{
    NSString *_cateId;	// 8 = 0x8
    UILabel *_leftLabel;	// 16 = 0x10
    UIImageView *_leftImageview;	// 24 = 0x18
    UIImageView *_separatorImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *separatorImageView; // @synthesize separatorImageView=_separatorImageView;
@property(retain, nonatomic) UIImageView *leftImageview; // @synthesize leftImageview=_leftImageview;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
- (void).cxx_destruct;	// IMP=0x0000000100c7ff18
- (void)setCheckMarkWithSelectedContent:(id)arg1;	// IMP=0x0000000100c7fa60
- (void)setCheckMarkWithSelectedWithCateId:(id)arg1;	// IMP=0x0000000100c7f6b8
- (void)resizeLable;	// IMP=0x0000000100c7f208
- (void)bindingDataWithNode:(id)arg1 secondNode:(id)arg2 expandStatus:(id)arg3 categoryRefineType:(int)arg4 indexPath:(id)arg5 displayWidth:(double)arg6;	// IMP=0x0000000100c7d644
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100c7d610
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100c7d13c
- (void)awakeFromNib;	// IMP=0x0000000100c7d108

@end

