//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUGCActionToolsView, AEUGCItemsCountView, AEUGCMiniCardContentView, AEUGCMiniCardHeadView;

@interface AEUGCMiniCardView : UIView
{
    AEUGCMiniCardHeadView *_headView;	// 8 = 0x8
    AEUGCMiniCardContentView *_contentView;	// 16 = 0x10
    AEUGCActionToolsView *_actionToolsView;	// 24 = 0x18
    CDUnknownBlockType _actionLike;	// 32 = 0x20
    CDUnknownBlockType _actionComment;	// 40 = 0x28
    AEUGCItemsCountView *_itemsCountView;	// 48 = 0x30
}

@property(retain, nonatomic) AEUGCItemsCountView *itemsCountView; // @synthesize itemsCountView=_itemsCountView;
@property(copy, nonatomic) CDUnknownBlockType actionComment; // @synthesize actionComment=_actionComment;
@property(copy, nonatomic) CDUnknownBlockType actionLike; // @synthesize actionLike=_actionLike;
@property(retain, nonatomic) AEUGCActionToolsView *actionToolsView; // @synthesize actionToolsView=_actionToolsView;
@property(retain, nonatomic) AEUGCMiniCardContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AEUGCMiniCardHeadView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;	// IMP=0x00000001007924b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100790f64

@end
