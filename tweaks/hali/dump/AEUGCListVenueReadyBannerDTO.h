//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEUGCListVenueReadyBannerDTO : NSObject
{
    unsigned long long _bannerId;	// 8 = 0x8
    NSString *_pictureUrl;	// 16 = 0x10
    NSArray *_titles;	// 24 = 0x18
    NSString *_clickUrl;	// 32 = 0x20
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001006b6020
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(nonatomic) unsigned long long bannerId; // @synthesize bannerId=_bannerId;
- (void).cxx_destruct;	// IMP=0x00000001006b6108

@end

