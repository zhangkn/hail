//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentDoubleImageAndTitleViewModel;

@interface AEFloorDoubleImageAndTitleViewModel : AEBaseTile
{
    AEComponentDoubleImageAndTitleViewModel *_leftComponentViewModel;	// 8 = 0x8
    AEComponentDoubleImageAndTitleViewModel *_rightComponentViewModel;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x000000010034602c
@property(retain, nonatomic) AEComponentDoubleImageAndTitleViewModel *rightComponentViewModel; // @synthesize rightComponentViewModel=_rightComponentViewModel;
@property(retain, nonatomic) AEComponentDoubleImageAndTitleViewModel *leftComponentViewModel; // @synthesize leftComponentViewModel=_leftComponentViewModel;
- (void).cxx_destruct;	// IMP=0x0000000100345ecc
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100345dc4

@end

