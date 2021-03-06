//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEOrderListCellProtocol.h"

@class NSArray, NSString;

@interface AEOrderListAmountCellVM : NSObject <AEOrderListCellProtocol>
{
    _Bool _needShowLeftTime;	// 8 = 0x8
    NSString *action;	// 16 = 0x10
    NSString *_amount;	// 24 = 0x18
    NSString *_quantity;	// 32 = 0x20
    NSArray *_actionButtons;	// 40 = 0x28
    double _dueTime;	// 48 = 0x30
}

@property(nonatomic) double dueTime; // @synthesize dueTime=_dueTime;
@property(nonatomic) _Bool needShowLeftTime; // @synthesize needShowLeftTime=_needShowLeftTime;
@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *action; // @synthesize action;
- (void).cxx_destruct;	// IMP=0x000000010020006c
- (id)initWithData:(id)arg1;	// IMP=0x00000001001ffc84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

