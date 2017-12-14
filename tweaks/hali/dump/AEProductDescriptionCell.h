//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AEModelTableViewComponent.h"

@class AEProductDescriptionCellVM, NSString, UILabel, UIView;

@interface AEProductDescriptionCell : UITableViewCell <AEModelTableViewComponent>
{
    UILabel *_keyLabel;	// 8 = 0x8
    UILabel *_valueLabel;	// 16 = 0x10
    UIView *_bgView;	// 24 = 0x18
    AEProductDescriptionCellVM *_model;	// 32 = 0x20
}

@property(retain, nonatomic) AEProductDescriptionCellVM *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;	// IMP=0x00000001005966b4
- (void)cellTouched:(id)arg1;	// IMP=0x00000001005964cc
- (void)bindModel:(id)arg1;	// IMP=0x0000000100596328
- (void)prepareForReuse;	// IMP=0x0000000100596278
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100595624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

