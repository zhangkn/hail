//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCHFBannerCollectionViewCellViewModel.h"

@class AEUGCHFBannerDTO, NSString;

@interface AEUGCHFBannerCollectionViewCellViewModel : NSObject <AEUGCHFBannerCollectionViewCellViewModel>
{
    AEUGCHFBannerDTO *_bannerDTO;	// 8 = 0x8
    NSString *bgImgUrl;	// 16 = 0x10
    NSString *title;	// 24 = 0x18
    NSString *desc;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *bgImgUrl; // @synthesize bgImgUrl;
- (void).cxx_destruct;	// IMP=0x00000001006add74
- (id)initWithBannerDTO:(id)arg1;	// IMP=0x00000001006adbf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
