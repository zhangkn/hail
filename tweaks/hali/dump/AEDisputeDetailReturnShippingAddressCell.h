//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface AEDisputeDetailReturnShippingAddressCell : UITableViewCell
{
    UILabel *_name;	// 8 = 0x8
    UILabel *_address;	// 16 = 0x10
    UILabel *_city;	// 24 = 0x18
    UILabel *_province;	// 32 = 0x20
    UILabel *_country;	// 40 = 0x28
    UILabel *_zipcode;	// 48 = 0x30
    UILabel *_phoneNumber;	// 56 = 0x38
    UILabel *_mobilePhoneNumber;	// 64 = 0x40
    UILabel *_fax;	// 72 = 0x48
}

@property(retain, nonatomic) UILabel *fax; // @synthesize fax=_fax;
@property(retain, nonatomic) UILabel *mobilePhoneNumber; // @synthesize mobilePhoneNumber=_mobilePhoneNumber;
@property(retain, nonatomic) UILabel *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) UILabel *zipcode; // @synthesize zipcode=_zipcode;
@property(retain, nonatomic) UILabel *country; // @synthesize country=_country;
@property(retain, nonatomic) UILabel *province; // @synthesize province=_province;
@property(retain, nonatomic) UILabel *city; // @synthesize city=_city;
@property(retain, nonatomic) UILabel *address; // @synthesize address=_address;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x000000010006ede0
- (id)addressText:(id)arg1;	// IMP=0x000000010006df90
- (void)bindDta:(id)arg1;	// IMP=0x000000010006dbe8
- (void)addSubViews;	// IMP=0x000000010006d8c0
- (void)privateLayoutFax;	// IMP=0x000000010006cf00
- (void)privateLayoutMobilePhone;	// IMP=0x000000010006c4f0
- (void)privateLayoutPhoneNumber;	// IMP=0x000000010006bae0
- (void)privateLayoutZipCode;	// IMP=0x000000010006b284
- (void)privateLayoutCountry;	// IMP=0x000000010006a924
- (void)privateLayoutProvince;	// IMP=0x0000000100069fc4
- (void)privateLayoutCity;	// IMP=0x00000001000696e4
- (void)privateLayoutAddress;	// IMP=0x00000001000692ac
- (void)privateLayoutName;	// IMP=0x0000000100068558
- (void)privateLayoutViews;	// IMP=0x00000001000684b4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010006844c

@end
