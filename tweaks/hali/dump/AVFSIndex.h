//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVFSIndex : NSObject
{
    NSString *_property;	// 8 = 0x8
    unsigned long long _order;	// 16 = 0x10
}

+ (id)indexForProperty:(id)arg1 withOrder:(unsigned long long)arg2;	// IMP=0x00000001011d40a0
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;	// IMP=0x00000001011d415c

@end
