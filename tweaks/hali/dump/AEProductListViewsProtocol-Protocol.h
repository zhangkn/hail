//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol AEProductListViewsProtocol <NSObject>

@optional
@property(retain, nonatomic) NSString *param;
@property(retain, nonatomic) NSString *action;
@property(nonatomic) __weak Class clz;
- (void)refreshCurrent:(id)arg1;
- (void)gotoUrl:(NSString *)arg1 param:(NSDictionary *)arg2;
@end
