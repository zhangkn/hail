//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCommandService.h"

#import "AEShippingInfoViewControllerCallback.h"

@class NSString;

@interface AEOrderItemSelectShippingMethodCommand : AFCommandService <AEShippingInfoViewControllerCallback>
{
}

- (void)shippingInfoViewControllerCallbackWithParameter:(id)arg1;	// IMP=0x000000010055c7b0
- (void)runWithParams:(id)arg1;	// IMP=0x000000010055c5f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
