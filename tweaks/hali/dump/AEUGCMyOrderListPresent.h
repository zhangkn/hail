//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCMyOrderListService, NSMutableArray;

@interface AEUGCMyOrderListPresent : NSObject
{
    AEUGCMyOrderListService *_myOrderListService;	// 8 = 0x8
    long long _currentPage;	// 16 = 0x10
    NSMutableArray *_totalItems;	// 24 = 0x18
}

@property(copy, nonatomic) NSMutableArray *totalItems; // @synthesize totalItems=_totalItems;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) AEUGCMyOrderListService *myOrderListService; // @synthesize myOrderListService=_myOrderListService;
- (void).cxx_destruct;	// IMP=0x0000000100e32830
- (void)requestMorOrderList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e320ec
- (_Bool)isViewMode:(id)arg1 existInArray:(id)arg2;	// IMP=0x0000000100e31eec
- (void)requestMyOrderList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e31900

@end

