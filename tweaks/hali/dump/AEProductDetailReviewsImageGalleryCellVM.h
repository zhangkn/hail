//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface AEProductDetailReviewsImageGalleryCellVM : NSObject
{
    NSArray *_imageURLs;	// 8 = 0x8
    unsigned long long _moreCount;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    NSDictionary *_params;	// 32 = 0x20
    CDUnknownBlockType _actionBlock;	// 40 = 0x28
}

+ (id)modelFromAEProductReviewsDTO:(id)arg1;	// IMP=0x00000001005c266c
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) unsigned long long moreCount; // @synthesize moreCount=_moreCount;
@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void).cxx_destruct;	// IMP=0x00000001005c2ad8

@end

