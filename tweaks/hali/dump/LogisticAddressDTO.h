//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LogisticAddressDTO : NSObject
{
    NSString *_contactPerson;	// 8 = 0x8
    NSString *_mobilePhone;	// 16 = 0x10
    NSString *_phoneCountry;	// 24 = 0x18
    NSString *_address;	// 32 = 0x20
    NSString *_address2;	// 40 = 0x28
    NSString *_zipCode;	// 48 = 0x30
    NSString *_city;	// 56 = 0x38
    NSString *_province;	// 64 = 0x40
    NSString *_country;	// 72 = 0x48
}

@property(retain) NSString *country; // @synthesize country=_country;
@property(retain) NSString *province; // @synthesize province=_province;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(retain) NSString *address2; // @synthesize address2=_address2;
@property(retain) NSString *address; // @synthesize address=_address;
@property(retain) NSString *phoneCountry; // @synthesize phoneCountry=_phoneCountry;
@property(retain) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain) NSString *contactPerson; // @synthesize contactPerson=_contactPerson;
- (void).cxx_destruct;	// IMP=0x00000001002b24ec
- (id)convertToMailingAddressViewModel;	// IMP=0x00000001002b21f0

@end

