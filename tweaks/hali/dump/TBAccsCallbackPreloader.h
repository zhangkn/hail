//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TBAccsCallbackPreloader : NSObject
{
    NSDictionary *_callbackInfo;	// 8 = 0x8
}

+ (id)shareInstance;	// IMP=0x000000010161f15c
@property(retain, nonatomic) NSDictionary *callbackInfo; // @synthesize callbackInfo=_callbackInfo;
- (void).cxx_destruct;	// IMP=0x000000010161fd0c
- (id)findProcessorsFileList;	// IMP=0x000000010161fab8
- (void)loadCallbackConfigWithServiceID:(id)arg1;	// IMP=0x000000010161f998
- (void)registerCallback:(id)arg1;	// IMP=0x000000010161f510
- (void)loadCallback;	// IMP=0x000000010161f3ec
- (id)init;	// IMP=0x000000010161f21c

@end

