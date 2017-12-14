//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface AEUGCShopNewsPostDetailToolView : UIView
{
    UIButton *_likeButton;	// 8 = 0x8
    UIButton *_commentButton;	// 16 = 0x10
    UIButton *_visitButton;	// 24 = 0x18
    id <AEUGCShopNewsPostDetailToolViewModel> _dataSource;	// 32 = 0x20
    CDUnknownBlockType _likeHandler;	// 40 = 0x28
    CDUnknownBlockType _commentHandler;	// 48 = 0x30
    CDUnknownBlockType _visitHandler;	// 56 = 0x38
}

@property(copy, nonatomic) CDUnknownBlockType visitHandler; // @synthesize visitHandler=_visitHandler;
@property(copy, nonatomic) CDUnknownBlockType commentHandler; // @synthesize commentHandler=_commentHandler;
@property(copy, nonatomic) CDUnknownBlockType likeHandler; // @synthesize likeHandler=_likeHandler;
@property(nonatomic) __weak id <AEUGCShopNewsPostDetailToolViewModel> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100f11ce8
- (void)reloadData;	// IMP=0x0000000100f10b30
- (void)visitAction:(id)arg1;	// IMP=0x0000000100f10ad4
- (void)commentAction:(id)arg1;	// IMP=0x0000000100f10ab4
- (void)likeAction:(id)arg1;	// IMP=0x0000000100f10a94
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f10170

@end
