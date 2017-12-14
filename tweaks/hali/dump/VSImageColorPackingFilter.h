//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageColorPackingFilter : VSImageFilter
{
    int texelWidthUniform;	// 176 = 0xb0
    int texelHeightUniform;	// 180 = 0xb4
    double texelWidth;	// 184 = 0xb8
    double texelHeight;	// 192 = 0xc0
}

- (struct CGSize)outputFrameSize;	// IMP=0x0000000101af6264
- (struct CGSize)sizeOfFBO;	// IMP=0x0000000101af61ec
- (void)setupFilterForSize:(struct CGSize)arg1;	// IMP=0x0000000101af60bc
- (id)init;	// IMP=0x0000000101af5fec

@end

