//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACSignal.h"

@class NSError;

@interface RACErrorSignal : RACSignal
{
    NSError *_error;	// 8 = 0x8
}

+ (id)error:(id)arg1;	// IMP=0x00000001014368b4
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;	// IMP=0x0000000101436ad8
- (id)subscribe:(id)arg1;	// IMP=0x000000010143694c

@end

