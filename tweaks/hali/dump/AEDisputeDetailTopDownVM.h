//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEDisputeDetailTopDownVM : NSObject
{
    NSString *_title1;	// 8 = 0x8
    NSString *_content1;	// 16 = 0x10
    NSString *_title2;	// 24 = 0x18
    NSString *_content2;	// 32 = 0x20
    NSString *_title3;	// 40 = 0x28
    NSString *_content3;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *content3; // @synthesize content3=_content3;
@property(retain, nonatomic) NSString *title3; // @synthesize title3=_title3;
@property(retain, nonatomic) NSString *content2; // @synthesize content2=_content2;
@property(retain, nonatomic) NSString *title2; // @synthesize title2=_title2;
@property(retain, nonatomic) NSString *content1; // @synthesize content1=_content1;
@property(retain, nonatomic) NSString *title1; // @synthesize title1=_title1;
- (void).cxx_destruct;	// IMP=0x000000010007f874
- (void)bindData:(id)arg1;	// IMP=0x000000010007f498
- (void)bindShipTrackingWithData:(id)arg1;	// IMP=0x000000010007f26c
- (void)bindReturnShippingAddressWithData:(id)arg1;	// IMP=0x000000010007ed38
- (id)initWithShipTracking:(id)arg1;	// IMP=0x000000010007ecc0
- (id)initWithShippingAddress:(id)arg1;	// IMP=0x000000010007ec48
- (id)initWithData:(id)arg1;	// IMP=0x000000010007ebd0

@end

