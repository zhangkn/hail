//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ACRouter : NSObject
{
    NSMutableDictionary *_matchOptionsPool;	// 8 = 0x8
    NSMutableDictionary *_entities;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001009e905c
@property(retain, nonatomic) NSMutableDictionary *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) NSMutableDictionary *matchOptionsPool; // @synthesize matchOptionsPool=_matchOptionsPool;
- (void).cxx_destruct;	// IMP=0x00000001009e98e8
- (void)registerViewController:(id)arg1 andTabViewController:(id)arg2 forSceneId:(id)arg3 withMatchOption:(long long)arg4;	// IMP=0x00000001009e9610
- (id)registeredEntityForSceneId:(id)arg1;	// IMP=0x00000001009e931c
- (id)viewControllerForDisplayingWithSceneId:(id)arg1;	// IMP=0x00000001009e926c
- (void)registerViewController:(id)arg1 forSceneId:(id)arg2 withMatchOption:(long long)arg3;	// IMP=0x00000001009e9210
- (id)viewControllerWithSceneId:(id)arg1;	// IMP=0x00000001009e91a0
- (id)init;	// IMP=0x00000001009e90dc

@end

