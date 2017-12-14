//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MailingAddressDTO, NSArray, NSString;

@interface AEMailingAddressListDTO : NSObject
{
    NSArray *_addressList;	// 8 = 0x8
    MailingAddressDTO *_selfPickupAddress;	// 16 = 0x10
    NSString *_houseAddressId;	// 24 = 0x18
    unsigned long long _recommendStrategy;	// 32 = 0x20
    double _latitude;	// 40 = 0x28
    double _longitude;	// 48 = 0x30
}

+ (id)objectClassInArray;	// IMP=0x000000010062c944
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long recommendStrategy; // @synthesize recommendStrategy=_recommendStrategy;
@property(retain, nonatomic) NSString *houseAddressId; // @synthesize houseAddressId=_houseAddressId;
@property(retain, nonatomic) MailingAddressDTO *selfPickupAddress; // @synthesize selfPickupAddress=_selfPickupAddress;
@property(retain, nonatomic) NSArray *addressList; // @synthesize addressList=_addressList;
- (void).cxx_destruct;	// IMP=0x000000010062cc3c
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;	// IMP=0x000000010062c9c8

@end

