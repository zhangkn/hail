//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class AFHTTPSessionManager;

@interface UIWebView (AFNetworking)
- (void)loadRequest:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 progress:(id *)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;	// IMP=0x00000001008bc01c
- (void)loadRequest:(id)arg1 progress:(id *)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;	// IMP=0x00000001008bbdcc
- (void)setResponseSerializer:(id)arg1;	// IMP=0x00000001008bbdbc
- (id)responseSerializer;	// IMP=0x00000001008bbcfc
@property(retain, nonatomic) AFHTTPSessionManager *sessionManager;
@end

