//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, TBAccsLog;

@interface TBAccsFilter : TBJSONModel
{
    NSArray *_module;	// 8 = 0x8
    NSArray *_network;	// 16 = 0x10
    TBAccsLog *_log;	// 24 = 0x18
}

@property(retain, nonatomic) TBAccsLog *log; // @synthesize log=_log;
@property(retain, nonatomic) NSArray *network; // @synthesize network=_network;
@property(retain, nonatomic) NSArray *module; // @synthesize module=_module;
- (void).cxx_destruct;	// IMP=0x0000000101a2f870

@end

