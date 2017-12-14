//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AIFCountry, NSString;

@interface AEUGCPostCommentViewModel : NSObject
{
    _Bool _avatarBorder;	// 8 = 0x8
    _Bool _canDelete;	// 9 = 0x9
    _Bool _deleted;	// 10 = 0xa
    NSString *_uniqueId;	// 16 = 0x10
    NSString *_userId;	// 24 = 0x18
    NSString *_userName;	// 32 = 0x20
    NSString *_avatarURL;	// 40 = 0x28
    AIFCountry *_userCountry;	// 48 = 0x30
    NSString *_commentId;	// 56 = 0x38
    NSString *_commentTimeFromNow;	// 64 = 0x40
    NSString *_commentTimeStamp;	// 72 = 0x48
    NSString *_content;	// 80 = 0x50
    NSString *_translatedContent;	// 88 = 0x58
    long long _commentIndex;	// 96 = 0x60
    unsigned long long _gender;	// 104 = 0x68
    NSString *_replyUserId;	// 112 = 0x70
    NSString *_replyUserName;	// 120 = 0x78
}

@property(retain, nonatomic) NSString *replyUserName; // @synthesize replyUserName=_replyUserName;
@property(retain, nonatomic) NSString *replyUserId; // @synthesize replyUserId=_replyUserId;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long commentIndex; // @synthesize commentIndex=_commentIndex;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(retain, nonatomic) NSString *translatedContent; // @synthesize translatedContent=_translatedContent;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *commentTimeStamp; // @synthesize commentTimeStamp=_commentTimeStamp;
@property(retain, nonatomic) NSString *commentTimeFromNow; // @synthesize commentTimeFromNow=_commentTimeFromNow;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) AIFCountry *userCountry; // @synthesize userCountry=_userCountry;
@property(nonatomic) _Bool avatarBorder; // @synthesize avatarBorder=_avatarBorder;
@property(retain, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;	// IMP=0x0000000100e2d034

@end

