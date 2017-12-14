//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APIPKeychainBindings, NSMutableDictionary;

@interface APIPKeychainBindingsController : NSObject
{
    APIPKeychainBindings *_keychainBindings;	// 8 = 0x8
    NSMutableDictionary *_valueBuffer;	// 16 = 0x10
}

+ (id)sharedKeychainBindingsController;	// IMP=0x00000001010ea9fc
- (void).cxx_destruct;	// IMP=0x00000001010eafac
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 accessibleAttribute:(void *)arg3;	// IMP=0x00000001010eada4
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000001010ead48
- (id)valueForKeyPath:(id)arg1;	// IMP=0x00000001010eabb8
- (id)values;	// IMP=0x00000001010eab58
- (id)keychainBindings;	// IMP=0x00000001010eaab0
- (_Bool)storeString:(id)arg1 forKey:(id)arg2 accessibleAttribute:(void *)arg3;	// IMP=0x00000001010ea6d4
- (_Bool)storeString:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001010ea66c
- (id)stringForKey:(id)arg1;	// IMP=0x00000001010ea510
- (id)serviceName;	// IMP=0x00000001010ea4b4

@end

