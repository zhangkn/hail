//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKTMultiDictionary;

@interface PMCommandManager : NSObject
{
    MKTMultiDictionary *_processDict;	// 8 = 0x8
}

+ (void)processCommand:(id)arg1;	// IMP=0x0000000101419ce8
+ (_Bool)registerCommand:(long long)arg1 impl:(Class)arg2;	// IMP=0x0000000101419c0c
+ (id)sharedInstance;	// IMP=0x0000000101419934
@property(retain, nonatomic) MKTMultiDictionary *processDict; // @synthesize processDict=_processDict;
- (void).cxx_destruct;	// IMP=0x0000000101419e38

@end
