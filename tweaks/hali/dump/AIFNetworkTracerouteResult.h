//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSString;

@interface AIFNetworkTracerouteResult : NSObject
{
    _Bool _isSuccess;	// 8 = 0x8
    NSError *_tracerouteError;	// 16 = 0x10
    NSMutableArray *_results;	// 24 = 0x18
    NSString *_IPAddress;	// 32 = 0x20
}

@property(nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSError *tracerouteError; // @synthesize tracerouteError=_tracerouteError;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;	// IMP=0x0000000101050d70
- (id)init;	// IMP=0x0000000101050bf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101050b08

@end

