//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEProductDetailCountDownBannerViewModel : NSObject
{
    NSString *_imageUrl;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subTitle;	// 24 = 0x18
    double _remainingTime;	// 32 = 0x20
    NSString *_descriptionText;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;	// IMP=0x000000010059d418

@end

