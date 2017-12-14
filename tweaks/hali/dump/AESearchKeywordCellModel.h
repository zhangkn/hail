//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AESearchKeywordCellProtocol.h"

@class AESearchSuggestionDTO, AETraceDTO, NSString;

@interface AESearchKeywordCellModel : NSObject <AESearchKeywordCellProtocol>
{
    _Bool _isHightlightUserInput;	// 8 = 0x8
    _Bool _isFromHistory;	// 9 = 0x9
    long long cellType;	// 16 = 0x10
    AESearchSuggestionDTO *suggestionDTO;	// 24 = 0x18
    NSString *action;	// 32 = 0x20
    long long _count;	// 40 = 0x28
    NSString *_cateName;	// 48 = 0x30
    NSString *_icon;	// 56 = 0x38
    NSString *_catId;	// 64 = 0x40
    long long _type;	// 72 = 0x48
    NSString *_keyword;	// 80 = 0x50
    AETraceDTO *_trace;	// 88 = 0x58
    NSString *_rightIconName;	// 96 = 0x60
    NSString *_userInput;	// 104 = 0x68
}

@property(nonatomic) _Bool isFromHistory; // @synthesize isFromHistory=_isFromHistory;
@property(nonatomic) _Bool isHightlightUserInput; // @synthesize isHightlightUserInput=_isHightlightUserInput;
@property(copy, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
@property(readonly, copy, nonatomic) NSString *rightIconName; // @synthesize rightIconName=_rightIconName;
@property(readonly, nonatomic) AETraceDTO *trace; // @synthesize trace=_trace;
@property(readonly, copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(readonly, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *cateName; // @synthesize cateName=_cateName;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *action; // @synthesize action;
@property(retain, nonatomic) AESearchSuggestionDTO *suggestionDTO; // @synthesize suggestionDTO;
@property(nonatomic) long long cellType; // @synthesize cellType;
- (void).cxx_destruct;	// IMP=0x0000000100be7f30
- (id)initWithSearchSuggestionWithPromDTO:(id)arg1;	// IMP=0x0000000100be7c58
- (id)initWithSearchSuggestionCatDTO:(id)arg1;	// IMP=0x0000000100be7a3c
- (id)initWithSearchSuggestionDTO:(id)arg1;	// IMP=0x0000000100be7874
- (id)initWithSearchSuggestionCellModel:(id)arg1;	// IMP=0x0000000100be7708
- (id)initWithKeywordFromHistorySearchCellModel:(id)arg1;	// IMP=0x0000000100be767c
- (id)initWithKeywordWithCellModel:(id)arg1;	// IMP=0x0000000100be7458
- (id)initWithKeyword:(id)arg1 count:(long long)arg2;	// IMP=0x0000000100be7334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

