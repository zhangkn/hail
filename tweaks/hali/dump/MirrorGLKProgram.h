//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface MirrorGLKProgram : NSObject
{
    unsigned int _program;	// 8 = 0x8
    NSDictionary *_uniforms;	// 16 = 0x10
    NSDictionary *_attributes;	// 24 = 0x18
    NSMutableDictionary *_dirtyUniforms;	// 32 = 0x20
    NSMutableDictionary *_samplerBindings;	// 40 = 0x28
    NSMutableDictionary *_samplerXBBindings;	// 48 = 0x30
}

+ (id)defaultYUVProgram;	// IMP=0x0000000101372470
+ (id)defaultProgram;	// IMP=0x0000000101372420
@property(retain, nonatomic) NSMutableDictionary *samplerXBBindings; // @synthesize samplerXBBindings=_samplerXBBindings;
@property(retain, nonatomic) NSMutableDictionary *samplerBindings; // @synthesize samplerBindings=_samplerBindings;
@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
@property(retain, nonatomic) NSMutableDictionary *dirtyUniforms; // @synthesize dirtyUniforms=_dirtyUniforms;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSDictionary *uniforms; // @synthesize uniforms=_uniforms;
- (void).cxx_destruct;	// IMP=0x0000000101373ab8
- (void)prepareToDraw;	// IMP=0x00000001013734d4
- (void)active;	// IMP=0x00000001013734b8
- (void)flushUniform:(id)arg1;	// IMP=0x00000001013730a4
- (id)attributesForProgram:(unsigned int)arg1;	// IMP=0x0000000101372f24
- (id)uniformsForProgram:(unsigned int)arg1;	// IMP=0x0000000101372da4
- (unsigned int)createProgramWithVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101372ba4
- (unsigned int)createShaderWithSource:(id)arg1 type:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000010137296c
- (void)bindSamplerNamed:(id)arg1 toTexture:(unsigned int)arg2 unit:(int)arg3;	// IMP=0x0000000101372834
- (unsigned int)attributeIndex:(id)arg1;	// IMP=0x0000000101372790
- (unsigned int)uniformIndex:(id)arg1;	// IMP=0x00000001013726ec
- (void)bindSamplerNamed:(id)arg1 toXBTexture:(id)arg2 unit:(int)arg3;	// IMP=0x00000001013725cc
- (void)setValue:(void *)arg1 forUniformNamed:(id)arg2;	// IMP=0x00000001013724c0
- (void)dealloc;	// IMP=0x00000001013723cc
- (id)initWithVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 error:(id *)arg3;	// IMP=0x000000010137217c
- (id)initWithVertexShaderFromFile:(id)arg1 fragmentShaderFromFile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101372060

@end

