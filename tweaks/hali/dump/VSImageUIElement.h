//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageOutput.h"

@class CALayer, UIView;

@interface VSImageUIElement : VSImageOutput
{
    UIView *view;	// 80 = 0x50
    CALayer *layer;	// 88 = 0x58
    struct CGSize previousLayerSizeInPixels;	// 96 = 0x60
    CDStruct_1b6d18a9 time;	// 112 = 0x70
    double actualTimeOfLastUpdate;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000101abf0b8
- (void)updateWithTimestamp:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000101abebec
- (void)updateUsingCurrentTime;	// IMP=0x0000000101abead4
- (void)update;	// IMP=0x0000000101abea94
- (struct CGSize)layerSizeInPixels;	// IMP=0x0000000101abea1c
- (id)initWithLayer:(id)arg1;	// IMP=0x0000000101abe938
- (id)initWithView:(id)arg1;	// IMP=0x0000000101abe838

@end

