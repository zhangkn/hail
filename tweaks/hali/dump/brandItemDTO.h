//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, brandStoreItemDTO;

@interface brandItemDTO : NSObject
{
    brandStoreItemDTO *_brandStore;	// 8 = 0x8
    NSArray *_brandWall;	// 16 = 0x10
}

+ (id)objectClassInArray;	// IMP=0x0000000100c94438
@property(retain, nonatomic) NSArray *brandWall; // @synthesize brandWall=_brandWall;
@property(retain, nonatomic) brandStoreItemDTO *brandStore; // @synthesize brandStore=_brandStore;
- (void).cxx_destruct;	// IMP=0x0000000100c9454c

@end
