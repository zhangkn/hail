//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEPhotoSearchCropVCDelegate.h"
#import "AIFExposureProtocol.h"

@class AEPhotoSearchRegion, AEPhotoSearchService, NSArray, NSDictionary, NSMutableDictionary, NSString, UIImage;

@interface AEPhotoSearchListVCViewModel : NSObject <AIFExposureProtocol, AEPhotoSearchCropVCDelegate>
{
    NSString *_categoryID;	// 8 = 0x8
    _Bool _needForceReload;	// 16 = 0x10
    UIImage *_majorImage;	// 24 = 0x18
    UIImage *_realImage;	// 32 = 0x20
    NSArray *_categoryNames;	// 40 = 0x28
    NSArray *_items;	// 48 = 0x30
    AEPhotoSearchRegion *_region;	// 56 = 0x38
    NSString *_pageTrackName;	// 64 = 0x40
    NSDictionary *_pageTrackParams;	// 72 = 0x48
    NSString *_sceneId;	// 80 = 0x50
    NSString *_streamId;	// 88 = 0x58
    AEPhotoSearchService *_dataService;	// 96 = 0x60
    NSString *_imageNameOnServer;	// 104 = 0x68
    NSArray *_categories;	// 112 = 0x70
    NSMutableDictionary *_itemsCache;	// 120 = 0x78
}

@property(retain, nonatomic) NSMutableDictionary *itemsCache; // @synthesize itemsCache=_itemsCache;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *imageNameOnServer; // @synthesize imageNameOnServer=_imageNameOnServer;
@property(retain, nonatomic) AEPhotoSearchService *dataService; // @synthesize dataService=_dataService;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(copy, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(copy, nonatomic) NSDictionary *pageTrackParams; // @synthesize pageTrackParams=_pageTrackParams;
@property(copy, nonatomic) NSString *pageTrackName; // @synthesize pageTrackName=_pageTrackName;
@property(nonatomic) _Bool needForceReload; // @synthesize needForceReload=_needForceReload;
@property(retain, nonatomic) AEPhotoSearchRegion *region; // @synthesize region=_region;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSArray *categoryNames; // @synthesize categoryNames=_categoryNames;
@property(retain, nonatomic) UIImage *realImage; // @synthesize realImage=_realImage;
@property(retain, nonatomic) UIImage *majorImage; // @synthesize majorImage=_majorImage;
- (void).cxx_destruct;	// IMP=0x0000000100c7cf68
- (id)currentCategoryId;	// IMP=0x0000000100c7ccd8
- (void)trackEditPhoto;	// IMP=0x0000000100c7ccb8
- (void)trackGoBack;	// IMP=0x0000000100c7cbec
- (void)trackCategoryIndexChange:(long long)arg1;	// IMP=0x0000000100c7caf8
- (id)additionalParaForExposure;	// IMP=0x0000000100c7ca44
- (void)endExposure;	// IMP=0x0000000100c7ca04
- (void)startExposure;	// IMP=0x0000000100c7c9c4
- (void)markCellAtIndex:(id)arg1 show:(_Bool)arg2;	// IMP=0x0000000100c7c868
- (id)exposureType;	// IMP=0x0000000100c7c850
- (void)croppedImage:(id)arg1 fsUrl:(id)arg2 rect:(struct CGRect)arg3;	// IMP=0x0000000100c7c520
- (id)errorMessageFromError:(id)arg1;	// IMP=0x0000000100c7c50c
- (void)searchProductsFromPhoto:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100c7bbb4
- (void)searchProductsFromDefaultPhotoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100c7bb1c
- (void)categoryChangedTo:(long long)arg1;	// IMP=0x0000000100c7ba3c
- (void)invalidCategoryCache;	// IMP=0x0000000100c7b984
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100c7b758
- (id)init;	// IMP=0x0000000100c7b6e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
