//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AESearchFilterCellBaseViewModel.h"

@class NSString;

@interface AESearchFilterFreeShippingCellViewModel : AESearchFilterCellBaseViewModel
{
    _Bool _freeShipping;	// 8 = 0x8
    NSString *_freeShippingName;	// 16 = 0x10
}

+ (id)viewModelWithModel:(id)arg1;	// IMP=0x0000000100c640a8
@property(copy, nonatomic) NSString *freeShippingName; // @synthesize freeShippingName=_freeShippingName;
@property(nonatomic, getter=isFreeShipping) _Bool freeShipping; // @synthesize freeShipping=_freeShipping;
- (void).cxx_destruct;	// IMP=0x0000000100c641ec

@end

