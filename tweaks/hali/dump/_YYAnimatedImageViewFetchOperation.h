//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class UIImage<YYAnimatedImage>, YYAnimatedImageView;

@interface _YYAnimatedImageViewFetchOperation : NSOperation
{
    YYAnimatedImageView *_view;	// 24 = 0x18
    unsigned long long _nextIndex;	// 32 = 0x20
    UIImage<YYAnimatedImage> *_curImage;	// 40 = 0x28
}

@property(retain, nonatomic) UIImage<YYAnimatedImage> *curImage; // @synthesize curImage=_curImage;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) __weak YYAnimatedImageView *view; // @synthesize view=_view;
- (void).cxx_destruct;	// IMP=0x0000000101bc1bec
- (void)main;	// IMP=0x0000000101bc17f8

@end
