//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileCell.h"

#import "TileEventHandler.h"

@class NSString, UIImageView, UIView;

@interface AEPaymentPoplayerTitleCell : AEBaseTileCell <TileEventHandler>
{
    UIImageView *_largeGiftImage;	// 8 = 0x8
    UIImageView *_giftIcon;	// 16 = 0x10
    UIImageView *_closeBtn;	// 24 = 0x18
    UIView *_userGiftView;	// 32 = 0x20
    double _largeImageRatio;	// 40 = 0x28
}

@property(nonatomic) double largeImageRatio; // @synthesize largeImageRatio=_largeImageRatio;
@property(retain, nonatomic) UIView *userGiftView; // @synthesize userGiftView=_userGiftView;
@property(retain, nonatomic) UIImageView *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *giftIcon; // @synthesize giftIcon=_giftIcon;
@property(retain, nonatomic) UIImageView *largeGiftImage; // @synthesize largeGiftImage=_largeGiftImage;
- (void).cxx_destruct;	// IMP=0x00000001005727d8
- (void)dealloc;	// IMP=0x000000010057261c
- (void)didReceiveVCTransitionNotification:(id)arg1;	// IMP=0x0000000100572610
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100572424
- (void)renderWithTile:(id)arg1;	// IMP=0x0000000100571f60
- (void)dismissUserGift;	// IMP=0x0000000100571de4
- (void)showUserGift;	// IMP=0x0000000100571594
- (void)setupUI;	// IMP=0x0000000100570ff0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100570f48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

