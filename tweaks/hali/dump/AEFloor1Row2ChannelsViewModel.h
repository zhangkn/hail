//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentTemplateHeaderViewModel, NSArray;

@interface AEFloor1Row2ChannelsViewModel : AEBaseTile
{
    NSArray *_products;	// 8 = 0x8
    AEComponentTemplateHeaderViewModel *_headerViewModel;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x0000000100309b78
@property(retain, nonatomic) AEComponentTemplateHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
- (void).cxx_destruct;	// IMP=0x0000000100309a18
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100308f8c

@end

