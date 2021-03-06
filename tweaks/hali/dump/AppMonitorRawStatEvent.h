//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorEvent.h"

#import "AppMonitorRawEventProtocol.h"

@class AppMonitorDimensionValueSet, AppMonitorMeasureValueSet, NSString;

@interface AppMonitorRawStatEvent : AppMonitorEvent <AppMonitorRawEventProtocol>
{
    AppMonitorDimensionValueSet *_dimensionValues;	// 8 = 0x8
    AppMonitorMeasureValueSet *_measureValues;	// 16 = 0x10
}

+ (id)parseRawUTMsg:(id)arg1;	// IMP=0x00000001011fe850
@property(retain, nonatomic) AppMonitorMeasureValueSet *measureValues; // @synthesize measureValues=_measureValues;
@property(retain, nonatomic) AppMonitorDimensionValueSet *dimensionValues; // @synthesize dimensionValues=_dimensionValues;
- (void).cxx_destruct;	// IMP=0x00000001011feca4
- (id)dumpToUTEvent;	// IMP=0x00000001011fe570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

