//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AEComponentInfoButton : AETileAdapterView
{
    struct CGSize _bSize;	// 8 = 0x8
    long long _buttonStyle;	// 24 = 0x18
    UIImageView *_buttonImageView;	// 32 = 0x20
    UILabel *_buttonLabel;	// 40 = 0x28
}

@property(retain, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) UIImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;	// IMP=0x0000000100a0b68c
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000100a0b570
- (void)loadIconWithImageUrl:(id)arg1;	// IMP=0x0000000100a0af0c
- (void)toggle:(_Bool)arg1;	// IMP=0x0000000100a0ac54
- (void)toggle;	// IMP=0x0000000100a0abd0
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100a0a8b0
- (Class)viewModelClass;	// IMP=0x0000000100a0a89c
- (void)configConstraints;	// IMP=0x0000000100a09d8c
- (id)initWithSize:(struct CGSize)arg1 style:(long long)arg2;	// IMP=0x0000000100a099fc
- (void)follow;	// IMP=0x00000001002f9bd0

@end
