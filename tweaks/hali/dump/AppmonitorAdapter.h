//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppmonitorAdapter : NSObject
{
    id _appmonitorCounterCls;	// 8 = 0x8
    SEL _commitCounterSel;	// 16 = 0x10
    id _appmonitorAlarmCls;	// 24 = 0x18
    SEL _commitAlarmSel;	// 32 = 0x20
    id _appmonitorStatCls;	// 40 = 0x28
    SEL _commitStatSel;	// 48 = 0x30
    SEL _registStatSel;	// 56 = 0x38
}

+ (id)shareInstance;	// IMP=0x00000001016420c8
@property(nonatomic) SEL registStatSel; // @synthesize registStatSel=_registStatSel;
@property(nonatomic) SEL commitStatSel; // @synthesize commitStatSel=_commitStatSel;
@property(retain, nonatomic) id appmonitorStatCls; // @synthesize appmonitorStatCls=_appmonitorStatCls;
@property(nonatomic) SEL commitAlarmSel; // @synthesize commitAlarmSel=_commitAlarmSel;
@property(retain, nonatomic) id appmonitorAlarmCls; // @synthesize appmonitorAlarmCls=_appmonitorAlarmCls;
@property(nonatomic) SEL commitCounterSel; // @synthesize commitCounterSel=_commitCounterSel;
@property(retain, nonatomic) id appmonitorCounterCls; // @synthesize appmonitorCounterCls=_appmonitorCounterCls;
- (void).cxx_destruct;	// IMP=0x0000000101642a90
- (void)commitFailWithPage:(id)arg1 monitorPoint:(id)arg2 errMsg:(id)arg3;	// IMP=0x0000000101642854
- (void)commitWithPage:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3;	// IMP=0x00000001016426a8
- (void)commitStatWithPage:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3 value:(int)arg4;	// IMP=0x0000000101642394
- (void)registWithPage:(id)arg1 monitorPoint:(id)arg2;	// IMP=0x0000000101642148

@end

