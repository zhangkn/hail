//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer;

@interface ImhtPlayAudio : NSObject
{
    AVAudioPlayer *_audioPlayer;	// 8 = 0x8
}

+ (id)sharedAudioPlayer;	// IMP=0x00000001012d0654
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;	// IMP=0x00000001012d0e28
- (void)setVolume:(float)arg1;	// IMP=0x00000001012d0d4c
- (void)playWithFileName:(id)arg1;	// IMP=0x00000001012d0b98
- (void)setplayURL:(id)arg1;	// IMP=0x00000001012d0a68
- (void)setplayData:(id)arg1;	// IMP=0x00000001012d092c
- (void)exit;	// IMP=0x00000001012d08c4
- (void)stop;	// IMP=0x00000001012d0844
- (void)play;	// IMP=0x00000001012d0798
- (float)getDuration;	// IMP=0x00000001012d0708
- (id)init;	// IMP=0x00000001012d06d4

@end

