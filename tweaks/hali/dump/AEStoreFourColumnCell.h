//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEStoreBaseCell.h"

@class AEStoreBaseItem;

@interface AEStoreFourColumnCell : AEStoreBaseCell
{
    AEStoreBaseItem *_item1;	// 8 = 0x8
    AEStoreBaseItem *_item2;	// 16 = 0x10
    AEStoreBaseItem *_item3;	// 24 = 0x18
    AEStoreBaseItem *_item4;	// 32 = 0x20
}

@property(retain, nonatomic) AEStoreBaseItem *item4; // @synthesize item4=_item4;
@property(retain, nonatomic) AEStoreBaseItem *item3; // @synthesize item3=_item3;
@property(retain, nonatomic) AEStoreBaseItem *item2; // @synthesize item2=_item2;
@property(retain, nonatomic) AEStoreBaseItem *item1; // @synthesize item1=_item1;
- (void).cxx_destruct;	// IMP=0x000000010085f6ac
- (void)setViewModel:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x000000010085f4e8
- (id)itemForIndex:(unsigned long long)arg1;	// IMP=0x000000010085f4c4
- (void)setShowBottomLine:(_Bool)arg1;	// IMP=0x000000010085f414
- (void)prepareForReuse;	// IMP=0x000000010085f380
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010085ed5c

@end

