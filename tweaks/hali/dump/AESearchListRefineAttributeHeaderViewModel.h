//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESearchListRefineAttributeHeaderHighlightedCellModel, NSArray;

@interface AESearchListRefineAttributeHeaderViewModel : NSObject
{
    NSArray *_rowModels;	// 8 = 0x8
    AESearchListRefineAttributeHeaderHighlightedCellModel *_highlightedRowModel;	// 16 = 0x10
}

@property(nonatomic) __weak AESearchListRefineAttributeHeaderHighlightedCellModel *highlightedRowModel; // @synthesize highlightedRowModel=_highlightedRowModel;
@property(retain, nonatomic) NSArray *rowModels; // @synthesize rowModels=_rowModels;
- (void).cxx_destruct;	// IMP=0x0000000100c40fd8

@end
