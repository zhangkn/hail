//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AECountDownTileComponent, NSString;

@interface AEComponentBigSaleBannerVM : AEBaseTileComponent
{
    NSString *_leftImageViewURL;	// 8 = 0x8
    NSString *_backGroundImageViewURL;	// 16 = 0x10
    NSString *_titleLine1;	// 24 = 0x18
    NSString *_titleLine2;	// 32 = 0x20
    long long _timestamp;	// 40 = 0x28
    AECountDownTileComponent *_componentCountDownVM;	// 48 = 0x30
    NSString *_logoImage;	// 56 = 0x38
    NSString *_logoBackgroundColor;	// 64 = 0x40
    NSString *_logoText;	// 72 = 0x48
}

@property(readonly, copy, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(readonly, copy, nonatomic) NSString *logoBackgroundColor; // @synthesize logoBackgroundColor=_logoBackgroundColor;
@property(readonly, copy, nonatomic) NSString *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, nonatomic) AECountDownTileComponent *componentCountDownVM; // @synthesize componentCountDownVM=_componentCountDownVM;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *titleLine2; // @synthesize titleLine2=_titleLine2;
@property(readonly, copy, nonatomic) NSString *titleLine1; // @synthesize titleLine1=_titleLine1;
@property(readonly, copy, nonatomic) NSString *backGroundImageViewURL; // @synthesize backGroundImageViewURL=_backGroundImageViewURL;
@property(readonly, copy, nonatomic) NSString *leftImageViewURL; // @synthesize leftImageViewURL=_leftImageViewURL;
- (void).cxx_destruct;	// IMP=0x0000000100a14720
- (id)initWithData:(id)arg1;	// IMP=0x0000000100a1430c

@end

