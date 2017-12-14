//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PLCrashReportExceptionInfo : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSArray *_stackFrames;	// 24 = 0x18
}

@property(readonly, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(readonly, nonatomic) NSString *exceptionReason; // @synthesize exceptionReason=_reason;
@property(readonly, nonatomic) NSString *exceptionName; // @synthesize exceptionName=_name;
- (void)dealloc;	// IMP=0x0000000101229d00
- (id)initWithExceptionName:(id)arg1 reason:(id)arg2 stackFrames:(id)arg3;	// IMP=0x0000000101229c44
- (id)initWithExceptionName:(id)arg1 reason:(id)arg2;	// IMP=0x0000000101229c34

@end
