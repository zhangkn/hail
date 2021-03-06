//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AESearchFilterCellBaseViewModel.h"

@class NSString, UIColor, UIImage;

@interface AESearchFilterCategoryCellViewModel : AESearchFilterCellBaseViewModel
{
    NSString *_categoryName;	// 8 = 0x8
    NSString *_categoryValue;	// 16 = 0x10
    UIColor *_categoryValueColor;	// 24 = 0x18
    UIImage *_rightImage;	// 32 = 0x20
}

+ (id)viewModelWithModel:(id)arg1;	// IMP=0x0000000100bea480
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) UIColor *categoryValueColor; // @synthesize categoryValueColor=_categoryValueColor;
@property(copy, nonatomic) NSString *categoryValue; // @synthesize categoryValue=_categoryValue;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;	// IMP=0x0000000100bea9a0

@end

