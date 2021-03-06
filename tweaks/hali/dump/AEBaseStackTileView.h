//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StackTileView.h"

#import "AETileDisplayDelegate.h"

@class NSString, UIImageView;

@interface AEBaseStackTileView : StackTileView <AETileDisplayDelegate>
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;	// IMP=0x00000001009ea514
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000001009ea404
- (void)layoutSubviews;	// IMP=0x00000001009ea380
- (void)prepareForReuse;	// IMP=0x00000001009ea2d0
- (void)renderWithTile:(id)arg1;	// IMP=0x00000001009e9ec4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009e9e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

