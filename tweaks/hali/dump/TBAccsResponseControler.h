//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccsAfterFilterProtocol.h"

@class NSMutableArray, NSString;

@interface TBAccsResponseControler : NSObject <AccsAfterFilterProtocol>
{
    NSMutableArray *_requestArray;	// 8 = 0x8
}

+ (void)responseDataabnormal:(id)arg1;	// IMP=0x000000010161e9f8
+ (id)responseDataabnormal:(id)arg1 serviceID:(id)arg2 parameters:(id)arg3;	// IMP=0x000000010161e374
+ (id)shareInstance;	// IMP=0x000000010161e238
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
- (void).cxx_destruct;	// IMP=0x000000010161ee04
- (void)handle:(id)arg1 response:(id)arg2 error:(id)arg3 parameters:(id)arg4;	// IMP=0x000000010161e370
- (id)init;	// IMP=0x000000010161e2f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

