//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECartBillCellViewModel, AECartTitleCellViewModel;

@interface AECartBillViewModel : NSObject
{
    AECartTitleCellViewModel *_titleViewModel;	// 8 = 0x8
    AECartBillCellViewModel *_billViewModel;	// 16 = 0x10
}

+ (id)modelFromDTO:(id)arg1;	// IMP=0x00000001004b7350
@property(retain, nonatomic) AECartBillCellViewModel *billViewModel; // @synthesize billViewModel=_billViewModel;
@property(retain, nonatomic) AECartTitleCellViewModel *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
- (void).cxx_destruct;	// IMP=0x000000010049853c

@end

