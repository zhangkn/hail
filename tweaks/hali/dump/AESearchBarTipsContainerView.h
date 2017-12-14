//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "AESearchBarTipViewDelegate.h"

@class AFOrderedDictionary, NSMutableArray, NSString;

@interface AESearchBarTipsContainerView : UIScrollView <AESearchBarTipViewDelegate>
{
    double _leftMargin;	// 8 = 0x8
    double _tipsMargin;	// 16 = 0x10
    double _containerViewWidth;	// 24 = 0x18
    double _viewHeight;	// 32 = 0x20
    double _maxWidth;	// 40 = 0x28
    NSMutableArray *_tipViews;	// 48 = 0x30
    id <AESearchBarTipsContainerViewDelegate> _barTipsContainerViewDelegate;	// 56 = 0x38
}

@property(nonatomic) __weak id <AESearchBarTipsContainerViewDelegate> barTipsContainerViewDelegate; // @synthesize barTipsContainerViewDelegate=_barTipsContainerViewDelegate;
@property(retain, nonatomic) NSMutableArray *tipViews; // @synthesize tipViews=_tipViews;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;	// IMP=0x0000000100c450ac
- (void)tipClickedCallback:(id)arg1;	// IMP=0x0000000100c44eec
- (void)removeAllTipViews;	// IMP=0x0000000100c44d2c
- (id)searchBartTipText;	// IMP=0x0000000100c44a94
- (void)removeTip:(id)arg1;	// IMP=0x0000000100c44600
- (void)addTip:(id)arg1;	// IMP=0x0000000100c44334
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100c43fbc
- (id)tipsKeywordFromTipView;	// IMP=0x0000000100cc1674
- (void)updateWithSearchProperties:(id)arg1;	// IMP=0x0000000100cc1034
@property(retain, nonatomic) AFOrderedDictionary *tags;
- (void)clearAllTags;	// IMP=0x0000000100cc0ed4
- (void)addSerachTip:(id)arg1 textField:(id)arg2;	// IMP=0x0000000100cc0b0c
- (void)recoveryTagsWithTextField:(id)arg1;	// IMP=0x0000000100cc083c
- (void)textFieldShouldBeginEiting:(id)arg1;	// IMP=0x0000000100cc0754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

