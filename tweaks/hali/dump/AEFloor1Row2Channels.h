//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponentTemplateHeader, NSArray;

@interface AEFloor1Row2Channels : AETileAdapterFloor
{
    NSArray *_products;	// 8 = 0x8
    AEComponentTemplateHeader *_header;	// 16 = 0x10
}

+ (Class)modelClass;	// IMP=0x00000001003081c8
+ (id)identifier;	// IMP=0x000000010030819c
@property(retain, nonatomic) AEComponentTemplateHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
- (void).cxx_destruct;	// IMP=0x0000000100308f4c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100308c5c
- (void)prepareForReuse;	// IMP=0x0000000100308ba4
- (id)initFloor;	// IMP=0x00000001003081dc

@end

