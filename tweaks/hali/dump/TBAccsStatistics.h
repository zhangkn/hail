//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccsStatisticsProtocol.h"

@class NSString;

@interface TBAccsStatistics : NSObject <AccsStatisticsProtocol>
{
    NSString *_type;	// 8 = 0x8
}

+ (void)commit;	// IMP=0x000000010161ba84
+ (void)commitEvent:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 args:(id)arg5;	// IMP=0x000000010161b8e0
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x000000010161badc
- (void)success:(id)arg1 accsRequest:(id)arg2;	// IMP=0x000000010161ba90
- (void)faile:(id)arg1 accsRequest:(id)arg2;	// IMP=0x000000010161ba8c
- (void)startSendRequest:(id)arg1 accsRequest:(id)arg2;	// IMP=0x000000010161ba88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
