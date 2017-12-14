//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPResponseSerializer.h"

@interface AFImageResponseSerializer : AFHTTPResponseSerializer
{
    _Bool _automaticallyInflatesResponseImage;	// 32 = 0x20
    double _imageScale;	// 40 = 0x28
}

@property(nonatomic) _Bool automaticallyInflatesResponseImage; // @synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008b0c10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001008b0ae0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001008b0980
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000001008b0480
- (id)init;	// IMP=0x00000001008b030c

@end

