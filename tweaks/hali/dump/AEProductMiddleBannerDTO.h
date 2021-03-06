//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface AEProductMiddleBannerDTO : NSObject
{
    unsigned long long _bannerType;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_descriptionText;	// 32 = 0x20
    NSNumber *_remainingTime;	// 40 = 0x28
    NSString *_backgroundImage;	// 48 = 0x30
    NSString *_logo;	// 56 = 0x38
    NSArray *_messages;	// 64 = 0x40
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001005dd970
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSNumber *remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
- (void).cxx_destruct;	// IMP=0x00000001005ddd90
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;	// IMP=0x00000001005dd9e4

@end

