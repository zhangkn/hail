//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AERStoreDTOV1 : NSObject
{
    NSString *_language;	// 8 = 0x8
    NSString *_currency;	// 16 = 0x10
    NSArray *_floors;	// 24 = 0x18
    NSString *_companyId;	// 32 = 0x20
    NSString *_adminSeq;	// 40 = 0x28
    NSString *_storeNo;	// 48 = 0x30
}

+ (id)objectClassInArray;	// IMP=0x0000000100d395b0
@property(copy, nonatomic) NSString *storeNo; // @synthesize storeNo=_storeNo;
@property(copy, nonatomic) NSString *adminSeq; // @synthesize adminSeq=_adminSeq;
@property(copy, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(retain, nonatomic) NSArray *floors; // @synthesize floors=_floors;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;	// IMP=0x0000000100d396e8

@end
