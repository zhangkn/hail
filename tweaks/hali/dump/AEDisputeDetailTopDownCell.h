//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AEDisputeTableViewCellProtocol.h"

@class NSString, UILabel;

@interface AEDisputeDetailTopDownCell : UITableViewCell <AEDisputeTableViewCellProtocol>
{
    UILabel *_title1;	// 8 = 0x8
    UILabel *_content1;	// 16 = 0x10
    UILabel *_title2;	// 24 = 0x18
    UILabel *_content2;	// 32 = 0x20
    UILabel *_title3;	// 40 = 0x28
    UILabel *_content3;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *content3; // @synthesize content3=_content3;
@property(retain, nonatomic) UILabel *title3; // @synthesize title3=_title3;
@property(retain, nonatomic) UILabel *content2; // @synthesize content2=_content2;
@property(retain, nonatomic) UILabel *title2; // @synthesize title2=_title2;
@property(retain, nonatomic) UILabel *content1; // @synthesize content1=_content1;
@property(retain, nonatomic) UILabel *title1; // @synthesize title1=_title1;
- (void).cxx_destruct;	// IMP=0x000000010007eb34
- (void)privateLayoutContent3;	// IMP=0x000000010007dd38
- (void)privateLayoutTitle3;	// IMP=0x000000010007d8b0
- (void)privateLayoutContent2;	// IMP=0x000000010007d40c
- (void)privateLayoutTitle2;	// IMP=0x000000010007cf84
- (void)privateLayoutContent1;	// IMP=0x000000010007cae0
- (void)privateLayoutTitle1;	// IMP=0x000000010007c68c
- (void)privateLayoutSubViews;	// IMP=0x000000010007c618
- (void)addSubviews;	// IMP=0x000000010007c3ec
- (void)bindData:(id)arg1;	// IMP=0x000000010007b818
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010007b7a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
