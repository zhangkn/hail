//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEMemberPrivilegesCellVM : NSObject
{
    NSString *_leftImage;	// 8 = 0x8
    NSString *_privilegeTitle;	// 16 = 0x10
    NSString *_privilegeSubTitle;	// 24 = 0x18
    NSString *_action;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *privilegeSubTitle; // @synthesize privilegeSubTitle=_privilegeSubTitle;
@property(copy, nonatomic) NSString *privilegeTitle; // @synthesize privilegeTitle=_privilegeTitle;
@property(copy, nonatomic) NSString *leftImage; // @synthesize leftImage=_leftImage;
- (void).cxx_destruct;	// IMP=0x00000001001550f0

@end
