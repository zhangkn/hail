//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface FDLayoutSpacer : UIView
{
    _Bool _horizontal;	// 8 = 0x8
    NSMutableArray *_systemConstraints;	// 16 = 0x10
}

+ (Class)layerClass;	// IMP=0x00000001012abd54
@property(nonatomic, getter=isHorizontal) _Bool horizontal; // @synthesize horizontal=_horizontal;
- (void).cxx_destruct;	// IMP=0x00000001012abdf0
@property(readonly, nonatomic) UIView *owningView;
@property(readonly, nonatomic) NSMutableArray *systemConstraints; // @synthesize systemConstraints=_systemConstraints;

@end
