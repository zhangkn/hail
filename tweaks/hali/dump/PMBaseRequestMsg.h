//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PMBaseMessage.h"

@class NSString;

@interface PMBaseRequestMsg : PMBaseMessage
{
    long long _index;	// 8 = 0x8
    long long _pageSize;	// 16 = 0x10
    long long _role;	// 24 = 0x18
    NSString *_bizTag;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *bizTag; // @synthesize bizTag=_bizTag;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;	// IMP=0x00000001014149c4
- (long long)fromProtocolItem:(id)arg1;	// IMP=0x0000000101414764
- (id)toProtocolItem;	// IMP=0x0000000101414604

@end

