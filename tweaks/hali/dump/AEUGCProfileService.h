//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEUGCProfileService : NSObject
{
    long long kOrigin;	// 8 = 0x8
}

- (void)deleteUGCComment:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e98724
- (void)listRelationUserBy:(id)arg1 type:(id)arg2 startRowkey:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e97d34
- (void)listMyCommentsNextStartRowKey:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e97ae4
- (void)requestUpdateUserProfileWithParamKey:(id)arg1 paramValue:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100e9782c
- (void)updateMyProfile:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e97480
- (long long)getFakeMemberSeqFromMemberSeq:(long long)arg1;	// IMP=0x0000000100e97270
- (void)deletePost:(long long)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e97044
- (void)deleteItaoPost:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e96dac
- (void)updateFollowStatus:(long long)arg1 status:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100e96c34
- (void)requestUGCLikePosts:(id)arg1 withNextStartRowKey:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100e9651c
- (void)requestUGCPost:(id)arg1 withNextStartRowKey:(id)arg2 channelId:(long long)arg3 postId:(id)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x0000000100e95dc8
- (void)requestUGCProfile:(id)arg1 channelId:(long long)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100e95aa8
- (id)init;	// IMP=0x0000000100e95a60

@end
