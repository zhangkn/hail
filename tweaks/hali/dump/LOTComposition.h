//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTAssetGroup, LOTLayerGroup, NSBundle, NSNumber, NSString;

@interface LOTComposition : NSObject
{
    NSNumber *_startFrame;	// 8 = 0x8
    NSNumber *_endFrame;	// 16 = 0x10
    NSNumber *_framerate;	// 24 = 0x18
    double _timeDuration;	// 32 = 0x20
    LOTLayerGroup *_layerGroup;	// 40 = 0x28
    LOTAssetGroup *_assetGroup;	// 48 = 0x30
    NSString *_rootDirectory;	// 56 = 0x38
    NSBundle *_assetBundle;	// 64 = 0x40
    NSString *_cacheKey;	// 72 = 0x48
    struct CGRect _compBounds;	// 80 = 0x50
}

+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000101cf3a94
+ (id)animationFromJSON:(id)arg1;	// IMP=0x0000000101cf3a00
+ (id)animationWithFilePath:(id)arg1;	// IMP=0x0000000101cf37ac
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000101cf352c
+ (id)animationNamed:(id)arg1;	// IMP=0x0000000101cf3498
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
@property(readonly, nonatomic) LOTAssetGroup *assetGroup; // @synthesize assetGroup=_assetGroup;
@property(readonly, nonatomic) LOTLayerGroup *layerGroup; // @synthesize layerGroup=_layerGroup;
@property(readonly, nonatomic) double timeDuration; // @synthesize timeDuration=_timeDuration;
@property(readonly, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) NSNumber *endFrame; // @synthesize endFrame=_endFrame;
@property(readonly, nonatomic) NSNumber *startFrame; // @synthesize startFrame=_startFrame;
@property(readonly, nonatomic) struct CGRect compBounds; // @synthesize compBounds=_compBounds;
- (void).cxx_destruct;	// IMP=0x0000000101cf4070
- (void)_mapFromJSON:(id)arg1 withAssetBundle:(id)arg2;	// IMP=0x0000000101cf3bb8
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2;	// IMP=0x0000000101cf3b18

@end
