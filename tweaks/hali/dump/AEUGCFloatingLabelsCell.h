//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEUGCFloatingLabelsView, UIView;

@interface AEUGCFloatingLabelsCell : UITableViewCell
{
    AEUGCFloatingLabelsView *_floatingLabelsView;	// 8 = 0x8
    UIView *_viewLineBottom;	// 16 = 0x10
}

@property(retain, nonatomic) UIView *viewLineBottom; // @synthesize viewLineBottom=_viewLineBottom;
@property(retain, nonatomic) AEUGCFloatingLabelsView *floatingLabelsView; // @synthesize floatingLabelsView=_floatingLabelsView;
- (void).cxx_destruct;	// IMP=0x000000010077182c
- (void)configLayoutConstraints;	// IMP=0x0000000100771550
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010077146c

@end

