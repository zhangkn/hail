//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEAddressFormViewController.h"

#import "AFCommandTest.h"

@class NSString;

@interface AEAddressAddViewController : AEAddressFormViewController <AFCommandTest>
{
}

+ (id)paramsToTest;	// IMP=0x0000000100459d88
- (void)close;	// IMP=0x0000000100459d74
- (void)setupLeftButton;	// IMP=0x0000000100459c10
- (void)addressFormValidSuccess;	// IMP=0x0000000100459acc
- (void)mailingAddressAddResult:(id)arg1 isSuccess:(_Bool)arg2 newAddressID:(id)arg3 error:(id)arg4;	// IMP=0x0000000100459730
- (void)viewDidLoad;	// IMP=0x00000001004595dc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010045934c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

