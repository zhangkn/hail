//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEProductReviewsFilterStatisticsDTO : NSObject
{
    NSString *_currentFilter;	// 8 = 0x8
    NSArray *_filterStatistic;	// 16 = 0x10
}

+ (id)objectClassInArray;	// IMP=0x00000001005e8d30
@property(retain, nonatomic) NSArray *filterStatistic; // @synthesize filterStatistic=_filterStatistic;
@property(retain, nonatomic) NSString *currentFilter; // @synthesize currentFilter=_currentFilter;
- (void).cxx_destruct;	// IMP=0x00000001005e8e44

@end

