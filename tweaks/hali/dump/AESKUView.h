//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface AESKUView : UIView
{
    _Bool _extraBounds;	// 8 = 0x8
    int _columns;	// 12 = 0xc
    id <AESKUViewDelegate> delegate;	// 16 = 0x10
    NSMutableArray *_skuItems;	// 24 = 0x18
}

@property(nonatomic) int columns; // @synthesize columns=_columns;
@property(retain, nonatomic) NSMutableArray *skuItems; // @synthesize skuItems=_skuItems;
@property(nonatomic) _Bool extraBounds; // @synthesize extraBounds=_extraBounds;
@property(nonatomic) __weak id <AESKUViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;	// IMP=0x0000000100c27a2c
- (void)clickItem:(id)arg1;	// IMP=0x0000000100c27830
- (void)addExtraItems;	// IMP=0x0000000100c274ac
- (void)drawGrid;	// IMP=0x0000000100c274a8
- (void)resizeItem;	// IMP=0x0000000100c27100
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 columns:(int)arg3;	// IMP=0x0000000100c26ff4

@end

