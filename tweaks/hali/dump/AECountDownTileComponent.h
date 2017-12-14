//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AECountDownTileStyle;

@interface AECountDownTileComponent : AEBaseTileComponent
{
    double _timeInterval;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    AECountDownTileStyle *_countDownStyle;	// 24 = 0x18
}

+ (Class)styleClass;	// IMP=0x00000001009baeec
@property(retain, nonatomic) AECountDownTileStyle *countDownStyle; // @synthesize countDownStyle=_countDownStyle;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;	// IMP=0x00000001009baff0
@property(retain, nonatomic) AECountDownTileStyle *style; // @dynamic style;
- (id)initWithTileFieldDTO:(id)arg1;	// IMP=0x00000001009bad64

@end
