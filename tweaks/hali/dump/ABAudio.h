//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ABAudio : NSObject
{
    NSString *_lastFileName;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *lastFileName; // @synthesize lastFileName=_lastFileName;
- (void).cxx_destruct;	// IMP=0x00000001012cee08
- (void)exit;	// IMP=0x00000001012ced74
- (float)getDuration;	// IMP=0x00000001012cece8
- (void)setVolume:(float)arg1;	// IMP=0x00000001012cec60
- (void)playWithFileName:(id)arg1;	// IMP=0x00000001012cea78
- (void)stop;	// IMP=0x00000001012cea00

@end
