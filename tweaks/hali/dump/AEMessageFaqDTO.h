//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEMessageFaqDTO : NSObject
{
    _Bool _faq;	// 8 = 0x8
    NSString *_content;	// 16 = 0x10
    NSString *_messageType;	// 24 = 0x18
    NSString *_productId;	// 32 = 0x20
    NSString *_senderName;	// 40 = 0x28
    NSString *_senderSeq;	// 48 = 0x30
    NSString *_typeId;	// 56 = 0x38
    NSArray *_messageFaqDTOList;	// 64 = 0x40
}

+ (id)objectClassInArray;	// IMP=0x0000000100aaac08
@property(retain, nonatomic) NSArray *messageFaqDTOList; // @synthesize messageFaqDTOList=_messageFaqDTOList;
@property(retain, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(retain, nonatomic) NSString *senderSeq; // @synthesize senderSeq=_senderSeq;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool faq; // @synthesize faq=_faq;
- (void).cxx_destruct;	// IMP=0x0000000100aaae94

@end
