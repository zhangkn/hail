//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class AEComponentInfoButton, UIImageView, UIView;

@interface AEComponentFollowBottom : AETileAdapterView
{
    AEComponentInfoButton *_followButton;	// 8 = 0x8
    UIImageView *_closeImageButton;	// 16 = 0x10
    UIView *_topLine;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *closeImageButton; // @synthesize closeImageButton=_closeImageButton;
@property(retain, nonatomic) AEComponentInfoButton *followButton; // @synthesize followButton=_followButton;
- (void).cxx_destruct;	// IMP=0x0000000100a02544
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100a02064
- (void)prepareForReuse;	// IMP=0x0000000100a02060
- (Class)viewModelClass;	// IMP=0x0000000100a0204c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100a016c4

@end

