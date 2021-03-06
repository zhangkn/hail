//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEFloorTimelineItemViewModel : AEBaseTile
{
    AEImageTileComponent *_illustrationModel;	// 8 = 0x8
    AETextTileComponent *_subjectModel;	// 16 = 0x10
    AETextTileComponent *_summaryModel;	// 24 = 0x18
    long long _illustrationType;	// 32 = 0x20
    long long _subjectFontSize;	// 40 = 0x28
    long long _subjectToSummaryMargin;	// 48 = 0x30
    long long _textAreaHeight;	// 56 = 0x38
}

+ (Class)cellClass;	// IMP=0x0000000100383494
@property(nonatomic) long long textAreaHeight; // @synthesize textAreaHeight=_textAreaHeight;
@property(nonatomic) long long subjectToSummaryMargin; // @synthesize subjectToSummaryMargin=_subjectToSummaryMargin;
@property(nonatomic) long long subjectFontSize; // @synthesize subjectFontSize=_subjectFontSize;
@property(nonatomic) long long illustrationType; // @synthesize illustrationType=_illustrationType;
@property(retain, nonatomic) AETextTileComponent *summaryModel; // @synthesize summaryModel=_summaryModel;
@property(retain, nonatomic) AETextTileComponent *subjectModel; // @synthesize subjectModel=_subjectModel;
@property(retain, nonatomic) AEImageTileComponent *illustrationModel; // @synthesize illustrationModel=_illustrationModel;
- (void).cxx_destruct;	// IMP=0x0000000100383320
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003828f0

@end

