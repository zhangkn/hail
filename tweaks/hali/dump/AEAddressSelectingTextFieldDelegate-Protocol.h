//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEAddressSelectingTextField;

@protocol AEAddressSelectingTextFieldDelegate <NSObject>

@optional
- (void)selectingTextFieldWillResignFirstResponder:(AEAddressSelectingTextField *)arg1;
- (void)selectingTextFieldWillBecomeFirstResponder:(AEAddressSelectingTextField *)arg1;
- (void)selectingTextFieldStartSelecting:(AEAddressSelectingTextField *)arg1;
@end

