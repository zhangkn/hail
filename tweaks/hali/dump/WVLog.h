//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVLog : NSObject
{
}

+ (id)registedExternalLog;	// IMP=0x0000000101b83e3c
+ (void)verbose:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;	// IMP=0x0000000101b83c10
+ (void)debug:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;	// IMP=0x0000000101b839e4
+ (void)info:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;	// IMP=0x0000000101b837b8
+ (void)warn:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;	// IMP=0x0000000101b8358c
+ (void)error:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;	// IMP=0x0000000101b83360
+ (_Bool)checkLogLevel:(long long)arg1;	// IMP=0x0000000101b83300
+ (id)getModuleName:(long long)arg1;	// IMP=0x0000000101b8322c
+ (id)registeredExternalLog;	// IMP=0x0000000101b83220
+ (void)registerExternalLog:(id)arg1;	// IMP=0x0000000101b83210

@end

