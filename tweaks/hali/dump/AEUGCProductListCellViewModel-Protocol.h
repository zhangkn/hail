//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCComponentViewModel.h"

@class NSString, UIColor;

@protocol AEUGCProductListCellViewModel <AEUGCComponentViewModel>
@property(readonly, nonatomic) NSString *productId;
@property(readonly, nonatomic) _Bool isProductInvalid;
@property(readonly, nonatomic) NSString *price;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *imageUrl;

@optional
@property(readonly, nonatomic) _Bool isPurchased;
@property(nonatomic) _Bool selectable;
@property(nonatomic) _Bool selected;
@property(readonly, nonatomic) UIColor *bottomLineColor;
@property(readonly, nonatomic) long long editStyle;
@property(readonly, nonatomic) long long styleType;
@end

