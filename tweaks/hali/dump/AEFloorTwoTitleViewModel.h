//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSString, NSURL;

@interface AEFloorTwoTitleViewModel : AEBaseTile
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_subTitleText;	// 16 = 0x10
    NSURL *_imageURL;	// 24 = 0x18
}

@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *subTitleText; // @synthesize subTitleText=_subTitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;	// IMP=0x00000001003492a0

@end

