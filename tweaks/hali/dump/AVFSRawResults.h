//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AVFSRawResults : NSObject
{
    NSMutableArray *_rawResults;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *rawResults; // @synthesize rawResults=_rawResults;
- (void).cxx_destruct;	// IMP=0x00000001011cf994
- (id)columnNameForIndex:(long long)arg1;	// IMP=0x00000001011cf83c
- (id)valueForColumn:(id)arg1 atRow:(long long)arg2;	// IMP=0x00000001011cf718
- (long long)columnCount;	// IMP=0x00000001011cf624
- (long long)rowCount;	// IMP=0x00000001011cf5a0

@end
