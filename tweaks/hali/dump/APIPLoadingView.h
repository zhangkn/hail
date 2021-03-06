//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APIPToastView.h"

@class NSMutableArray, NSTimer;

@interface APIPLoadingView : APIPToastView
{
    NSMutableArray *_array;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
}

@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void).cxx_destruct;	// IMP=0x0000000101115ea0
- (void)hideViews;	// IMP=0x0000000101115ce0
- (void)dismiss;	// IMP=0x0000000101115b54
- (void)removeFromSuperview;	// IMP=0x0000000101115a90
- (id)iniPoint;	// IMP=0x00000001011159d8
- (void)loading;	// IMP=0x0000000101115740
- (void)present;	// IMP=0x0000000101114de0

@end

