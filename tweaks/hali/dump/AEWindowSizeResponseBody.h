//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEResponseBody.h"

@interface AEWindowSizeResponseBody : AEResponseBody
{
    float _width;	// 8 = 0x8
    float _height;	// 12 = 0xc
}

@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (id)serialize;	// IMP=0x0000000100b9dff0

@end

