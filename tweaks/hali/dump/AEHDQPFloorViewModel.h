//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSString;

@interface AEHDQPFloorViewModel : AEBaseTile
{
    NSString *_productId;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_imageUrl;	// 24 = 0x18
    NSString *_displayPrice;	// 32 = 0x20
    NSString *_displayOldPrice;	// 40 = 0x28
    NSString *_requestId;	// 48 = 0x30
    double _hwRatio;	// 56 = 0x38
    long long _pageIndex;	// 64 = 0x40
}

+ (Class)cellClass;	// IMP=0x00000001003c4810
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) double hwRatio; // @synthesize hwRatio=_hwRatio;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *displayOldPrice; // @synthesize displayOldPrice=_displayOldPrice;
@property(retain, nonatomic) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x00000001003c4660
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001003c4460
- (id)layoutAttributesOptions;	// IMP=0x00000001003c444c

@end

