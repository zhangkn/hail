//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEAppShareResource : NSObject
{
    int _currentHostAppType;	// 8 = 0x8
}

@property(nonatomic) int currentHostAppType; // @synthesize currentHostAppType=_currentHostAppType;
- (void)deleteObjectForKey:(id)arg1;	// IMP=0x000000010103bf84
- (id)readDataForKey:(id)arg1;	// IMP=0x000000010103be8c
- (void)writeDataObject:(id)arg1 key:(id)arg2;	// IMP=0x000000010103bd10
- (void)readDataForKey:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000010103bb94
- (id)initWithAppHostType:(int)arg1;	// IMP=0x000000010103bb34

@end

