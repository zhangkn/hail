//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AITDetailLike : NSObject
{
    NSString *_avatar;	// 8 = 0x8
    NSString *_likeTime;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_seq;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *likeTime; // @synthesize likeTime=_likeTime;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;	// IMP=0x0000000100714c68

@end
