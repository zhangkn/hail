//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFSlideOutContentView.h"

@class NSArray, UIButton, UILabel, UITableView, UIView;

@interface AESlideOutSubView : AIFSlideOutContentView
{
    int _slideOutStyle;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIButton *_leftItemButton;	// 32 = 0x20
    UIButton *_rightItemButton;	// 40 = 0x28
    NSArray *_dataSource;	// 48 = 0x30
    double _componentsGap;	// 56 = 0x38
    double _componentLeft;	// 64 = 0x40
    double _componentTop;	// 72 = 0x48
    UIView *_headerView;	// 80 = 0x50
    UITableView *_tableView;	// 88 = 0x58
    NSArray *_uiContentArray;	// 96 = 0x60
    double _headerWidth;	// 104 = 0x68
}

@property(nonatomic) double headerWidth; // @synthesize headerWidth=_headerWidth;
@property(retain, nonatomic) NSArray *uiContentArray; // @synthesize uiContentArray=_uiContentArray;
@property(nonatomic) int slideOutStyle; // @synthesize slideOutStyle=_slideOutStyle;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) double componentTop; // @synthesize componentTop=_componentTop;
@property(nonatomic) double componentLeft; // @synthesize componentLeft=_componentLeft;
@property(nonatomic) double componentsGap; // @synthesize componentsGap=_componentsGap;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *rightItemButton; // @synthesize rightItemButton=_rightItemButton;
@property(retain, nonatomic) UIButton *leftItemButton; // @synthesize leftItemButton=_leftItemButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x000000010026ff50
- (void)updateUI;	// IMP=0x000000010026f46c
- (void)layoutSubviews;	// IMP=0x000000010026f41c
- (id)initWithContentUIArray:(id)arg1 style:(int)arg2;	// IMP=0x000000010026f314
- (void)setupUI;	// IMP=0x000000010026ea6c
- (id)init;	// IMP=0x000000010026ea38
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010026ea04

@end
