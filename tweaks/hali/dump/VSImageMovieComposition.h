//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageMovie.h"

@class AVAudioMix, AVComposition, AVVideoComposition;

@interface VSImageMovieComposition : VSImageMovie
{
    AVComposition *_compositon;	// 80 = 0x50
    AVVideoComposition *_videoComposition;	// 88 = 0x58
    AVAudioMix *_audioMix;	// 96 = 0x60
}

@property(retain) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(retain) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain) AVComposition *compositon; // @synthesize compositon=_compositon;
- (void).cxx_destruct;	// IMP=0x0000000101adc854
- (id)createAssetReader;	// IMP=0x0000000101adc470
- (id)initWithComposition:(id)arg1 andVideoComposition:(id)arg2 andAudioMix:(id)arg3;	// IMP=0x0000000101adc364

@end
