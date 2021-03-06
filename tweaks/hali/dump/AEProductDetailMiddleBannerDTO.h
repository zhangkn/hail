//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface AEProductDetailMiddleBannerDTO : NSObject
{
    NSString *_bannerType;	// 8 = 0x8
    NSString *_backgroundImage;	// 16 = 0x10
    NSString *_remainingTime;	// 24 = 0x18
    NSDate *_beginDate;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_subtitle;	// 48 = 0x30
    NSString *_descriptionText;	// 56 = 0x38
    NSString *_logo;	// 64 = 0x40
    NSArray *_messages;	// 72 = 0x48
    NSString *_logoBackgroundColor;	// 80 = 0x50
    NSString *_logoImage;	// 88 = 0x58
    NSString *_logoText;	// 96 = 0x60
    NSString *_message;	// 104 = 0x68
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(copy, nonatomic) NSString *logoImage; // @synthesize logoImage=_logoImage;
@property(copy, nonatomic) NSString *logoBackgroundColor; // @synthesize logoBackgroundColor=_logoBackgroundColor;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) NSString *remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *bannerType; // @synthesize bannerType=_bannerType;
- (void).cxx_destruct;	// IMP=0x00000001005af270
- (void)setDescription:(id)arg1;	// IMP=0x00000001005aefdc
- (void)setBeginDateWithRemainingTimeInMilliSecond:(id)arg1;	// IMP=0x00000001005aeedc

@end

