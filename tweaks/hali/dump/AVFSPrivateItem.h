//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVFSPrivateItem : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSString *_extendKey;	// 16 = 0x10
    long long _size;	// 24 = 0x18
    unsigned long long _source;	// 32 = 0x20
}

@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *extendKey; // @synthesize extendKey=_extendKey;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x00000001011f48ec

@end

