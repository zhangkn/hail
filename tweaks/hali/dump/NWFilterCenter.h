//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSRecursiveLock;

@interface NWFilterCenter : NSObject
{
    NSMutableArray *_extRequestHeaderFilters;	// 8 = 0x8
    NSMutableArray *_responseFilters;	// 16 = 0x10
    NSRecursiveLock *_lock;	// 24 = 0x18
    NSArray *_whiteList;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001013ce890
@property(retain) NSArray *whiteList; // @synthesize whiteList=_whiteList;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *responseFilters; // @synthesize responseFilters=_responseFilters;
@property(retain, nonatomic) NSMutableArray *extRequestHeaderFilters; // @synthesize extRequestHeaderFilters=_extRequestHeaderFilters;
- (void).cxx_destruct;	// IMP=0x00000001013cfaa4
- (void)removeResponseFilter:(id)arg1;	// IMP=0x00000001013cf7a8
- (void)removeRequestHeaderFilter:(id)arg1;	// IMP=0x00000001013cf534
- (void)runResponseFilter:(id)arg1 andHost:(id)arg2;	// IMP=0x00000001013cf17c
- (id)runExtRequestHeaderFilter:(id)arg1 andFilter:(id)arg2;	// IMP=0x00000001013ceba8
- (id)runExtRequestHeaderFilters:(id)arg1;	// IMP=0x00000001013ceb98
- (void)addResponseFilter:(id)arg1;	// IMP=0x00000001013cead0
- (void)addExtRequestHeaderFilter:(id)arg1;	// IMP=0x00000001013cea08
- (id)init;	// IMP=0x00000001013ce910

@end
