//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PLCrashReportMachExceptionInfo : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSArray *_codes;	// 16 = 0x10
}

@property(readonly, nonatomic) NSArray *codes; // @synthesize codes=_codes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)dealloc;	// IMP=0x000000010123a364
- (id)initWithType:(unsigned long long)arg1 codes:(id)arg2;	// IMP=0x000000010123a2dc

@end

