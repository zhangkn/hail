//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEWalletStatistics, AEWalletWSwitch;

@interface AEMyAccountWalletDTO : NSObject
{
    AEWalletWSwitch *_walletSwitch;	// 8 = 0x8
    AEWalletStatistics *_walletStatistics;	// 16 = 0x10
}

@property(retain, nonatomic) AEWalletStatistics *walletStatistics; // @synthesize walletStatistics=_walletStatistics;
@property(retain, nonatomic) AEWalletWSwitch *walletSwitch; // @synthesize walletSwitch=_walletSwitch;
- (void).cxx_destruct;	// IMP=0x00000001001877cc

@end

