//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEMyRewardPointsBaseSectionHeaderVM.h"

@class NSString;

@interface AEMyRewardPointsVarietySectionHeaderVM : AEMyRewardPointsBaseSectionHeaderVM
{
    NSString *_title;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    NSString *_numValue;	// 24 = 0x18
    double _cellWidth;	// 32 = 0x20
}

+ (id)viewModelWithModel:(id)arg1;	// IMP=0x00000001001c0f28
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(copy, nonatomic) NSString *numValue; // @synthesize numValue=_numValue;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001001c13c0

@end

