//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NWPolicy : NSObject
{
    int _type;	// 8 = 0x8
    NSString *_host;	// 16 = 0x10
    NSArray *_aisles;	// 24 = 0x18
    NSString *_cname;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(retain, nonatomic) NSArray *aisles; // @synthesize aisles=_aisles;
@property(nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x00000001013dfe70

@end

