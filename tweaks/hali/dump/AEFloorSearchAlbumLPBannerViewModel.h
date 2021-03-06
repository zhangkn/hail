//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSString, UIColor;

@interface AEFloorSearchAlbumLPBannerViewModel : AEBaseTile
{
    NSString *_albumTitle;	// 8 = 0x8
    NSString *_albumSubTitle;	// 16 = 0x10
    UIColor *_albumBackgroundColor;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x0000000100bee36c
@property(copy, nonatomic) UIColor *albumBackgroundColor; // @synthesize albumBackgroundColor=_albumBackgroundColor;
@property(copy, nonatomic) NSString *albumSubTitle; // @synthesize albumSubTitle=_albumSubTitle;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
- (void).cxx_destruct;	// IMP=0x0000000100bee1f8
- (id)initWithAlbumTitle:(id)arg1 subTitle:(id)arg2 backgroundColor:(id)arg3;	// IMP=0x0000000100bee024

@end

