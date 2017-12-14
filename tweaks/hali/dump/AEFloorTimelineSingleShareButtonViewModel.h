//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent, NSString, UIImage;

@interface AEFloorTimelineSingleShareButtonViewModel : AEBaseTile
{
    AETextTileComponent *_subjectModel;	// 8 = 0x8
    AEImageTileComponent *_backgroundImageModel;	// 16 = 0x10
    NSString *_shareTitle;	// 24 = 0x18
    NSString *_shareContent;	// 32 = 0x20
    NSString *_shareURLStr;	// 40 = 0x28
    NSString *_shareImageURLStr;	// 48 = 0x30
    UIImage *_shareImage;	// 56 = 0x38
}

+ (Class)cellClass;	// IMP=0x00000001003879ec
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareImageURLStr; // @synthesize shareImageURLStr=_shareImageURLStr;
@property(copy, nonatomic) NSString *shareURLStr; // @synthesize shareURLStr=_shareURLStr;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) AEImageTileComponent *backgroundImageModel; // @synthesize backgroundImageModel=_backgroundImageModel;
@property(retain, nonatomic) AETextTileComponent *subjectModel; // @synthesize subjectModel=_subjectModel;
- (void).cxx_destruct;	// IMP=0x0000000100387828
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100386cf0

@end
