//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APIPControl.h"

@class APIPSelectorItem, NSMutableArray;

@interface APIPSelector : APIPControl
{
    NSMutableArray *_itemsArr;	// 8 = 0x8
    APIPSelectorItem *_currentItem;	// 16 = 0x10
}

@property(retain, nonatomic) APIPSelectorItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSMutableArray *itemsArr; // @synthesize itemsArr=_itemsArr;
- (void).cxx_destruct;	// IMP=0x00000001010d1d04
- (void)layoutSubviews;	// IMP=0x00000001010d1978
- (void)kvoAction:(id)arg1 keypath:(id)arg2;	// IMP=0x00000001010d188c
- (void)checkItemWithValue:(id)arg1;	// IMP=0x00000001010d16d0
- (id)initWithContrlFrame:(id)arg1;	// IMP=0x00000001010d1430

@end
