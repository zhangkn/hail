//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class NSMutableArray, UIScrollView;

@interface AE329PreOrderMainScrollableFloor : AETileAdapterFloor
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSMutableArray *_components;	// 16 = 0x10
}

+ (Class)modelClass;	// IMP=0x00000001002d71b4
+ (id)identifier;	// IMP=0x00000001002d7188
@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;	// IMP=0x00000001002d79c0
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002d7470
- (void)configConstraints;	// IMP=0x00000001002d7358
- (void)configComponents;	// IMP=0x00000001002d7264
- (id)initFloor;	// IMP=0x00000001002d71c8

@end

