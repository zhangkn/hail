//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Tools : NSObject
{
}

+ (id)sharedTools;	// IMP=0x00000001012d9148
- (id)transformtoSize:(id)arg1 newSize:(struct CGSize)arg2;	// IMP=0x00000001012d9b94
- (struct CGRect)getFaceRectWithTHIDRect:(struct THIDRect)arg1;	// IMP=0x00000001012d9b70
- (struct THIDRect)getFaceTHIDRectWithImage:(id)arg1;	// IMP=0x00000001012d99b4
- (id)getBGRFormBGRA:(char *)arg1 width:(int)arg2 hight:(int)arg3;	// IMP=0x00000001012d9900
- (char *)getBGRImage:(id)arg1;	// IMP=0x00000001012d97d8
- (id)getGrayImage:(id)arg1;	// IMP=0x00000001012d966c
- (char *)convertUIImageToChar:(id)arg1 isScreenVertial:(_Bool)arg2;	// IMP=0x00000001012d9554
- (id)getRotationImageWithYUV420SPMirror:(char *)arg1 width:(int)arg2 hight:(int)arg3 angle:(int)arg4 isMirror:(int)arg5;	// IMP=0x00000001012d9428
- (id)image:(id)arg1 rotation:(long long)arg2;	// IMP=0x00000001012d91a0
- (id)init;	// IMP=0x00000001012d9114

@end

