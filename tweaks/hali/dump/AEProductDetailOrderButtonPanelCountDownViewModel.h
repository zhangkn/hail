//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductDetailActivityOptionDTO;

@interface AEProductDetailOrderButtonPanelCountDownViewModel : NSObject
{
    double _beginTime;	// 8 = 0x8
    double _endTime;	// 16 = 0x10
    AEProductDetailActivityOptionDTO *_activityOption;	// 24 = 0x18
}

@property(retain, nonatomic) AEProductDetailActivityOptionDTO *activityOption; // @synthesize activityOption=_activityOption;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void).cxx_destruct;	// IMP=0x00000001005b50dc

@end
