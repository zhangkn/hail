//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEProductListSpellingCheckCellVM, UILabel;

@interface AEProductListSpellingCheckView : UIView
{
    id <AEProductListViewsProtocol> _delegate;	// 8 = 0x8
    UILabel *_contentLabel;	// 16 = 0x10
    AEProductListSpellingCheckCellVM *_checkCellVM;	// 24 = 0x18
}

@property(retain, nonatomic) AEProductListSpellingCheckCellVM *checkCellVM; // @synthesize checkCellVM=_checkCellVM;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak id <AEProductListViewsProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100bcae20
- (double)viewHeight;	// IMP=0x0000000100bcad50
- (void)bindVM:(id)arg1;	// IMP=0x0000000100bcac64
- (void)tapGesture:(id)arg1;	// IMP=0x0000000100bcab7c
- (id)init;	// IMP=0x0000000100bc9e8c

@end
