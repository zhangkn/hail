//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMSysProtocol.h"

@class MKTMultiArray, MKTMultiDictionary, NSString;

@interface PMMkt : NSObject <PMSysProtocol>
{
    MKTMultiArray *_msgIdArray;	// 8 = 0x8
    MKTMultiDictionary *_msgIdDict;	// 16 = 0x10
}

+ (long long)sysCode;	// IMP=0x0000000101414edc
+ (CDUnknownBlockType)msgCheck;	// IMP=0x0000000101414b6c
+ (CDUnknownBlockType)callback;	// IMP=0x0000000101414b0c
+ (id)sharedInstance;	// IMP=0x00000001014149d8
@property(retain, nonatomic) MKTMultiDictionary *msgIdDict; // @synthesize msgIdDict=_msgIdDict;
@property(retain, nonatomic) MKTMultiArray *msgIdArray; // @synthesize msgIdArray=_msgIdArray;
- (void).cxx_destruct;	// IMP=0x0000000101414f74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
