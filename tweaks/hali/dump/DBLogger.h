//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DBLogger : NSObject
{
}

+ (_Bool)needLog;	// IMP=0x00000001011b3c40
+ (double)getCurrentTime;	// IMP=0x00000001011b3be4
+ (void)logStatWithLogger:(id)arg1 monitorPoint:(id)arg2 dimensionValueSet:(id)arg3 measureValueSet:(id)arg4;	// IMP=0x00000001011b3b20
+ (void)registerCipherDBStatWithLogger:(id)arg1;	// IMP=0x00000001011b398c
+ (void)registerAliVfsDBStatWithLogger:(id)arg1;	// IMP=0x00000001011b37e4
+ (void)logFailWithLogger:(id)arg1 monitorPoint:(id)arg2 error:(id)arg3 arg:(id)arg4;	// IMP=0x00000001011b3678
+ (void)logSuccessWithLogger:(id)arg1 monitorPoint:(id)arg2 arg:(id)arg3;	// IMP=0x00000001011b35d8

@end

