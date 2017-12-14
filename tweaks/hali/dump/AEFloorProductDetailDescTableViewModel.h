//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSArray, NSString;

@interface AEFloorProductDetailDescTableViewModel : AEBaseTile
{
    _Bool _hasLeftHeader;	// 8 = 0x8
    _Bool _hasTopHeader;	// 9 = 0x9
    NSString *_title;	// 16 = 0x10
    NSArray *_topTitles;	// 24 = 0x18
    NSArray *_leftTitles;	// 32 = 0x20
    NSArray *_data;	// 40 = 0x28
    NSArray *_contentColors;	// 48 = 0x30
    NSArray *_contentWidths;	// 56 = 0x38
}

@property(copy, nonatomic) NSArray *contentWidths; // @synthesize contentWidths=_contentWidths;
@property(copy, nonatomic) NSArray *contentColors; // @synthesize contentColors=_contentColors;
@property(nonatomic) _Bool hasTopHeader; // @synthesize hasTopHeader=_hasTopHeader;
@property(nonatomic) _Bool hasLeftHeader; // @synthesize hasLeftHeader=_hasLeftHeader;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSArray *leftTitles; // @synthesize leftTitles=_leftTitles;
@property(copy, nonatomic) NSArray *topTitles; // @synthesize topTitles=_topTitles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001004fb54c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001004fafac
- (id)init;	// IMP=0x00000001004faf58

@end

