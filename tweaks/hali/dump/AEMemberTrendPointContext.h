//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEMemberTrendPointContext : NSObject
{
    long long _maxScore;	// 8 = 0x8
    long long _minScore;	// 16 = 0x10
    long long _currentScore;	// 24 = 0x18
    NSString *_levelImage;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *levelImage; // @synthesize levelImage=_levelImage;
@property(nonatomic) long long currentScore; // @synthesize currentScore=_currentScore;
@property(nonatomic) long long minScore; // @synthesize minScore=_minScore;
@property(nonatomic) long long maxScore; // @synthesize maxScore=_maxScore;
- (void).cxx_destruct;	// IMP=0x000000010014ccd8

@end
