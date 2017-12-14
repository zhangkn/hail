//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter;

@interface AEUnderKeyboardObserver : NSObject
{
    NSNotificationCenter *_center;	// 8 = 0x8
    CDUnknownBlockType _willAnimateKeyboard;	// 16 = 0x10
    CDUnknownBlockType _animateKeyboard;	// 24 = 0x18
    double _currentKeyboardHeight;	// 32 = 0x20
}

@property(readonly, nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(copy, nonatomic) CDUnknownBlockType animateKeyboard; // @synthesize animateKeyboard=_animateKeyboard;
@property(copy, nonatomic) CDUnknownBlockType willAnimateKeyboard; // @synthesize willAnimateKeyboard=_willAnimateKeyboard;
- (void).cxx_destruct;	// IMP=0x0000000100623284
- (void)keyboardNotification:(id)arg1;	// IMP=0x0000000100622ee4
- (void)stopObserve;	// IMP=0x0000000100622ec4
- (void)startObserve;	// IMP=0x0000000100622e38
- (void)dealloc;	// IMP=0x0000000100622de8
- (id)init;	// IMP=0x0000000100622d6c

@end

