//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface AIFExposureManager : NSObject
{
    NSMutableDictionary *_expTimes;	// 8 = 0x8
    NSMutableDictionary *_currentCellDict;	// 16 = 0x10
    id <AIFExposureProtocol> _delegate;	// 24 = 0x18
    NSDate *_baseTime;	// 32 = 0x20
}

@property(retain, nonatomic) NSDate *baseTime; // @synthesize baseTime=_baseTime;
@property(nonatomic) __weak id <AIFExposureProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100a58ce8
- (void)reportExposureRecord:(id)arg1;	// IMP=0x0000000100a58148
- (void)pauseRecord;	// IMP=0x0000000100a57e34
- (void)resumeRecord;	// IMP=0x0000000100a57d0c
- (void)unMarkAllCells;	// IMP=0x0000000100a57b14
- (void)markItemExposureWithContentID:(id)arg1 index:(long long)arg2 traces:(id)arg3 show:(_Bool)arg4;	// IMP=0x0000000100a578ec
- (void)markItemExposureWithContentID:(id)arg1 index:(long long)arg2 requestID:(id)arg3 additionParam:(id)arg4 show:(_Bool)arg5;	// IMP=0x0000000100a57698
- (void)markItemExposureWithContentID:(id)arg1 index:(long long)arg2 requestID:(id)arg3 show:(_Bool)arg4;	// IMP=0x0000000100a5762c
- (void)markItemExposureWithContentID:(id)arg1 index:(long long)arg2 show:(_Bool)arg3;	// IMP=0x0000000100a57614
- (void)itemExposureEnd:(id)arg1;	// IMP=0x0000000100a5732c
- (double)getExposureTime:(id)arg1;	// IMP=0x0000000100a571c4
- (id)init;	// IMP=0x0000000100a57090

@end

