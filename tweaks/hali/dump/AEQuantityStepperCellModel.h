//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AETableViewCellModelProtocol.h"

@class NSString;

@interface AEQuantityStepperCellModel : NSObject <AETableViewCellModelProtocol>
{
    long long _availableQuantity;	// 8 = 0x8
    long long _quantity;	// 16 = 0x10
}

@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) long long availableQuantity; // @synthesize availableQuantity=_availableQuantity;
- (void)layoutCell:(id)arg1 withCellClass:(Class)arg2;	// IMP=0x00000001005f1aa8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool forceRelayout; // @dynamic forceRelayout;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

