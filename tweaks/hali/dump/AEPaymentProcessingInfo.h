//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface AEPaymentProcessingInfo : NSObject <NSCopying>
{
    NSString *_message;	// 8 = 0x8
    NSArray *_orderIds;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010057427c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100574194

@end

