//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface AEProductDetailQADTOList : NSObject
{
    NSNumber *_questionCount;	// 8 = 0x8
    NSArray *_questionAndAnswerList;	// 16 = 0x10
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001005c08f0
+ (id)objectClassInArray;	// IMP=0x00000001005c086c
@property(retain, nonatomic) NSArray *questionAndAnswerList; // @synthesize questionAndAnswerList=_questionAndAnswerList;
@property(retain, nonatomic) NSNumber *questionCount; // @synthesize questionCount=_questionCount;
- (void).cxx_destruct;	// IMP=0x00000001005c09f4

@end

