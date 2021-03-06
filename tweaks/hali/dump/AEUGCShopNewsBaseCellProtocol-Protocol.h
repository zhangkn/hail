//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol AEUGCShopNewsBaseCellProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType contentAction;
@property(copy, nonatomic) CDUnknownBlockType headerRightAction;
@property(copy, nonatomic) CDUnknownBlockType headerAction;
@property(copy, nonatomic) CDUnknownBlockType topMoreAction;
@property(nonatomic) double preferredMaxLayoutWidth;
- (void)reloadAllStatus;
- (void)reloadActionView;
- (void)reloadContentView;
- (void)reloadHeadView;
- (void)reloadTopView;
- (void)bindModel:(id <AEUGCShopNewsBaseCellViewModel>)arg1;

@optional
@property(copy, nonatomic) CDUnknownBlockType commentAction;
@property(copy, nonatomic) CDUnknownBlockType likeAction;
@property(copy, nonatomic) CDUnknownBlockType translateAction;
@end

