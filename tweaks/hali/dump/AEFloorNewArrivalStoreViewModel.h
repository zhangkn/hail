//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentHeaderViewModel, NSArray;

@interface AEFloorNewArrivalStoreViewModel : AEBaseTile
{
    AEComponentHeaderViewModel *_header;	// 8 = 0x8
    NSArray *_images;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x000000010035c914
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) AEComponentHeaderViewModel *header; // @synthesize header=_header;
- (void).cxx_destruct;	// IMP=0x000000010035c7b4
- (id)initWithTileDTO:(id)arg1;	// IMP=0x000000010035c204

@end

