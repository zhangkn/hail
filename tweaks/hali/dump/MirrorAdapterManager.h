//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MirrorHudAdapter, MirrorNetworkAdapter, NSDictionary;

@interface MirrorAdapterManager : NSObject
{
    MirrorHudAdapter *_hudAdapter;	// 8 = 0x8
    MirrorNetworkAdapter *_network;	// 16 = 0x10
    NSDictionary *_adapterDic;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010134f80c
@property(retain, nonatomic) NSDictionary *adapterDic; // @synthesize adapterDic=_adapterDic;
@property(retain, nonatomic, setter=setNetworkAdapter:) MirrorNetworkAdapter *network; // @synthesize network=_network;
@property(retain, nonatomic) MirrorHudAdapter *hudAdapter; // @synthesize hudAdapter=_hudAdapter;
- (void).cxx_destruct;	// IMP=0x000000010134fab4
- (void)dealloc;	// IMP=0x000000010134f9a4
- (id)getHudAdaptee;	// IMP=0x000000010134f918
- (id)getNetWorkAdaptee;	// IMP=0x000000010134f88c

@end
