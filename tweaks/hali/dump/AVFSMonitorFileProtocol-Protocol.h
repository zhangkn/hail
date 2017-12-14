//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol AVFSMonitorFileProtocol <NSObject>
- (void)deleteFile:(NSString *)arg1 withName:(NSString *)arg2 withBlock:(void (^)(NSError *))arg3;
- (void)writeFile:(NSString *)arg1 withName:(NSString *)arg2 withData:(NSData *)arg3 withBlock:(void (^)(NSError *))arg4;
- (void)readFile:(NSString *)arg1 withName:(NSString *)arg2 withResult:(void (^)(NSError *, NSData *))arg3;
- (void)registerFile:(void (^)(NSString *, NSString *, int))arg1;

@optional
- (NSArray *)keysWithFileName:(NSString *)arg1;
- (NSString *)storagePath;
- (NSString *)modulePath:(NSString *)arg1;
- (NSString *)filePath:(NSString *)arg1 withName:(NSString *)arg2;
- (void)createFile:(NSString *)arg1 withName:(NSString *)arg2 withBlock:(void (^)(NSError *))arg3;
@end

