//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AETextTileComponent, NSDictionary, NSString, NSURL;

@interface AEComponentHeaderViewModel : AEBaseTileComponent
{
    NSString *_action;	// 8 = 0x8
    NSURL *_backgroundImageURL;	// 16 = 0x10
    NSURL *_titleImageURL;	// 24 = 0x18
    NSDictionary *_otherParamenters;	// 32 = 0x20
    AETextTileComponent *_fieldArea1;	// 40 = 0x28
    AETextTileComponent *_fieldArea2;	// 48 = 0x30
    AETextTileComponent *_fieldArea3;	// 56 = 0x38
}

@property(retain, nonatomic) AETextTileComponent *fieldArea3; // @synthesize fieldArea3=_fieldArea3;
@property(retain, nonatomic) AETextTileComponent *fieldArea2; // @synthesize fieldArea2=_fieldArea2;
@property(retain, nonatomic) AETextTileComponent *fieldArea1; // @synthesize fieldArea1=_fieldArea1;
@property(copy, nonatomic) NSDictionary *otherParamenters; // @synthesize otherParamenters=_otherParamenters;
@property(retain, nonatomic) NSURL *titleImageURL; // @synthesize titleImageURL=_titleImageURL;
@property(retain, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001009ebaf0

@end
