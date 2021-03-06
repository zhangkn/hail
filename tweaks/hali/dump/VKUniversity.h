//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber, NSString;

@interface VKUniversity : VKApiObject
{
    NSNumber *_id;	// 8 = 0x8
    NSNumber *_country;	// 16 = 0x10
    NSNumber *_city;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSNumber *_faculty;	// 40 = 0x28
    NSString *_faculty_name;	// 48 = 0x30
    NSNumber *_chair;	// 56 = 0x38
    NSString *_chair_name;	// 64 = 0x40
    NSNumber *_graduation;	// 72 = 0x48
    NSString *_education_form;	// 80 = 0x50
    NSString *_education_status;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *education_status; // @synthesize education_status=_education_status;
@property(retain, nonatomic) NSString *education_form; // @synthesize education_form=_education_form;
@property(retain, nonatomic) NSNumber *graduation; // @synthesize graduation=_graduation;
@property(retain, nonatomic) NSString *chair_name; // @synthesize chair_name=_chair_name;
@property(retain, nonatomic) NSNumber *chair; // @synthesize chair=_chair;
@property(retain, nonatomic) NSString *faculty_name; // @synthesize faculty_name=_faculty_name;
@property(retain, nonatomic) NSNumber *faculty; // @synthesize faculty=_faculty;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber *country; // @synthesize country=_country;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;	// IMP=0x000000010097a888

@end

