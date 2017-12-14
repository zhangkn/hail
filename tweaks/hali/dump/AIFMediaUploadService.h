//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AIFMediaUploadService : NSObject
{
    id <AIFMediaUploadServiceDelegate> _delegate;	// 8 = 0x8
    NSString *uploadFileName;	// 16 = 0x10
}

+ (id)generateNameForFileServer2:(id)arg1;	// IMP=0x00000001008bea50
+ (void)maxSizeForUpload:(unsigned long long)arg1 size:(long long *)arg2 width:(long long *)arg3 height:(long long *)arg4;	// IMP=0x00000001008be9f8
@property(readonly, nonatomic) NSString *uploadFileName; // @synthesize uploadFileName;
- (void).cxx_destruct;	// IMP=0x00000001008c04f0
- (id)getUPloadFileNameFromAssetURL:(id)arg1 uploadScene:(unsigned long long)arg2;	// IMP=0x00000001008c0178
- (void)requestUploadMedia:(id)arg1 fileName:(id)arg2 scene:(unsigned long long)arg3 progressBlock:(CDUnknownBlockType)arg4 completeBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000001008bed0c
- (void)requestUploadMedia:(id)arg1 fileName:(id)arg2 scene:(unsigned long long)arg3;	// IMP=0x00000001008becac
- (void)requestUploadMedia:(id)arg1 fileName:(id)arg2;	// IMP=0x00000001008bec58
- (id)getUploadSenceString:(unsigned long long)arg1;	// IMP=0x00000001008beba4
- (id)initWithMediaUploadDelegate:(id)arg1;	// IMP=0x00000001008be980

@end
