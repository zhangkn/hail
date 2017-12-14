//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent, NSString, NSURL;

@interface AEFloorMyFavouriteEmptyViewModel : AEBaseTile
{
    NSURL *_imageURL;	// 8 = 0x8
    AETextTileComponent *_fieldA;	// 16 = 0x10
    AETextTileComponent *_fieldB;	// 24 = 0x18
    NSString *_buttonText;	// 32 = 0x20
    NSString *_action;	// 40 = 0x28
}

+ (Class)cellClass;	// IMP=0x0000000100352db8
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) AETextTileComponent *fieldB; // @synthesize fieldB=_fieldB;
@property(retain, nonatomic) AETextTileComponent *fieldA; // @synthesize fieldA=_fieldA;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;	// IMP=0x0000000100352c1c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100352a2c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100352dd8

@end
