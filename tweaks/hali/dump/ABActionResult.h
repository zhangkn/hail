//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ABActionResult : NSObject
{
    _Bool _td;	// 8 = 0x8
    long long _at;	// 16 = 0x10
    long long _r;	// 24 = 0x18
    unsigned long long _bt;	// 32 = 0x20
    unsigned long long _et;	// 40 = 0x28
    NSMutableArray *_is;	// 48 = 0x30
    NSMutableArray *_ms;	// 56 = 0x38
}

@property(retain, nonatomic) NSMutableArray *ms; // @synthesize ms=_ms;
@property(retain, nonatomic) NSMutableArray *is; // @synthesize is=_is;
@property(nonatomic) _Bool td; // @synthesize td=_td;
@property(nonatomic) unsigned long long et; // @synthesize et=_et;
@property(nonatomic) unsigned long long bt; // @synthesize bt=_bt;
@property(nonatomic) long long r; // @synthesize r=_r;
@property(nonatomic) long long at; // @synthesize at=_at;
- (void).cxx_destruct;	// IMP=0x00000001012b9b50
- (id)toDict;	// IMP=0x00000001012b9540
- (id)init;	// IMP=0x00000001012b9438

@end

