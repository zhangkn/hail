//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECoinsBadgeItemDTO, UILabel, UIScrollView;

@interface AECoinsDailyBadgesView : UIView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UILabel *_badgesLabel;	// 16 = 0x10
    AECoinsBadgeItemDTO *_itemDTO;	// 24 = 0x18
}

@property(retain, nonatomic) AECoinsBadgeItemDTO *itemDTO; // @synthesize itemDTO=_itemDTO;
@property(retain, nonatomic) UILabel *badgesLabel; // @synthesize badgesLabel=_badgesLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;	// IMP=0x00000001007ebff0
- (id)rotationA2;	// IMP=0x00000001007ebe10
- (id)roationAnimation;	// IMP=0x00000001007ebce8
- (void)reloadData;	// IMP=0x00000001007eaef4
- (void)buildUI;	// IMP=0x00000001007ea818
- (id)initWithDTO:(id)arg1;	// IMP=0x00000001007ea608

@end

