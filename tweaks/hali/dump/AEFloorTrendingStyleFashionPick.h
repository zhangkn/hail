//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class NSString, UIImageView, UILabel;

@interface AEFloorTrendingStyleFashionPick : AETileAdapterFloor
{
    UILabel *_dateLabel;	// 8 = 0x8
    UILabel *_titleLable;	// 16 = 0x10
    UIImageView *_avatarImageView;	// 24 = 0x18
    UILabel *_nickNameLabel;	// 32 = 0x20
    UIImageView *_mainImageView;	// 40 = 0x28
    UIImageView *_subFirstImageView;	// 48 = 0x30
    UIImageView *_subSecondImageView;	// 56 = 0x38
    UIImageView *_subThirdImageView;	// 64 = 0x40
    UILabel *_descLable;	// 72 = 0x48
    NSString *_actionUrl;	// 80 = 0x50
}

+ (Class)modelClass;	// IMP=0x0000000100394f9c
+ (id)identifier;	// IMP=0x0000000100394f70
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) UILabel *descLable; // @synthesize descLable=_descLable;
@property(retain, nonatomic) UIImageView *subThirdImageView; // @synthesize subThirdImageView=_subThirdImageView;
@property(retain, nonatomic) UIImageView *subSecondImageView; // @synthesize subSecondImageView=_subSecondImageView;
@property(retain, nonatomic) UIImageView *subFirstImageView; // @synthesize subFirstImageView=_subFirstImageView;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;	// IMP=0x0000000100398ecc
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x000000010039819c
- (void)configConstraints;	// IMP=0x0000000100395624
- (void)configComponents;	// IMP=0x0000000100395054
- (id)initFloor;	// IMP=0x0000000100394fb0

@end
