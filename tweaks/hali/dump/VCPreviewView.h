//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEAGLLayer, EAGLContext;

@interface VCPreviewView : UIView
{
    unsigned int _renderBuffer;	// 8 = 0x8
    unsigned int _shaderProgram;	// 12 = 0xc
    unsigned int _vbo;	// 16 = 0x10
    unsigned int _fbo;	// 20 = 0x14
    unsigned int _vao;	// 24 = 0x18
    unsigned int _matrixPos;	// 28 = 0x1c
    int _currentBuffer;	// 32 = 0x20
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _paused
    struct __CVBuffer *_currentRef[2];	// 40 = 0x28
    struct __CVOpenGLESTextureCache *_cache;	// 56 = 0x38
    struct __CVBuffer *_texture[2];	// 64 = 0x40
    _Bool _useFront;	// 80 = 0x50
    int _scrrenOrientation;	// 84 = 0x54
    EAGLContext *_context;	// 88 = 0x58
    CAEAGLLayer *_glLayer;	// 96 = 0x60
}

+ (Class)layerClass;	// IMP=0x00000001016cef34
@property(nonatomic) CAEAGLLayer *glLayer; // @synthesize glLayer=_glLayer;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void)setupGLES;	// IMP=0x00000001016d01a0
- (void)generateGLESBuffers;	// IMP=0x00000001016cffcc
- (void)drawFrame:(struct __CVBuffer *)arg1;	// IMP=0x00000001016cf8b0
- (void)setScrrenOrientation:(int)arg1;	// IMP=0x00000001016cf8a0
- (void)setFrontCamera:(_Bool)arg1;	// IMP=0x00000001016cf890
- (id)snapshotVideoViewWithFrame;	// IMP=0x00000001016cf770
- (void)notification:(id)arg1;	// IMP=0x00000001016cf62c
- (void)layoutSubviews;	// IMP=0x00000001016cf5dc
- (void)dealloc;	// IMP=0x00000001016cf408
- (void)initInternal;	// IMP=0x00000001016cf094
- (void)awakeFromNib;	// IMP=0x00000001016cf040
- (id)init;	// IMP=0x00000001016cefe4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001016cef48

@end

