//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

@interface AEEditRadioSelectorContentVM : NSObject
{
    NSAttributedString *_optionTitleAttributedText;	// 8 = 0x8
    NSAttributedString *_optionSubTitleAttributedText;	// 16 = 0x10
}

@property(copy, nonatomic) NSAttributedString *optionSubTitleAttributedText; // @synthesize optionSubTitleAttributedText=_optionSubTitleAttributedText;
@property(copy, nonatomic) NSAttributedString *optionTitleAttributedText; // @synthesize optionTitleAttributedText=_optionTitleAttributedText;
- (void).cxx_destruct;	// IMP=0x00000001000c8ab0
- (id)initWithOptionTitleAttributedText:(id)arg1 optionSubTitleAttributedText:(id)arg2;	// IMP=0x00000001000c89cc

@end

