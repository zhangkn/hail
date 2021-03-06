//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class UIImage, UIImageView, UIView;

@interface AESplashScreenViewController : AEUIViewController
{
    UIImage *_image;	// 8 = 0x8
    id <AESplashScreenViewControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIImageView *_systemSplashIV;	// 32 = 0x20
    UIImageView *_customizedSplashIV;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
    double timeIntervalInSec;	// 56 = 0x38
    double timeFadeOut;	// 64 = 0x40
    double timePush;	// 72 = 0x48
    double timeStay;	// 80 = 0x50
}

@property(nonatomic) double timeStay; // @synthesize timeStay;
@property(nonatomic) double timePush; // @synthesize timePush;
@property(nonatomic) double timeFadeOut; // @synthesize timeFadeOut;
@property(nonatomic) double timeIntervalInSec; // @synthesize timeIntervalInSec;
- (void).cxx_destruct;	// IMP=0x0000000100417718
- (_Bool)needTrackPage;	// IMP=0x0000000100417690
- (id)pageTrackParams;	// IMP=0x00000001004174bc
- (id)pageTrackName;	// IMP=0x0000000100417490
- (void)timeUp:(id)arg1;	// IMP=0x0000000100416f28
- (id)initWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100416da4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100416c20
- (void)viewDidLoad;	// IMP=0x00000001004168c0
- (double)ratio;	// IMP=0x000000010041685c
- (id)splashImageNameForOrientation:(long long)arg1;	// IMP=0x000000010041656c

@end

