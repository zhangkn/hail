//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEProductDetailBigSaleBannerDTO : NSObject
{
    NSString *_logo;	// 8 = 0x8
    NSString *_backgroundImage;	// 16 = 0x10
    NSArray *_messages;	// 24 = 0x18
    NSString *_remainingTime;	// 32 = 0x20
    NSString *_logoBackgroundColor;	// 40 = 0x28
    NSString *_logoImage;	// 48 = 0x30
    NSString *_logoText;	// 56 = 0x38
    NSString *_message;	// 64 = 0x40
}

+ (id)convert:(id)arg1;	// IMP=0x000000010059a62c
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(copy, nonatomic) NSString *logoImage; // @synthesize logoImage=_logoImage;
@property(copy, nonatomic) NSString *logoBackgroundColor; // @synthesize logoBackgroundColor=_logoBackgroundColor;
@property(copy, nonatomic) NSString *remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;	// IMP=0x000000010059a964

@end

