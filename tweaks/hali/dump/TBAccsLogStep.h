//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface TBAccsLogStep : TBJSONModel
{
    NSArray *_runtime;	// 8 = 0x8
    long long _stackLine;	// 16 = 0x10
}

@property(nonatomic) long long stackLine; // @synthesize stackLine=_stackLine;
@property(retain, nonatomic) NSArray *runtime; // @synthesize runtime=_runtime;
- (void).cxx_destruct;	// IMP=0x0000000101a2f4c8

@end

