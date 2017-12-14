//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEAutolayoutLabel, NSArray, UIImageView, UILabel;

@interface AETrendingStyleItemsFloor : AETileAdapterFloor
{
    UILabel *_title;	// 8 = 0x8
    AEAutolayoutLabel *_createPrompt;	// 16 = 0x10
    AEAutolayoutLabel *_creatorName;	// 24 = 0x18
    UIImageView *_majorImage;	// 32 = 0x20
    NSArray *_images;	// 40 = 0x28
}

+ (Class)modelClass;	// IMP=0x0000000100426738
+ (id)identifier;	// IMP=0x000000010042670c
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UIImageView *majorImage; // @synthesize majorImage=_majorImage;
@property(retain, nonatomic) AEAutolayoutLabel *creatorName; // @synthesize creatorName=_creatorName;
@property(retain, nonatomic) AEAutolayoutLabel *createPrompt; // @synthesize createPrompt=_createPrompt;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001004287e8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100427b78
- (void)configConstraints;	// IMP=0x0000000100426e40
- (void)configComponents;	// IMP=0x0000000100426810
- (id)initFloor;	// IMP=0x000000010042674c

@end

