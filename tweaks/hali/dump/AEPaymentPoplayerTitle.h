//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent;

@interface AEPaymentPoplayerTitle : AEBaseTile
{
    _Bool _showUserGiftAutomatically;	// 8 = 0x8
    AEImageTileComponent *_largeGiftImageModel;	// 16 = 0x10
    AEImageTileComponent *_giftIconModel;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x0000000100570c44
@property(nonatomic) _Bool showUserGiftAutomatically; // @synthesize showUserGiftAutomatically=_showUserGiftAutomatically;
@property(retain, nonatomic) AEImageTileComponent *giftIconModel; // @synthesize giftIconModel=_giftIconModel;
@property(retain, nonatomic) AEImageTileComponent *largeGiftImageModel; // @synthesize largeGiftImageModel=_largeGiftImageModel;
- (void).cxx_destruct;	// IMP=0x0000000100570f08
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100570e50
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100570c58

@end

