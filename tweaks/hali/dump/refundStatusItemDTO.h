//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface refundStatusItemDTO : NSObject
{
    NSString *_statusTitle;	// 8 = 0x8
    NSArray *_refundItemList;	// 16 = 0x10
}

+ (id)objectClassInArray;	// IMP=0x000000010020d8f4
@property(retain, nonatomic) NSArray *refundItemList; // @synthesize refundItemList=_refundItemList;
@property(retain, nonatomic) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
- (void).cxx_destruct;	// IMP=0x000000010020da08

@end
