//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface AEUGCProductListPresenter : NSObject
{
    NSMutableArray *_totalArray;	// 8 = 0x8
    long long _currentPage;	// 16 = 0x10
    NSString *_qword;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *qword; // @synthesize qword=_qword;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *totalArray; // @synthesize totalArray=_totalArray;
- (void).cxx_destruct;	// IMP=0x0000000100e506ac
- (_Bool)isViewMode:(id)arg1 existInArray:(id)arg2;	// IMP=0x0000000100e503d4
- (void)queryMoreProducts:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e4ff3c
- (void)searchProducts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e4fae4
- (id)init;	// IMP=0x0000000100e4fa88

@end

