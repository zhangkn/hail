//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEStandardMailingAddressViewModel : NSObject
{
    _Bool _hasError;	// 8 = 0x8
    NSString *_contactPerson;	// 16 = 0x10
    NSString *_mainStreetAddress;	// 24 = 0x18
    NSString *_optionalStreetAddress;	// 32 = 0x20
    NSString *_city;	// 40 = 0x28
    NSString *_province;	// 48 = 0x30
    NSString *_countryCode;	// 56 = 0x38
    NSString *_zipCode;	// 64 = 0x40
    NSString *_mobileNo;	// 72 = 0x48
    NSString *_cpfNo;	// 80 = 0x50
    NSString *_passportNo;	// 88 = 0x58
    NSString *_warningMsg;	// 96 = 0x60
    NSString *_selfFetchingAvailableTime;	// 104 = 0x68
    NSString *_selfFetchingMsg;	// 112 = 0x70
}

@property(retain, nonatomic) NSString *selfFetchingMsg; // @synthesize selfFetchingMsg=_selfFetchingMsg;
@property(retain, nonatomic) NSString *selfFetchingAvailableTime; // @synthesize selfFetchingAvailableTime=_selfFetchingAvailableTime;
@property(retain, nonatomic) NSString *warningMsg; // @synthesize warningMsg=_warningMsg;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) NSString *passportNo; // @synthesize passportNo=_passportNo;
@property(retain, nonatomic) NSString *cpfNo; // @synthesize cpfNo=_cpfNo;
@property(retain, nonatomic) NSString *mobileNo; // @synthesize mobileNo=_mobileNo;
@property(retain, nonatomic) NSString *zipCode; // @synthesize zipCode=_zipCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *optionalStreetAddress; // @synthesize optionalStreetAddress=_optionalStreetAddress;
@property(retain, nonatomic) NSString *mainStreetAddress; // @synthesize mainStreetAddress=_mainStreetAddress;
@property(retain, nonatomic) NSString *contactPerson; // @synthesize contactPerson=_contactPerson;
- (void).cxx_destruct;	// IMP=0x0000000100859ad0
- (id)attributeAddress;	// IMP=0x000000010085896c

@end

