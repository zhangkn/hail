//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface AEMyAccountUserHeaderCellVM : NSObject
{
    _Bool _isSignIn;	// 8 = 0x8
    NSString *_avatarURL;	// 16 = 0x10
    NSString *_userName;	// 24 = 0x18
    NSString *_userEmail;	// 32 = 0x20
    NSString *_userLevel;	// 40 = 0x28
    NSString *_gender;	// 48 = 0x30
    NSString *_avatarPlaceHolder;	// 56 = 0x38
    long long _messageCount;	// 64 = 0x40
    long long _notificationCount;	// 72 = 0x48
    UIImage *_blurImage;	// 80 = 0x50
    NSString *_eventTrackName;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *eventTrackName; // @synthesize eventTrackName=_eventTrackName;
@property(retain, nonatomic) UIImage *blurImage; // @synthesize blurImage=_blurImage;
@property(nonatomic) long long notificationCount; // @synthesize notificationCount=_notificationCount;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(copy, nonatomic) NSString *avatarPlaceHolder; // @synthesize avatarPlaceHolder=_avatarPlaceHolder;
@property(nonatomic) _Bool isSignIn; // @synthesize isSignIn=_isSignIn;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *userLevel; // @synthesize userLevel=_userLevel;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
- (void).cxx_destruct;	// IMP=0x000000010017eee4

@end

