//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCGroupObject : NSObject
{
    _Bool _isDefaultGroup;	// 8 = 0x8
    _Bool _isPublic;	// 9 = 0x9
    NSString *_groupId;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

@property(nonatomic) _Bool isPublic; // @synthesize isPublic=_isPublic;
@property(nonatomic) _Bool isDefaultGroup; // @synthesize isDefaultGroup=_isDefaultGroup;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;	// IMP=0x0000000100df4278

@end

