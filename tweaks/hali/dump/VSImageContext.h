//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, EAGLSharegroup, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, VSImageFramebufferCache, VSImageGLProgram;

@interface VSImageContext : NSObject
{
    NSMutableDictionary *shaderProgramCache;	// 8 = 0x8
    NSMutableArray *shaderProgramUsageHistory;	// 16 = 0x10
    EAGLSharegroup *_sharegroup;	// 24 = 0x18
    EAGLContext *_context;	// 32 = 0x20
    VSImageGLProgram *_currentShaderProgram;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_contextQueue;	// 48 = 0x30
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;	// 56 = 0x38
    VSImageFramebufferCache *_framebufferCache;	// 64 = 0x40
}

+ (_Bool)supportsFastTextureUpload;	// IMP=0x0000000101ad8ab0
+ (struct CGSize)sizeThatFitsWithinATextureForSize:(struct CGSize)arg1;	// IMP=0x0000000101ad8870
+ (_Bool)deviceSupportsFramebufferReads;	// IMP=0x0000000101ad87fc
+ (_Bool)deviceSupportsRedTextures;	// IMP=0x0000000101ad8788
+ (_Bool)deviceSupportsOpenGLESExtension:(id)arg1;	// IMP=0x0000000101ad8680
+ (int)maximumVaryingVectorsForThisDevice;	// IMP=0x0000000101ad85dc
+ (int)maximumTextureUnitsForThisDevice;	// IMP=0x0000000101ad8538
+ (int)maximumTextureSizeForThisDevice;	// IMP=0x0000000101ad8494
+ (void)setActiveShaderProgram:(id)arg1;	// IMP=0x0000000101ad8338
+ (void)useImageProcessingContext;	// IMP=0x0000000101ad8274
+ (id)sharedFramebufferCache;	// IMP=0x0000000101ad8220
+ (id)sharedContextQueue;	// IMP=0x0000000101ad81cc
+ (id)sharedImageProcessingContext;	// IMP=0x0000000101ad810c
+ (void *)contextKey;	// IMP=0x0000000101ad8100
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) VSImageGLProgram *currentShaderProgram; // @synthesize currentShaderProgram=_currentShaderProgram;
- (void).cxx_destruct;	// IMP=0x0000000101ad8c68
@property(readonly) VSImageFramebufferCache *framebufferCache; // @synthesize framebufferCache=_framebufferCache;
@property(readonly) struct __CVOpenGLESTextureCache *coreVideoTextureCache; // @synthesize coreVideoTextureCache=_coreVideoTextureCache;
@property(readonly, retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (id)createContext;	// IMP=0x0000000101ad8a64
- (void)useSharegroup:(id)arg1;	// IMP=0x0000000101ad8a2c
- (id)programForVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;	// IMP=0x0000000101ad891c
- (void)presentBufferForDisplay;	// IMP=0x0000000101ad88d8
- (void)setContextShaderProgram:(id)arg1;	// IMP=0x0000000101ad83a8
- (void)useAsCurrentContext;	// IMP=0x0000000101ad82bc
- (id)init;	// IMP=0x0000000101ad7fbc

@end

