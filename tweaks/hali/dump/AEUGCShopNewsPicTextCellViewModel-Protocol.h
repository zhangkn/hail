//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCShopNewsBaseCellViewModel.h"

@class NSAttributedString, NSString, NSURL;

@protocol AEUGCShopNewsPicTextCellViewModel <AEUGCShopNewsBaseCellViewModel>

@optional
@property(readonly, nonatomic) struct UIEdgeInsets imageViewMargin;
@property(readonly, nonatomic) NSString *couponCurrencyText;
@property(readonly, nonatomic) NSString *couponText;
@property(readonly, copy, nonatomic) NSAttributedString *tagsAttributedText;
@property(readonly, copy, nonatomic) NSAttributedString *contentAttributedText;
@property(readonly, copy, nonatomic) NSString *contentText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, nonatomic) NSURL *backgroundImageUrl;
@end
