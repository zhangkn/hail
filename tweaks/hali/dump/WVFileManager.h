//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager;

@interface WVFileManager : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x0000000101b7564c
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;	// IMP=0x0000000101b75c28
- (_Bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x0000000101b75b64
- (_Bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101b75aa4
- (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101b75a90
- (id)listAllFilesAt:(id)arg1;	// IMP=0x0000000101b75a78
- (_Bool)copyFilesInDirectory:(id)arg1 toDir:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101b75a14
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101b759b0
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101b7594c
- (_Bool)changeCurrentDirectoryPath:(id)arg1;	// IMP=0x0000000101b75934
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101b7591c
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101b75888
- (_Bool)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101b7581c
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101b75804
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101b757ec
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101b757d4
- (_Bool)fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2;	// IMP=0x0000000101b757bc
- (_Bool)fileExistsAtPath:(id)arg1;	// IMP=0x0000000101b757a4
- (void)dealloc;	// IMP=0x0000000101b7574c
- (id)init;	// IMP=0x0000000101b756cc

@end
