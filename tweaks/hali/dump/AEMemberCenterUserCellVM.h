//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEMemberCenterUserCellVM : NSObject
{
    NSString *_userAvatarURL;	// 8 = 0x8
    NSString *_userName;	// 16 = 0x10
    NSString *_userLevelName;	// 24 = 0x18
    NSString *_userBgImageName;	// 32 = 0x20
    NSArray *_scores;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(copy, nonatomic) NSString *userBgImageName; // @synthesize userBgImageName=_userBgImageName;
@property(copy, nonatomic) NSString *userLevelName; // @synthesize userLevelName=_userLevelName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userAvatarURL; // @synthesize userAvatarURL=_userAvatarURL;
- (void).cxx_destruct;	// IMP=0x0000000100143090

@end

