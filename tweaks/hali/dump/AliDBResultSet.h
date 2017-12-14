//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CipherResultSet;

@interface AliDBResultSet : NSObject
{
    CipherResultSet *_cipherResultSet;	// 8 = 0x8
    id _statement;	// 16 = 0x10
    CDUnknownBlockType _finishBlock;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) CipherResultSet *cipherResultSet; // @synthesize cipherResultSet=_cipherResultSet;
@property(retain, nonatomic) id statement; // @synthesize statement=_statement;
- (void).cxx_destruct;	// IMP=0x00000001011b69d8
- (int)columnCount;	// IMP=0x00000001011b694c
- (id)resultDictionary;	// IMP=0x00000001011b6934
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x00000001011b68fc
- (id)objectForColumn:(id)arg1;	// IMP=0x00000001011b68c4
- (id)columnNameForIndex:(int)arg1;	// IMP=0x00000001011b688c
- (int)columnIndexForName:(id)arg1;	// IMP=0x00000001011b6854
- (int)typeForColumnIndex:(int)arg1;	// IMP=0x00000001011b681c
- (int)typeForColumn:(id)arg1;	// IMP=0x00000001011b67e4
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x00000001011b67ac
- (id)dataForColumn:(id)arg1;	// IMP=0x00000001011b6774
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x00000001011b673c
- (id)stringForColumn:(id)arg1;	// IMP=0x00000001011b6704
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x00000001011b66cc
- (double)doubleForColumn:(id)arg1;	// IMP=0x00000001011b6694
- (long long)longLongForColumnIndex:(int)arg1;	// IMP=0x00000001011b665c
- (long long)longLongForColumn:(id)arg1;	// IMP=0x00000001011b6624
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x00000001011b65ec
- (long long)longForColumn:(id)arg1;	// IMP=0x00000001011b65b4
- (int)intForColumnIndex:(int)arg1;	// IMP=0x00000001011b657c
- (int)intForColumn:(id)arg1;	// IMP=0x00000001011b6544
- (_Bool)next;	// IMP=0x00000001011b652c
- (void)close;	// IMP=0x00000001011b6478

@end

