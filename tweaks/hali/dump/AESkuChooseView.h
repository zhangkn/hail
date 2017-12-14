//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface AESkuChooseView : UIView
{
    id <AESkuChooseViewDelegate> delegate;	// 8 = 0x8
    NSMutableArray *_skuGroupViews;	// 16 = 0x10
    NSMutableDictionary *_imageUrlDic;	// 24 = 0x18
    NSMutableDictionary *_summaryImageUrlDic;	// 32 = 0x20
    NSMutableDictionary *_propertyTipsDic;	// 40 = 0x28
    long long _selectedColorIndex;	// 48 = 0x30
    NSArray *_availableSkuStrings;	// 56 = 0x38
    NSArray *_skuPropertyList;	// 64 = 0x40
    NSMutableDictionary *_skuSelectMap;	// 72 = 0x48
}

@property(retain, nonatomic) NSMutableDictionary *skuSelectMap; // @synthesize skuSelectMap=_skuSelectMap;
@property(retain, nonatomic) NSArray *skuPropertyList; // @synthesize skuPropertyList=_skuPropertyList;
@property(retain, nonatomic) NSArray *availableSkuStrings; // @synthesize availableSkuStrings=_availableSkuStrings;
@property(nonatomic) long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(retain, nonatomic) NSMutableDictionary *propertyTipsDic; // @synthesize propertyTipsDic=_propertyTipsDic;
@property(retain, nonatomic) NSMutableDictionary *summaryImageUrlDic; // @synthesize summaryImageUrlDic=_summaryImageUrlDic;
@property(retain, nonatomic) NSMutableDictionary *imageUrlDic; // @synthesize imageUrlDic=_imageUrlDic;
@property(retain, nonatomic) NSMutableArray *skuGroupViews; // @synthesize skuGroupViews=_skuGroupViews;
@property(nonatomic) __weak id <AESkuChooseViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;	// IMP=0x0000000100607690
- (void)selectColorSku:(long long)arg1;	// IMP=0x0000000100607298
- (void)selectCountrySku:(id)arg1;	// IMP=0x00000001006070f8
- (void)itemClickedInGroup:(long long)arg1 andItem:(long long)arg2;	// IMP=0x0000000100606d48
- (_Bool)checkAvailableSKUAtGroupIndex:(long long)arg1 itemIndex:(long long)arg2;	// IMP=0x00000001006069dc
- (void)checkAndSetImageURL:(id)arg1;	// IMP=0x0000000100606420
- (void)bindSkuPropertyList:(id)arg1 SkuSelectMap:(id)arg2;	// IMP=0x0000000100605ae4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100605988

@end

