//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFEImageWatermark : NSObject
{
    int _fontSize;	// 8 = 0x8
    int _mode;	// 12 = 0xc
    int _transparency;	// 16 = 0x10
    int _position;	// 20 = 0x14
    int _x;	// 24 = 0x18
    int _y;	// 28 = 0x1c
    NSString *_uri;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    long long _fontType;	// 48 = 0x30
    NSString *_fontColor;	// 56 = 0x38
}

@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) int x; // @synthesize x=_x;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) int transparency; // @synthesize transparency=_transparency;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) long long fontType; // @synthesize fontType=_fontType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) int fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;	// IMP=0x0000000101082328
- (id)initWithUri:(id)arg1;	// IMP=0x00000001010820a4
- (void)commonInit;	// IMP=0x0000000101082064
- (id)initWithText:(id)arg1 fontSize:(int)arg2 fontType:(long long)arg3 fontColor:(id)arg4;	// IMP=0x0000000101081f50

@end
