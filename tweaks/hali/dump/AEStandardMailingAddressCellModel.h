//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEStandardMailingAddressViewModel;

@interface AEStandardMailingAddressCellModel : NSObject
{
    _Bool _addressNeedUpdate;	// 8 = 0x8
    _Bool _isDefaultAddress;	// 9 = 0x9
    _Bool _recommend;	// 10 = 0xa
    AEStandardMailingAddressViewModel *_viewModel;	// 16 = 0x10
}

@property(nonatomic) _Bool recommend; // @synthesize recommend=_recommend;
@property(nonatomic) _Bool isDefaultAddress; // @synthesize isDefaultAddress=_isDefaultAddress;
@property(nonatomic) _Bool addressNeedUpdate; // @synthesize addressNeedUpdate=_addressNeedUpdate;
@property(retain, nonatomic) AEStandardMailingAddressViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100857d88

@end

