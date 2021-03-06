//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CreditCardHelperProtocol.h"

@class NSString;

@interface CreditCardHelper : NSObject <CreditCardHelperProtocol>
{
}

+ (id)validateCPFNumber:(id)arg1 cardType:(long long)arg2;	// IMP=0x000000010062a940
+ (id)validateCardSecurityCode:(id)arg1 cardNumber:(id)arg2;	// IMP=0x000000010062a5fc
+ (id)validateCardNumer:(id)arg1;	// IMP=0x000000010062a29c
+ (id)validateCardExpirationMonth:(id)arg1 Year:(id)arg2;	// IMP=0x0000000100629834
+ (id)cardTypeStringForType:(long long)arg1;	// IMP=0x000000010062972c
+ (id)cardNumberLengthRangeOfType:(long long)arg1;	// IMP=0x0000000100628e08
+ (unsigned long long)cardNumberMinLengthOfType:(long long)arg1;	// IMP=0x0000000100628de8
+ (long long)cardTypeFromString:(id)arg1;	// IMP=0x0000000100628c10
+ (_Bool)validateCardNumber:(id)arg1;	// IMP=0x0000000100628ba0
+ (_Bool)validateCardNumber:(id)arg1 ofType:(long long)arg2;	// IMP=0x0000000100628b1c
+ (id)formatString:(id)arg1 byCardType:(long long)arg2;	// IMP=0x00000001006288d0
+ (id)spacePositionsByType:(long long)arg1;	// IMP=0x00000001006285a8
+ (_Bool)isLuhnValid:(id)arg1;	// IMP=0x0000000100628478
+ (long long)possibleTypeForNumber:(id)arg1;	// IMP=0x00000001006281a8
+ (void)initialize;	// IMP=0x0000000100627c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

