//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ALAssetsGroup, NSArray;

@interface WVAlbumThumbnailView : UIView
{
    ALAssetsGroup *_assetsGroup;	// 8 = 0x8
    NSArray *_thumbnailImages;	// 16 = 0x10
}

@property(copy, nonatomic) NSArray *thumbnailImages; // @synthesize thumbnailImages=_thumbnailImages;
@property(retain, nonatomic) ALAssetsGroup *assetsGroup; // @synthesize assetsGroup=_assetsGroup;
- (void).cxx_destruct;	// IMP=0x0000000101b11444
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000101b10f48
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000101b10f34
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101b10eb0

@end
