//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APIPTaskConfig, NSDictionary;

@interface APIPTaskInfo : NSObject
{
    long long _taskType;	// 8 = 0x8
    APIPTaskConfig *_taskConfig;	// 16 = 0x10
    NSDictionary *_taskDic;	// 24 = 0x18
}

@property(retain, nonatomic) NSDictionary *taskDic; // @synthesize taskDic=_taskDic;
@property(retain, nonatomic) APIPTaskConfig *taskConfig; // @synthesize taskConfig=_taskConfig;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;	// IMP=0x000000010113c338
- (id)init;	// IMP=0x000000010113c1a0

@end

