//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AESearchQRWSuggestion : NSObject
{
    NSString *_originalSearchWord;	// 8 = 0x8
    long long _suggestReason;	// 16 = 0x10
    NSString *_resultWord;	// 24 = 0x18
    NSString *_causeDes;	// 32 = 0x20
    NSArray *_suggestWords;	// 40 = 0x28
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c0e594
+ (id)objectClassInArray;	// IMP=0x0000000100c0e510
@property(retain, nonatomic) NSArray *suggestWords; // @synthesize suggestWords=_suggestWords;
@property(retain, nonatomic) NSString *causeDes; // @synthesize causeDes=_causeDes;
@property(retain, nonatomic) NSString *resultWord; // @synthesize resultWord=_resultWord;
@property(nonatomic) long long suggestReason; // @synthesize suggestReason=_suggestReason;
@property(retain, nonatomic) NSString *originalSearchWord; // @synthesize originalSearchWord=_originalSearchWord;
- (void).cxx_destruct;	// IMP=0x0000000100c0e73c

@end

