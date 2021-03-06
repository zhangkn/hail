//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIImage;

@interface YYImageFrame : NSObject <NSCopying>
{
    unsigned long long _index;	// 8 = 0x8
    unsigned long long _width;	// 16 = 0x10
    unsigned long long _height;	// 24 = 0x18
    unsigned long long _offsetX;	// 32 = 0x20
    unsigned long long _offsetY;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    unsigned long long _dispose;	// 56 = 0x38
    unsigned long long _blend;	// 64 = 0x40
    UIImage *_image;	// 72 = 0x48
}

+ (id)frameWithImage:(id)arg1;	// IMP=0x0000000101bc7a44
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long blend; // @synthesize blend=_blend;
@property(nonatomic) unsigned long long dispose; // @synthesize dispose=_dispose;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) unsigned long long offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;	// IMP=0x0000000101bc7d40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101bc7aa8

@end

