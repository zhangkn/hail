//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface AEPaymentConfirmationPayMethodCellVM : NSObject
{
    NSAttributedString *_valueText;	// 8 = 0x8
    NSString *_summary;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSAttributedString *valueText; // @synthesize valueText=_valueText;
- (void).cxx_destruct;	// IMP=0x0000000100567de4
- (double)cellHeightWithWidth:(double)arg1;	// IMP=0x0000000100567bd4
- (id)initWithPaymentVM:(id)arg1;	// IMP=0x0000000100566a50

@end

