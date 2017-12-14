//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PMMessage : NSObject
{
    NSString *_messageId;	// 8 = 0x8
    long long _subType;	// 16 = 0x10
    NSString *_topic;	// 24 = 0x18
    long long _source;	// 32 = 0x20
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;	// IMP=0x00000001013fc46c
- (void)fromDictionary:(id)arg1;	// IMP=0x00000001013fc290
- (id)toDictionary;	// IMP=0x00000001013fc110
- (id)toPMBaseMessage;	// IMP=0x00000001013fc00c
- (void)fromPMBaseMessage:(id)arg1;	// IMP=0x00000001013fbf14

@end

