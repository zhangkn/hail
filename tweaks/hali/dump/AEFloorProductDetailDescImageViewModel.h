//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSArray;

@interface AEFloorProductDetailDescImageViewModel : AEBaseTile
{
    NSArray *_images;	// 8 = 0x8
    unsigned long long _ncolumns;	// 16 = 0x10
}

@property(nonatomic) unsigned long long ncolumns; // @synthesize ncolumns=_ncolumns;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;	// IMP=0x00000001004f996c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001004f96ec
- (id)init;	// IMP=0x00000001004f9680

@end
