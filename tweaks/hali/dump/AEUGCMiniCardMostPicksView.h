//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUGCMiniCardDoubleLabelHeadView, AEUGCMiniCardPicTextView;

@interface AEUGCMiniCardMostPicksView : UIView
{
    AEUGCMiniCardDoubleLabelHeadView *_headView;	// 8 = 0x8
    AEUGCMiniCardPicTextView *_priceView;	// 16 = 0x10
}

@property(retain, nonatomic) AEUGCMiniCardPicTextView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) AEUGCMiniCardDoubleLabelHeadView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;	// IMP=0x000000010078afdc
- (void)initView;	// IMP=0x000000010078aa74
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010078aa1c

@end

