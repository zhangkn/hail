//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESearchQRWSuggestion, emptyRecommendDTO, spellSuggestItemDTO;

@interface suggestItemDTO : NSObject
{
    AESearchQRWSuggestion *_qrwSuggest;	// 8 = 0x8
    spellSuggestItemDTO *_spellSuggest;	// 16 = 0x10
    emptyRecommendDTO *_emptyRecommend;	// 24 = 0x18
}

@property(retain, nonatomic) emptyRecommendDTO *emptyRecommend; // @synthesize emptyRecommend=_emptyRecommend;
@property(retain, nonatomic) spellSuggestItemDTO *spellSuggest; // @synthesize spellSuggest=_spellSuggest;
@property(retain, nonatomic) AESearchQRWSuggestion *qrwSuggest; // @synthesize qrwSuggest=_qrwSuggest;
- (void).cxx_destruct;	// IMP=0x0000000100c95bc8

@end

