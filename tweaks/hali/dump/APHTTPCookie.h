//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface APHTTPCookie : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
}

+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;	// IMP=0x000000010117dce0
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;	// IMP=0x000000010117e430
- (id)copy;	// IMP=0x000000010117e36c
- (id)requestHeaderField;	// IMP=0x000000010117e2c8
- (id)description;	// IMP=0x000000010117e0f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010117df84
- (id)path;	// IMP=0x000000010117df28
- (id)value;	// IMP=0x000000010117decc
- (id)name;	// IMP=0x000000010117de70
- (id)expiresDate;	// IMP=0x000000010117de68
- (id)domain;	// IMP=0x000000010117de0c
- (id)initWithProperties:(id)arg1;	// IMP=0x000000010117dd94

@end

