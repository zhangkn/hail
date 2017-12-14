//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, NSString, UIColor, UIFont;

@interface APIPRTLabel : UIView
{
    _Bool _highlighted;	// 8 = 0x8
    int _textAlignment;	// 12 = 0xc
    int _lineBreakMode;	// 16 = 0x10
    int _currentSelectedButtonComponentIndex;	// 20 = 0x14
    NSString *_text;	// 24 = 0x18
    NSString *_plainText;	// 32 = 0x20
    NSString *_highlightedText;	// 40 = 0x28
    UIColor *_textColor;	// 48 = 0x30
    UIFont *_font;	// 56 = 0x38
    NSDictionary *_linkAttributes;	// 64 = 0x40
    NSDictionary *_selectedLinkAttributes;	// 72 = 0x48
    id <APIPRTLabelDelegate> _delegate;	// 80 = 0x50
    NSString *_paragraphReplacement;	// 88 = 0x58
    NSMutableArray *_textComponents;	// 96 = 0x60
    NSMutableArray *_highlightedTextComponents;	// 104 = 0x68
    double _lineSpacing;	// 112 = 0x70
    struct CGSize _optimumSize;	// 120 = 0x78
    CDStruct_627e0f85 _visibleRange;	// 136 = 0x88
}

+ (id)preExtractTextStyle:(id)arg1;	// IMP=0x0000000101108374
+ (id)extractTextStyleFromText:(id)arg1 paragraphReplacement:(id)arg2;	// IMP=0x0000000101106f34
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) CDStruct_627e0f85 visibleRange; // @synthesize visibleRange=_visibleRange;
@property(nonatomic) int currentSelectedButtonComponentIndex; // @synthesize currentSelectedButtonComponentIndex=_currentSelectedButtonComponentIndex;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) int lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) struct CGSize optimumSize; // @synthesize optimumSize=_optimumSize;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSMutableArray *highlightedTextComponents; // @synthesize highlightedTextComponents=_highlightedTextComponents;
@property(retain, nonatomic) NSMutableArray *textComponents; // @synthesize textComponents=_textComponents;
@property(copy, nonatomic) NSString *paragraphReplacement; // @synthesize paragraphReplacement=_paragraphReplacement;
@property(nonatomic) __weak id <APIPRTLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *selectedLinkAttributes; // @synthesize selectedLinkAttributes=_selectedLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;	// IMP=0x0000000101108748
- (void)setText:(id)arg1 extractedTextStyle:(id)arg2;	// IMP=0x0000000101108240
- (id)visibleText;	// IMP=0x00000001011081a0
- (id)colorForHex:(id)arg1;	// IMP=0x0000000101107eb0
- (void)parse:(id)arg1 valid_tags:(id)arg2;	// IMP=0x00000001011077fc
- (id)components;	// IMP=0x0000000101106c28
- (void)dealloc;	// IMP=0x0000000101106bd4
- (double)frameHeight:(struct __CTFrame *)arg1;	// IMP=0x0000000101106b20
- (void)setHighlightedText:(id)arg1 extractedTextComponent:(id)arg2;	// IMP=0x0000000101106a44
- (void)setText:(id)arg1 extractedTextComponent:(id)arg2;	// IMP=0x0000000101106920
- (void)onButtonPressed:(id)arg1 withTitle:(id)arg2;	// IMP=0x000000010110653c
- (void)onButtonPressed:(id)arg1;	// IMP=0x000000010110643c
- (void)onButtonTouchUpOutside:(id)arg1;	// IMP=0x0000000101106404
- (void)onButtonTouchDown:(id)arg1;	// IMP=0x00000001011063b8
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;	// IMP=0x00000001011060bc
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;	// IMP=0x0000000101105de4
- (void)applyBoldItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;	// IMP=0x0000000101105c5c
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;	// IMP=0x0000000101105b68
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(int)arg3 withLength:(int)arg4;	// IMP=0x0000000101105408
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;	// IMP=0x0000000101105314
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;	// IMP=0x00000001011052b0
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(int)arg2 withLength:(int)arg3;	// IMP=0x000000010110524c
- (void)applyCenterStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(int)arg3 withLength:(int)arg4;	// IMP=0x0000000101105074
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;	// IMP=0x0000000101104bbc
- (void)render;	// IMP=0x000000010110316c
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000101103160
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000101103154
- (void)initialize;	// IMP=0x0000000101102fcc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000101102f74
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101102f1c

@end
