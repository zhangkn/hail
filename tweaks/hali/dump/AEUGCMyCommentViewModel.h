//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCMyCommentViewModel : NSObject
{
    _Bool _canDelete;	// 8 = 0x8
    NSString *_uniqueId;	// 16 = 0x10
    unsigned long long _uniqueContentType;	// 24 = 0x18
    NSString *_commentId;	// 32 = 0x20
    NSString *_commentTime;	// 40 = 0x28
    NSString *_content;	// 48 = 0x30
    NSString *_pictureURL;	// 56 = 0x38
    NSString *_productId;	// 64 = 0x40
    NSString *_evaluationId;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *evaluationId; // @synthesize evaluationId=_evaluationId;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(retain, nonatomic) NSString *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *commentTime; // @synthesize commentTime=_commentTime;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(nonatomic) unsigned long long uniqueContentType; // @synthesize uniqueContentType=_uniqueContentType;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;	// IMP=0x0000000100e4d874

@end
