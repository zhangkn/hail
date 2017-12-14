//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageSkinToneFilter : VSImageFilter
{
    int skinToneAdjustUniform;	// 176 = 0xb0
    int skinHueUniform;	// 180 = 0xb4
    int skinHueThresholdUniform;	// 184 = 0xb8
    int maxHueShiftUniform;	// 188 = 0xbc
    int maxSaturationShiftUniform;	// 192 = 0xc0
    int upperSkinToneColorUniform;	// 196 = 0xc4
    double skinToneAdjust;	// 200 = 0xc8
    double skinHue;	// 208 = 0xd0
    double skinHueThreshold;	// 216 = 0xd8
    double maxHueShift;	// 224 = 0xe0
    double maxSaturationShift;	// 232 = 0xe8
    unsigned long long upperSkinToneColor;	// 240 = 0xf0
}

@property(nonatomic) unsigned long long upperSkinToneColor; // @synthesize upperSkinToneColor;
@property(nonatomic) double maxSaturationShift; // @synthesize maxSaturationShift;
@property(nonatomic) double maxHueShift; // @synthesize maxHueShift;
@property(nonatomic) double skinHueThreshold; // @synthesize skinHueThreshold;
@property(nonatomic) double skinHue; // @synthesize skinHue;
@property(nonatomic) double skinToneAdjust; // @synthesize skinToneAdjust;
- (id)init;	// IMP=0x0000000101af31a4

@end

