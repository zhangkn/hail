//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UTMCEventsSampleConf;

@interface UTMCSingleStreamRuleConf : NSObject
{
    UTMCEventsSampleConf *mEventsConf;	// 8 = 0x8
    NSMutableArray *mPagesConf;	// 16 = 0x10
    NSMutableArray *mArg1Conf;	// 24 = 0x18
    NSMutableArray *mArg2Conf;	// 32 = 0x20
    NSMutableArray *mArg3Conf;	// 40 = 0x28
    NSMutableArray *mArgsConf;	// 48 = 0x30
    NSString *mStreamName;	// 56 = 0x38
}

@property(retain) NSString *mStreamName; // @synthesize mStreamName;
- (void).cxx_destruct;	// IMP=0x0000000101a985f4
- (int)isMatchThisRule:(id)arg1;	// IMP=0x0000000101a9800c
- (int)isEqualOrLike:(id)arg1 withMatchArr:(id)arg2;	// IMP=0x0000000101a97e38
- (void)setMArgsConf:(id)arg1;	// IMP=0x0000000101a97ddc
- (void)setMArg3Conf:(id)arg1;	// IMP=0x0000000101a97d80
- (void)setMArg2Conf:(id)arg1;	// IMP=0x0000000101a97d24
- (void)setMArg1Conf:(id)arg1;	// IMP=0x0000000101a97cc8
- (void)setMPagesConf:(id)arg1;	// IMP=0x0000000101a97c6c
- (void)setMEventsConf:(id)arg1;	// IMP=0x0000000101a97c14

@end

