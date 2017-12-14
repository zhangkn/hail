//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface APIPKVOController : NSObject
{
    NSMapTable *_objectInfosMap;	// 8 = 0x8
    int _lock;	// 16 = 0x10
    id _observer;	// 24 = 0x18
}

+ (id)controllerWithObserver:(id)arg1;	// IMP=0x00000001010de018
@property(readonly, nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;	// IMP=0x00000001010df134
- (void)unobserve:(id)arg1 infos:(id)arg2;	// IMP=0x00000001010def58
- (void)unobserveAll;	// IMP=0x00000001010dedb0
- (void)unobserve:(id)arg1;	// IMP=0x00000001010deb9c
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000001010dea4c
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;	// IMP=0x00000001010de8fc
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001010de784
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000001010de6b8
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;	// IMP=0x00000001010de5ec
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001010de404
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001010de324
- (void)observe:(id)arg1 info:(id)arg2;	// IMP=0x00000001010de198
- (void)dealloc;	// IMP=0x00000001010de148
- (id)initWithObserver:(id)arg1 retainObserved:(_Bool)arg2;	// IMP=0x00000001010de080

@end

