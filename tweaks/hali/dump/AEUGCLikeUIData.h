//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCLikeUIData : NSObject
{
    NSString *_avatar;	// 8 = 0x8
    NSString *_nickName;	// 16 = 0x10
    NSString *_country;	// 24 = 0x18
    NSString *_lV;	// 32 = 0x20
    NSString *_memberSeq;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(retain, nonatomic) NSString *lV; // @synthesize lV=_lV;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;	// IMP=0x00000001007813f4

@end

