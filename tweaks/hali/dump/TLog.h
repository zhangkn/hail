//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TLog : NSObject
{
}

+ (long long)logLevel;	// IMP=0x0000000101a302b0
+ (void)trace:(id)arg1 category:(id)arg2;	// IMP=0x0000000101a30204
+ (void)log:(long long)arg1 exception:(id)arg2 content:(id)arg3;	// IMP=0x0000000101a30054
+ (void)error:(id)arg1 exception:(id)arg2;	// IMP=0x0000000101a2ff7c
+ (void)error:(id)arg1;	// IMP=0x0000000101a2ff6c
+ (void)warn:(id)arg1 exception:(id)arg2;	// IMP=0x0000000101a2fe94
+ (void)warn:(id)arg1;	// IMP=0x0000000101a2fe84
+ (void)debug:(id)arg1 exception:(id)arg2;	// IMP=0x0000000101a2fdac
+ (void)debug:(id)arg1;	// IMP=0x0000000101a2fd9c
+ (void)info:(id)arg1 exception:(id)arg2;	// IMP=0x0000000101a2fcc4
+ (void)info:(id)arg1;	// IMP=0x0000000101a2fcb4

@end

