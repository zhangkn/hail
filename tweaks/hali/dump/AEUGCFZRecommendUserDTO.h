//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCFZRecommendUserDTO : NSObject
{
    _Bool _followedByMe;	// 8 = 0x8
    NSString *_nickName;	// 16 = 0x10
    NSString *_memberSeq;	// 24 = 0x18
    NSString *_displayFactor;	// 32 = 0x20
    NSString *_avatar;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *displayFactor; // @synthesize displayFactor=_displayFactor;
@property(retain, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(nonatomic) _Bool followedByMe; // @synthesize followedByMe=_followedByMe;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;	// IMP=0x000000010069f0ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010069efa0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010069ef28

@end
