//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVFSDBManager : NSObject
{
    id <AVFSMonitorDBProtocol> _dbHandler;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001011c5240
+ (id)sharedManger;	// IMP=0x00000001011c5170
@property(retain, nonatomic) id <AVFSMonitorDBProtocol> dbHandler; // @synthesize dbHandler=_dbHandler;
- (void).cxx_destruct;	// IMP=0x00000001011c5864
- (id)execQuery:(id)arg1;	// IMP=0x00000001011c5720
- (_Bool)execUpdate:(id)arg1;	// IMP=0x00000001011c5608
- (_Bool)isTableExists:(id)arg1;	// IMP=0x00000001011c549c
- (void)openDatabase;	// IMP=0x00000001011c533c
- (id)init;	// IMP=0x00000001011c52e0

@end
