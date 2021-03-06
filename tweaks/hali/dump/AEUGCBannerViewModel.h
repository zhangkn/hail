//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCSliderContainerViewModel.h"

@class AEUGCBannerService, NSArray, NSString;

@interface AEUGCBannerViewModel : NSObject <AEUGCSliderContainerViewModel>
{
    NSArray *_blockitems;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    AEUGCBannerService *_service;	// 24 = 0x18
}

@property(retain, nonatomic) AEUGCBannerService *service; // @synthesize service=_service;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *blockitems; // @synthesize blockitems=_blockitems;
- (void).cxx_destruct;	// IMP=0x000000010065b8a8
- (void)selectBannerAtIndex:(long long)arg1;	// IMP=0x000000010065b4ec
- (id)converBnanerItemViewMode:(id)arg1;	// IMP=0x000000010065b2f8
- (void)getBannerList:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010065b084

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

