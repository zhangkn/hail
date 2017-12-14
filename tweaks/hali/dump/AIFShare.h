//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIActivityIndicatorView, UIActivityViewController, UIPopoverController, UIView;

@interface AIFShare : NSObject
{
    UIPopoverController *popOverVC;	// 8 = 0x8
    CDUnknownBlockType _presentBlock;	// 16 = 0x10
    UIActivityViewController *_shareVC;	// 24 = 0x18
    UIView *_locaView;	// 32 = 0x20
    UIActivityIndicatorView *_indicatorView;	// 40 = 0x28
    NSMutableArray *_activityItems;	// 48 = 0x30
    NSMutableArray *_excludedActivityTypes;	// 56 = 0x38
    CDUnknownBlockType _callbackcompleted;	// 64 = 0x40
    struct CGRect _rectPoint;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000100b92370
@property(copy, nonatomic) CDUnknownBlockType callbackcompleted; // @synthesize callbackcompleted=_callbackcompleted;
@property(retain, nonatomic) NSMutableArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(retain, nonatomic) NSMutableArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) struct CGRect rectPoint; // @synthesize rectPoint=_rectPoint;
@property(retain, nonatomic) UIView *locaView; // @synthesize locaView=_locaView;
@property(retain, nonatomic) UIActivityViewController *shareVC; // @synthesize shareVC=_shareVC;
@property(copy, nonatomic) CDUnknownBlockType presentBlock; // @synthesize presentBlock=_presentBlock;
- (void).cxx_destruct;	// IMP=0x0000000100b95898
- (void)showWaiting;	// IMP=0x0000000100b95518
- (void)share:(id)arg1 content:(id)arg2 imageData:(id)arg3 url:(id)arg4 sourceView:(id)arg5 sourceRect:(struct CGRect)arg6 from:(id)arg7 completedBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000100b95324
- (void)share:(id)arg1 imageData:(id)arg2 url:(id)arg3 sourceView:(id)arg4 sourceRect:(struct CGRect)arg5 from:(id)arg6 completedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100b95188
- (void)share:(id)arg1 imageUrl:(id)arg2 url:(id)arg3 sourceView:(id)arg4 sourceRect:(struct CGRect)arg5 from:(id)arg6 completedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100b94fec
- (void)finishShare;	// IMP=0x0000000100b94f74
- (void)callCompletedBlock:(id)arg1;	// IMP=0x0000000100b94e4c
- (void)_doShare:(id)arg1 imageData:(id)arg2 url:(id)arg3 originURL:(id)arg4 from:(id)arg5 withArray:(id)arg6 completedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100b94124
- (void)_doShare:(id)arg1 imageWithURL:(id)arg2 url:(id)arg3 originURL:(id)arg4 from:(id)arg5 withArray:(id)arg6 completedBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100b93628
- (void)share:(id)arg1 content:(id)arg2 imageData:(id)arg3 url:(id)arg4 from:(id)arg5 completedBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100b934f8
- (void)share:(id)arg1 imageData:(id)arg2 url:(id)arg3 from:(id)arg4 completedBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100b93090
- (int)needShorterLength;	// IMP=0x0000000100b93088
- (void)share:(id)arg1 imageUrl:(id)arg2 url:(id)arg3 from:(id)arg4 completedBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000100b9249c
- (void)share:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b92430
- (void)enterBackground;	// IMP=0x0000000100b92424
- (id)init;	// IMP=0x0000000100b91c20

@end
