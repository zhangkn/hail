//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface LOTAssetGroup : NSObject
{
    NSMutableDictionary *_assetMap;	// 8 = 0x8
    NSDictionary *_assetJSONMap;	// 16 = 0x10
    NSString *_rootDirectory;	// 24 = 0x18
    NSBundle *_assetBundle;	// 32 = 0x20
}

@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (void).cxx_destruct;	// IMP=0x0000000101cf17b0
- (id)assetModelForID:(id)arg1;	// IMP=0x0000000101cf1694
- (void)finalizeInitialization;	// IMP=0x0000000101cf1558
- (void)buildAssetNamed:(id)arg1;	// IMP=0x0000000101cf1468
- (id)initWithJSON:(id)arg1 withAssetBundle:(id)arg2;	// IMP=0x0000000101cf1208

@end

