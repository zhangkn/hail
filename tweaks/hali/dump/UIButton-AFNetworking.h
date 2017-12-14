//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UIButton (AFNetworking)
+ (void)setSharedImageDownloader:(id)arg1;	// IMP=0x00000001008b90cc
+ (id)sharedImageDownloader;	// IMP=0x00000001008b9058
- (_Bool)isActiveBackgroundTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000001008ba27c
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000001008ba114
- (void)cancelBackgroundImageDownloadTaskForState:(unsigned long long)arg1;	// IMP=0x00000001008ba074
- (void)cancelImageDownloadTaskForState:(unsigned long long)arg1;	// IMP=0x00000001008b9fd4
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x00000001008b9938
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;	// IMP=0x00000001008b9868
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2;	// IMP=0x00000001008b9858
- (void)setImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;	// IMP=0x00000001008b91bc
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;	// IMP=0x00000001008b90ec
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2;	// IMP=0x00000001008b90dc
@end

