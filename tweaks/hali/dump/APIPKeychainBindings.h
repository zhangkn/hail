//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APIPKeychainBindings : NSObject
{
}

+ (id)sharedKeychainBindings;	// IMP=0x00000001011277d0
- (id)stringForKey:(id)arg1;	// IMP=0x0000000101127d2c
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000101127c74
- (void)setString:(id)arg1 forKey:(id)arg2 accessibleAttribute:(void *)arg3;	// IMP=0x0000000101127b90
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101127ab4
- (void)setObject:(id)arg1 forKey:(id)arg2 accessibleAttribute:(void *)arg3;	// IMP=0x00000001011279d0
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001011278f4
- (id)objectForKey:(id)arg1;	// IMP=0x000000010112782c

@end

