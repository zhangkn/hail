//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageTwoInputFilter.h"

@interface VSImageChromaKeyBlendFilter : VSImageTwoInputFilter
{
    int colorToReplaceUniform;	// 256 = 0x100
    int thresholdSensitivityUniform;	// 260 = 0x104
    int smoothingUniform;	// 264 = 0x108
    double _thresholdSensitivity;	// 272 = 0x110
    double _smoothing;	// 280 = 0x118
}

@property(nonatomic) double smoothing; // @synthesize smoothing=_smoothing;
@property(nonatomic) double thresholdSensitivity; // @synthesize thresholdSensitivity=_thresholdSensitivity;
- (void)setColorToReplaceRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x0000000101afd788
- (id)init;	// IMP=0x0000000101afd654

@end
