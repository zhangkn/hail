//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageHazeFilter : VSImageFilter
{
    int distanceUniform;	// 176 = 0xb0
    int slopeUniform;	// 180 = 0xb4
    double _distance;	// 184 = 0xb8
    double _slope;	// 192 = 0xc0
}

@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (id)init;	// IMP=0x0000000101add2d4

@end
