//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEProductSellerDashboardCellVM : NSObject
{
    long long _itemsCount;	// 8 = 0x8
    NSString *_itemsAction;	// 16 = 0x10
    long long _feedbackCount;	// 24 = 0x18
    NSString *_feedbackAction;	// 32 = 0x20
    long long _wishlistCount;	// 40 = 0x28
}

@property(nonatomic) long long wishlistCount; // @synthesize wishlistCount=_wishlistCount;
@property(retain, nonatomic) NSString *feedbackAction; // @synthesize feedbackAction=_feedbackAction;
@property(nonatomic) long long feedbackCount; // @synthesize feedbackCount=_feedbackCount;
@property(retain, nonatomic) NSString *itemsAction; // @synthesize itemsAction=_itemsAction;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
- (void).cxx_destruct;	// IMP=0x00000001005eeb74

@end
