//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface AETaskListItemDTO : NSObject
{
    _Bool _result;	// 8 = 0x8
    _Bool _hasNextPage;	// 9 = 0x9
    NSArray *_taskList;	// 16 = 0x10
    NSString *_cursor;	// 24 = 0x18
    long long _pageSize;	// 32 = 0x20
    long long _currentPage;	// 40 = 0x28
    long long _totalCount;	// 48 = 0x30
    NSDictionary *_firstExecutingTask;	// 56 = 0x38
}

@property(retain, nonatomic) NSDictionary *firstExecutingTask; // @synthesize firstExecutingTask=_firstExecutingTask;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool result; // @synthesize result=_result;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *taskList; // @synthesize taskList=_taskList;
- (void).cxx_destruct;	// IMP=0x000000010027d56c

@end

