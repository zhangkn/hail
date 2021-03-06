//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilterGroup.h"

@class VSImageBuffer, VSImageDissolveBlendFilter;

@interface VSImageLowPassFilter : VSImageFilterGroup
{
    VSImageBuffer *bufferFilter;	// 80 = 0x50
    VSImageDissolveBlendFilter *dissolveBlendFilter;	// 88 = 0x58
    double filterStrength;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000101af45f0
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;	// IMP=0x0000000101af4484
@property(nonatomic) double filterStrength; // @synthesize filterStrength;
- (id)init;	// IMP=0x0000000101af42a8

@end

