//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSDatabaseQueue, NSString;

@interface AVFSSQLiteStore : NSObject
{
    AVFSDatabaseQueue *_database;	// 8 = 0x8
    AVFSDatabaseQueue *_encryptDatabase;	// 16 = 0x10
    NSString *_moduleName;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;	// IMP=0x00000001011ead90
- (void)setEncryptData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001011eab40
- (id)getEncryptDataForKey:(id)arg1;	// IMP=0x00000001011ea858
- (id)encryptDatabase;	// IMP=0x00000001011ea6b0
- (id)database;	// IMP=0x00000001011ea508
- (id)getDataInfosEarlierThanTime:(long long)arg1;	// IMP=0x00000001011ea1c8
- (id)getDataInfosOrderedByTimeWithLimit:(unsigned long long)arg1;	// IMP=0x00000001011e9e4c
- (unsigned long long)totalByte;	// IMP=0x00000001011e9bb8
- (unsigned long long)totalCount;	// IMP=0x00000001011e9924
- (id)allkeys;	// IMP=0x00000001011e9630
- (void)removeAllData;	// IMP=0x00000001011e9250
- (_Bool)cleanDataForKey:(id)arg1;	// IMP=0x00000001011e8f18
- (void)removeDataForKey:(id)arg1;	// IMP=0x00000001011e8a9c
- (id)setData:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 profileInfo:(id *)arg4;	// IMP=0x00000001011e8324
- (id)setData:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001011e82b8
- (id)getDataForKey:(id)arg1 error:(id *)arg2 profileInfo:(id *)arg3;	// IMP=0x00000001011e79ac
- (id)getDataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000001011e799c
- (_Bool)containsDataForKey:(id)arg1;	// IMP=0x00000001011e7704
- (id)initWithModule:(id)arg1;	// IMP=0x00000001011e764c

@end

