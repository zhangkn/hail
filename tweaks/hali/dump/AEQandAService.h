//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEQandAService : NSObject
{
}

- (void)followQuestion:(long long)arg1 WithQuestionId:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024e868
- (void)answerQuestion:(long long)arg1 WithQuestionId:(long long)arg2 WithContent:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010024e490
- (void)askQuestion:(long long)arg1 WithContent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024e118
- (void)questionDetail:(long long)arg1 WithQuestionId:(long long)arg2 WithRead:(id)arg3 WithCurrentPage:(long long)arg4 WithPageSize:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010024dcc8
- (void)productQuestionList:(long long)arg1 WithPageSize:(long long)arg2 WithProductId:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010024d8f0
- (void)myQuestionList:(long long)arg1 WithPageSize:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024d55c
- (void)awaitingAnswerList:(long long)arg1 WithPageSize:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010024d1c8
- (void)unreadQandAMsgCount:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000010024cc48

@end

