//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AECurrencyDTO : NSObject
{
    int _defaultFractionDigits;	// 8 = 0x8
    NSString *_currencyCode;	// 16 = 0x10
    NSString *_symbol;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *symbol; // @synthesize symbol=_symbol;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) int defaultFractionDigits; // @synthesize defaultFractionDigits=_defaultFractionDigits;
- (void).cxx_destruct;	// IMP=0x0000000100047990

@end

