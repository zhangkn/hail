//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AECategoryViewedHistoryStorage : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;	// IMP=0x0000000100cddf50
- (void)clearHistory;	// IMP=0x0000000100cddeb4
- (id)history;	// IMP=0x0000000100cddea8
- (void)trackViewed:(id)arg1;	// IMP=0x0000000100cdde2c
- (void)loadHistoryFromDisk:(CDUnknownBlockType)arg1;	// IMP=0x0000000100cddbc0
- (void)saveHistoryToDisk;	// IMP=0x0000000100cddb3c
- (id)init;	// IMP=0x0000000100cddab8

@end

