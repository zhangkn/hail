//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PMFlowLimit : NSObject
{
    NSMutableDictionary *_limitDict;	// 8 = 0x8
}

+ (id)numberkey:(long long)arg1;	// IMP=0x000000010141b51c
+ (id)key:(id)arg1;	// IMP=0x000000010141b448
+ (id)parse:(id)arg1;	// IMP=0x000000010141b37c
+ (void)limit:(id)arg1;	// IMP=0x000000010141ad0c
+ (_Bool)isLimit:(id)arg1;	// IMP=0x000000010141a7b8
+ (id)sharedInstance;	// IMP=0x000000010141a6cc
@property(retain, nonatomic) NSMutableDictionary *limitDict; // @synthesize limitDict=_limitDict;
- (void).cxx_destruct;	// IMP=0x000000010141b598

@end

