//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "AEMobileRechargeViewComponent.h"

@class NSString, UILabel;

@interface AEMobileRechargeTextView : UICollectionReusableView <AEMobileRechargeViewComponent>
{
    UILabel *_textLabel;	// 8 = 0x8
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;	// IMP=0x000000010051d380
- (void)bindModel:(id)arg1;	// IMP=0x000000010051d29c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010051cf74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

