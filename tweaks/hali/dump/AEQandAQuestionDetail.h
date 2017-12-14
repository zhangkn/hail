//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEQandAQuestion, NSArray, NSMutableArray;

@interface AEQandAQuestionDetail : NSObject
{
    _Bool _hasNext;	// 8 = 0x8
    _Bool _canFollow;	// 9 = 0x9
    _Bool _canAnswer;	// 10 = 0xa
    long long _currentPage;	// 16 = 0x10
    long long _totalCount;	// 24 = 0x18
    AEQandAQuestion *_questionDetail;	// 32 = 0x20
    NSArray *_answerList;	// 40 = 0x28
    NSMutableArray *_answerMutableArray;	// 48 = 0x30
}

+ (id)format:(id)arg1;	// IMP=0x0000000100240ef8
@property(retain, nonatomic) NSMutableArray *answerMutableArray; // @synthesize answerMutableArray=_answerMutableArray;
@property(copy, nonatomic) NSArray *answerList; // @synthesize answerList=_answerList;
@property(retain, nonatomic) AEQandAQuestion *questionDetail; // @synthesize questionDetail=_questionDetail;
@property(nonatomic) _Bool canAnswer; // @synthesize canAnswer=_canAnswer;
@property(nonatomic) _Bool canFollow; // @synthesize canFollow=_canFollow;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
- (void).cxx_destruct;	// IMP=0x0000000100241404
- (void)addAnswer:(id)arg1;	// IMP=0x0000000100240e88
- (id)init;	// IMP=0x0000000100240dc8

@end
