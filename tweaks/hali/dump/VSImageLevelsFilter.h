//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageLevelsFilter : VSImageFilter
{
    int minUniform;	// 176 = 0xb0
    int midUniform;	// 180 = 0xb4
    int maxUniform;	// 184 = 0xb8
    int minOutputUniform;	// 188 = 0xbc
    int maxOutputUniform;	// 192 = 0xc0
    struct VSVector3 minVector;	// 196 = 0xc4
    struct VSVector3 midVector;	// 208 = 0xd0
    struct VSVector3 maxVector;	// 220 = 0xdc
    struct VSVector3 minOutputVector;	// 232 = 0xe8
    struct VSVector3 maxOutputVector;	// 244 = 0xf4
}

- (void)setBlueMin:(double)arg1 gamma:(double)arg2 max:(double)arg3;	// IMP=0x0000000101ab9e80
- (void)setBlueMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;	// IMP=0x0000000101ab9e10
- (void)setGreenMin:(double)arg1 gamma:(double)arg2 max:(double)arg3;	// IMP=0x0000000101ab9dfc
- (void)setGreenMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;	// IMP=0x0000000101ab9d8c
- (void)setRedMin:(double)arg1 gamma:(double)arg2 max:(double)arg3;	// IMP=0x0000000101ab9d78
- (void)setRedMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;	// IMP=0x0000000101ab9d1c
- (void)setMin:(double)arg1 gamma:(double)arg2 max:(double)arg3;	// IMP=0x0000000101ab9d08
- (void)setMin:(double)arg1 gamma:(double)arg2 max:(double)arg3 minOut:(double)arg4 maxOut:(double)arg5;	// IMP=0x0000000101ab9c70
- (void)updateUniforms;	// IMP=0x0000000101ab9b50
- (id)init;	// IMP=0x0000000101ab99b0

@end
