//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AEModuleTreeRankViewModel : NSObject
{
    _Bool _hasNext;	// 8 = 0x8
    NSMutableArray *_arrayList;	// 16 = 0x10
    long long _nCurrentPage;	// 24 = 0x18
}

@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) long long nCurrentPage; // @synthesize nCurrentPage=_nCurrentPage;
@property(retain, nonatomic) NSMutableArray *arrayList; // @synthesize arrayList=_arrayList;
- (void).cxx_destruct;	// IMP=0x0000000100b1b94c
- (void)requestRankList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b1b47c
- (id)init;	// IMP=0x0000000100b1b3f4

@end

