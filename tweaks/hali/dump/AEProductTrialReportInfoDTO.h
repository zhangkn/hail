//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEProductTrialReportInfoDTO : NSObject
{
    _Bool _isSuccess;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_info;	// 24 = 0x18
    unsigned long long _num;	// 32 = 0x20
}

@property(nonatomic) unsigned long long num; // @synthesize num=_num;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001005f0f98

@end

