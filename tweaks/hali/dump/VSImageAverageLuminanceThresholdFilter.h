//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilterGroup.h"

@class VSImageLuminanceThresholdFilter, VSImageLuminosity;

@interface VSImageAverageLuminanceThresholdFilter : VSImageFilterGroup
{
    VSImageLuminosity *luminosityFilter;	// 80 = 0x50
    VSImageLuminanceThresholdFilter *luminanceThresholdFilter;	// 88 = 0x58
    double _thresholdMultiplier;	// 96 = 0x60
}

@property(nonatomic) double thresholdMultiplier; // @synthesize thresholdMultiplier=_thresholdMultiplier;
- (void).cxx_destruct;	// IMP=0x0000000101ad019c
- (id)init;	// IMP=0x0000000101acff78

@end
