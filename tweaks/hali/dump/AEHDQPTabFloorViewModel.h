//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AESegmentedFloorViewModel.h"

@class NSMutableArray, NSString;

@interface AEHDQPTabFloorViewModel : AESegmentedFloorViewModel
{
    NSMutableArray *_showNames;	// 8 = 0x8
    NSMutableArray *_tagIds;	// 16 = 0x10
    NSString *_selectTagId;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x00000001003c5a98
@property(retain, nonatomic) NSString *selectTagId; // @synthesize selectTagId=_selectTagId;
@property(retain, nonatomic) NSMutableArray *tagIds; // @synthesize tagIds=_tagIds;
@property(retain, nonatomic) NSMutableArray *showNames; // @synthesize showNames=_showNames;
- (void).cxx_destruct;	// IMP=0x00000001003c57c4
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001003c56e0
- (long long)numberOfSegments;	// IMP=0x00000001003c5694
- (void)setSelectedSegmentIndex:(long long)arg1;	// IMP=0x00000001003c54a0
- (id)init;	// IMP=0x00000001003c539c

@end
