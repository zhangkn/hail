//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SKUProperty : NSObject
{
    NSString *propertyName;	// 8 = 0x8
    NSNumber *propertyId;	// 16 = 0x10
    int propertyOrder;	// 24 = 0x18
    _Bool isSKUKey;	// 28 = 0x1c
}

@property(nonatomic) _Bool isSKUKey; // @synthesize isSKUKey;
@property(nonatomic) int propertyOrder; // @synthesize propertyOrder;
@property(copy, nonatomic) NSString *propertyName; // @synthesize propertyName;
@property(retain, nonatomic) NSNumber *propertyId; // @synthesize propertyId;
- (void).cxx_destruct;	// IMP=0x000000010063cd50

@end

