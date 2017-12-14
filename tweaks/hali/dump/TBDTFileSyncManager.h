//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TBDTFileSyncManager : NSObject
{
    NSArray *_syncFilesConfig;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010164f0ec
@property(readonly, nonatomic) NSArray *syncFilesConfig; // @synthesize syncFilesConfig=_syncFilesConfig;
- (void).cxx_destruct;	// IMP=0x0000000101650290
- (id)taskConfigOfURL:(id)arg1;	// IMP=0x00000001016500d8
- (void)syncFilesWithConfig:(id)arg1;	// IMP=0x000000010164fb3c
- (void)markTaskFinished:(id)arg1;	// IMP=0x000000010164fabc
- (_Bool)needDownloadTask:(id)arg1;	// IMP=0x000000010164f7a4
- (void)clearInvalidFiles;	// IMP=0x000000010164f35c
- (void)syncPreDownloadRecord;	// IMP=0x000000010164f2c0
- (id)preDownloadRecord;	// IMP=0x000000010164f1a4
- (id)init;	// IMP=0x000000010164f16c

@end
