//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@interface AESearchTagsDTO : NSObject
{
    NSNumber *_direct;	// 8 = 0x8
    NSNumber *_position;	// 16 = 0x10
    NSArray *_tags;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(retain, nonatomic) NSNumber *direct; // @synthesize direct=_direct;
- (void).cxx_destruct;	// IMP=0x0000000100cdb220

@end

