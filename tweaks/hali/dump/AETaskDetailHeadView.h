//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AETaskDetailDTO, UIImageView, UILabel;

@interface AETaskDetailHeadView : UIView
{
    struct CGRect bounds;	// 8 = 0x8
    UIImageView *icoView;	// 40 = 0x28
    UILabel *headTopTitle;	// 48 = 0x30
    UILabel *headMainTitle;	// 56 = 0x38
    UILabel *headContent;	// 64 = 0x40
    UILabel *headVaildDate;	// 72 = 0x48
    UILabel *headAbout;	// 80 = 0x50
    UIView *hLine;	// 88 = 0x58
    AETaskDetailDTO *dto;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010027cbe0
- (id)dateLocale:(id)arg1;	// IMP=0x000000010027ca44
- (void)doAction:(id)arg1;	// IMP=0x000000010027c554
- (id)getTopTitle:(id)arg1 ico:(id)arg2;	// IMP=0x000000010027c190
- (void)bindData:(id)arg1;	// IMP=0x000000010027b994
- (void)setupUI;	// IMP=0x0000000100279958
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100279900

@end

