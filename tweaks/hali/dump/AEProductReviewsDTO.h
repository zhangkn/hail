//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface AEProductReviewsDTO : NSObject
{
    _Bool _showInterlocution;	// 8 = 0x8
    NSNumber *_evaTotalNum;	// 16 = 0x10
    NSNumber *_imageEvaTotalNum;	// 24 = 0x18
    NSArray *_imageEvaList;	// 32 = 0x20
    NSArray *_evaList;	// 40 = 0x28
}

+ (id)objectClassInArray;	// IMP=0x00000001005e7738
@property(retain, nonatomic) NSArray *evaList; // @synthesize evaList=_evaList;
@property(retain, nonatomic) NSArray *imageEvaList; // @synthesize imageEvaList=_imageEvaList;
@property(nonatomic) _Bool showInterlocution; // @synthesize showInterlocution=_showInterlocution;
@property(retain, nonatomic) NSNumber *imageEvaTotalNum; // @synthesize imageEvaTotalNum=_imageEvaTotalNum;
@property(retain, nonatomic) NSNumber *evaTotalNum; // @synthesize evaTotalNum=_evaTotalNum;
- (void).cxx_destruct;	// IMP=0x00000001005e7920

@end

