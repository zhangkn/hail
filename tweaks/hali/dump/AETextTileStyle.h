//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileStyle.h"

@class NSAttributedString, NSMutableArray, NSString, UIColor, UILabel;

@interface AETextTileStyle : AEBaseTileStyle
{
    _Bool _isImageText;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
    double _fontSize;	// 24 = 0x18
    NSString *_fontWeight;	// 32 = 0x20
    NSString *_textAlignment;	// 40 = 0x28
    NSString *_decoration;	// 48 = 0x30
    NSAttributedString *_cachedAttributedText;	// 56 = 0x38
    NSMutableArray *_picURlRangs;	// 64 = 0x40
    NSMutableArray *_imgAttachment;	// 72 = 0x48
    UILabel *_targetLbl;	// 80 = 0x50
}

@property(nonatomic) __weak UILabel *targetLbl; // @synthesize targetLbl=_targetLbl;
@property(retain, nonatomic) NSMutableArray *imgAttachment; // @synthesize imgAttachment=_imgAttachment;
@property(retain, nonatomic) NSMutableArray *picURlRangs; // @synthesize picURlRangs=_picURlRangs;
@property(retain, nonatomic) NSAttributedString *cachedAttributedText; // @synthesize cachedAttributedText=_cachedAttributedText;
@property(nonatomic) _Bool isImageText; // @synthesize isImageText=_isImageText;
@property(retain, nonatomic) NSString *decoration; // @synthesize decoration=_decoration;
@property(retain, nonatomic) NSString *textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;	// IMP=0x00000001009df414
- (void)createAttachmentsForLabel:(id)arg1 text:(id)arg2;	// IMP=0x00000001009ded40
- (void)tryToGenerateImageAttributeTextForLabel:(id)arg1 text:(id)arg2;	// IMP=0x00000001009de46c
- (id)updateAttributesForAttributeText:(id)arg1 withLabel:(id)arg2;	// IMP=0x00000001009ddfe8
- (void)renderStyleInView:(id)arg1;	// IMP=0x00000001009dd9f8
- (id)properFontForLabel:(id)arg1;	// IMP=0x00000001009dd6f4
- (id)initWithDTO:(id)arg1;	// IMP=0x00000001009dd308

@end
