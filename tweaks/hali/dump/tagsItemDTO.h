//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface tagsItemDTO : NSObject
{
    NSString *_tagItemId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_tagType;	// 24 = 0x18
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c961d8
@property(copy, nonatomic) NSString *tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tagItemId; // @synthesize tagItemId=_tagItemId;
- (void).cxx_destruct;	// IMP=0x0000000100c962a0

@end

