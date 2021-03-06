//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESearchListRefineAttributeContentView, AESearchListRefineAttributeDataController, AESearchListRefineAttributeFooterView, AESearchListRefineAttributeHeaderView, UIControl, UIView;

@interface AESearchListRefineAttributeController : NSObject
{
    UIView *_superViewOfAttributeValuesView;	// 8 = 0x8
    CDUnknownBlockType _selectAttributeValuesHandler;	// 16 = 0x10
    CDUnknownBlockType _deleteSelectedAttributeValuesHandler;	// 24 = 0x18
    AESearchListRefineAttributeDataController *_dataController;	// 32 = 0x20
    UIControl *_backgroundView;	// 40 = 0x28
    UIControl *_containerView;	// 48 = 0x30
    AESearchListRefineAttributeContentView *_contentView;	// 56 = 0x38
    AESearchListRefineAttributeFooterView *_footerView;	// 64 = 0x40
    AESearchListRefineAttributeHeaderView *_headerView;	// 72 = 0x48
}

@property(retain, nonatomic) AESearchListRefineAttributeHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) AESearchListRefineAttributeFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) AESearchListRefineAttributeContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIControl *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIControl *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) AESearchListRefineAttributeDataController *dataController; // @synthesize dataController=_dataController;
@property(copy, nonatomic) CDUnknownBlockType deleteSelectedAttributeValuesHandler; // @synthesize deleteSelectedAttributeValuesHandler=_deleteSelectedAttributeValuesHandler;
@property(copy, nonatomic) CDUnknownBlockType selectAttributeValuesHandler; // @synthesize selectAttributeValuesHandler=_selectAttributeValuesHandler;
@property(nonatomic) __weak UIView *superViewOfAttributeValuesView; // @synthesize superViewOfAttributeValuesView=_superViewOfAttributeValuesView;
- (void).cxx_destruct;	// IMP=0x0000000100c3d950
- (void)backgroundViewTapped;	// IMP=0x0000000100c3d778
- (double)containerViewHeight;	// IMP=0x0000000100c3d654
- (double)viewBottom;	// IMP=0x0000000100c3d638
- (struct CGRect)viewRect;	// IMP=0x0000000100c3d51c
@property(readonly, nonatomic) UIView *view;
- (void)updateView;	// IMP=0x0000000100c3be98
- (void)slideDownContainerView;	// IMP=0x0000000100c3b15c
- (void)slideUpContainerView;	// IMP=0x0000000100c3a664
- (void)slipeUpAttribuValuesView;	// IMP=0x0000000100c3a5d0
- (void)updateWithAttributes:(id)arg1;	// IMP=0x0000000100c3a4f4
- (id)initWithAttributes:(id)arg1 headerViewHeight:(double)arg2;	// IMP=0x0000000100c3a418

@end

