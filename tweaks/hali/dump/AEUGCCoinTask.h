//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEUGCCoinTask : NSObject
{
    NSArray *_actions;	// 8 = 0x8
    NSString *_indentified;	// 16 = 0x10
    NSString *_marketingKey;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *marketingKey; // @synthesize marketingKey=_marketingKey;
@property(retain, nonatomic) NSString *indentified; // @synthesize indentified=_indentified;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;	// IMP=0x0000000100e4c900
- (id)initWithActions:(id)arg1;	// IMP=0x0000000100e4c79c
- (id)init;	// IMP=0x0000000100e4c72c

@end
