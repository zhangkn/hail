//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AEProductPropertyDTO : NSObject
{
    NSString *_attrName;	// 8 = 0x8
    NSString *_attrValue;	// 16 = 0x10
    NSNumber *_attrNameId;	// 24 = 0x18
    NSString *_attrValueId;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *attrValueId; // @synthesize attrValueId=_attrValueId;
@property(retain, nonatomic) NSNumber *attrNameId; // @synthesize attrNameId=_attrNameId;
@property(retain, nonatomic) NSString *attrValue; // @synthesize attrValue=_attrValue;
@property(retain, nonatomic) NSString *attrName; // @synthesize attrName=_attrName;
- (void).cxx_destruct;	// IMP=0x00000001005f0e60

@end

