//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AEModuleUGCiTaoProfileCellViewModel, NSRegularExpression;

@interface AEUGCCollectionViewBaseCell : UICollectionViewCell
{
    CDUnknownBlockType _actionLike;	// 8 = 0x8
    CDUnknownBlockType _actionComment;	// 16 = 0x10
    CDUnknownBlockType _actionRepost;	// 24 = 0x18
    CDUnknownBlockType _actionMenu;	// 32 = 0x20
    AEModuleUGCiTaoProfileCellViewModel *_viewModel;	// 40 = 0x28
    NSRegularExpression *_hashTagRegularExpression;	// 48 = 0x30
}

@property(retain, nonatomic) NSRegularExpression *hashTagRegularExpression; // @synthesize hashTagRegularExpression=_hashTagRegularExpression;
@property(retain, nonatomic) AEModuleUGCiTaoProfileCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType actionMenu; // @synthesize actionMenu=_actionMenu;
@property(copy, nonatomic) CDUnknownBlockType actionRepost; // @synthesize actionRepost=_actionRepost;
@property(copy, nonatomic) CDUnknownBlockType actionComment; // @synthesize actionComment=_actionComment;
@property(copy, nonatomic) CDUnknownBlockType actionLike; // @synthesize actionLike=_actionLike;
- (void).cxx_destruct;	// IMP=0x0000000100e5c384
- (id)drawBackgroundBySize:(struct CGSize)arg1 cornerRadius:(double)arg2;	// IMP=0x0000000100e5c0fc
- (void)freshText:(id)arg1 label:(id)arg2;	// IMP=0x0000000100e5bf6c
- (void)freshImageView:(id)arg1 imageView:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x0000000100e5b960
- (void)setIsLikeByMe:(_Bool)arg1 likeCount:(long long)arg2 likeBtn:(id)arg3;	// IMP=0x0000000100e5b84c
- (void)bindViewModel:(id)arg1;	// IMP=0x0000000100e5b848
- (void)onRepost;	// IMP=0x0000000100e5b844
- (void)onComment;	// IMP=0x0000000100e5b840
- (void)onLike;	// IMP=0x0000000100e5b83c

@end
