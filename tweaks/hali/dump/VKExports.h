//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber;

@interface VKExports : VKApiObject
{
    NSNumber *_twitter;	// 8 = 0x8
    NSNumber *_facebook;	// 16 = 0x10
    NSNumber *_livejournal;	// 24 = 0x18
    NSNumber *_instagram;	// 32 = 0x20
}

@property(retain, nonatomic) NSNumber *instagram; // @synthesize instagram=_instagram;
@property(retain, nonatomic) NSNumber *livejournal; // @synthesize livejournal=_livejournal;
@property(retain, nonatomic) NSNumber *facebook; // @synthesize facebook=_facebook;
@property(retain, nonatomic) NSNumber *twitter; // @synthesize twitter=_twitter;
- (void).cxx_destruct;	// IMP=0x000000010097e2bc

@end
