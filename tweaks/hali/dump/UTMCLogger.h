//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UTMCLogger : NSObject
{
}

+ (void)e:(int)arg1 tag:(id)arg2 with:(id)arg3;	// IMP=0x0000000101aa3f5c
+ (void)w:(int)arg1 tag:(id)arg2 with:(id)arg3;	// IMP=0x0000000101aa3ee8
+ (void)i:(int)arg1 tag:(id)arg2 with:(id)arg3;	// IMP=0x0000000101aa3e74
+ (void)d:(int)arg1 tag:(id)arg2 with:(id)arg3;	// IMP=0x0000000101aa3e00
+ (void)v:(int)arg1 tag:(id)arg2 with:(id)arg3;	// IMP=0x0000000101aa3d8c
+ (id)logLevelString:(int)arg1;	// IMP=0x0000000101aa3cf0
+ (void)printLog:(int)arg1 level:(int)arg2 tag:(id)arg3 with:(id)arg4 and:(char *)arg5;	// IMP=0x0000000101aa3bd0
+ (_Bool)isDebug;	// IMP=0x0000000101aa3bc4
+ (_Bool)isDev;	// IMP=0x0000000101aa3bb8
+ (void)setDev:(_Bool)arg1;	// IMP=0x0000000101aa3bac
+ (void)setDebug:(_Bool)arg1;	// IMP=0x0000000101aa3ba0

@end
