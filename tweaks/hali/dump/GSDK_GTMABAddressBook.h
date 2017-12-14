//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSDK_GTMABAddressBook : NSObject
{
    void *addressBook_;	// 8 = 0x8
}

+ (id)localizedLabel:(id)arg1;	// IMP=0x000000010092783c
+ (id)addressBook;	// IMP=0x0000000100926f68
- (id)groupsWithCompositeNameWithPrefix:(id)arg1;	// IMP=0x00000001009276c0
- (id)peopleWithCompositeNameWithPrefix:(id)arg1;	// IMP=0x000000010092754c
- (id)groupForId:(int)arg1;	// IMP=0x0000000100927500
- (id)personForId:(int)arg1;	// IMP=0x00000001009274b4
- (void *)addressBookRef;	// IMP=0x00000001009274a4
- (id)groups;	// IMP=0x0000000100927334
- (id)people;	// IMP=0x00000001009271c4
- (_Bool)removeRecord:(id)arg1;	// IMP=0x0000000100927154
- (_Bool)addRecord:(id)arg1;	// IMP=0x00000001009270e4
- (_Bool)hasUnsavedChanges;	// IMP=0x00000001009270d4
- (_Bool)save;	// IMP=0x0000000100927088
- (void)dealloc;	// IMP=0x0000000100927030
- (id)init;	// IMP=0x0000000100926f98

@end

