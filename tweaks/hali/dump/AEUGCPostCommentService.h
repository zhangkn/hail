//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEUGCPostCommentService : NSObject
{
}

+ (void)requestMyCommentsNextStartRowKey:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e478bc
+ (void)deleteUGCComment:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100e47650
+ (void)leaveUGCCommentWithIconTask:(id)arg1 content:(id)arg2 reply:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e47460
+ (void)leaveUGCComment:(id)arg1 content:(id)arg2 reply:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e469d4
+ (void)requestUGCComments:(id)arg1 autoFillDeletedFloor:(_Bool)arg2 nextStartRowKey:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e45b3c

@end

