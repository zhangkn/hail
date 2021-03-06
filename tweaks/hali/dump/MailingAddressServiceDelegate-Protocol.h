//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMailingAddressListDTO, MailingAddressDTO, MailingAddressService, NSError, NSString;

@protocol MailingAddressServiceDelegate <NSObject>

@optional
- (void)mailingAddressDeleteResult:(MailingAddressService *)arg1 isSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)mailingAddressEditResult:(MailingAddressService *)arg1 isSuccess:(_Bool)arg2 error:(NSError *)arg3;
- (void)mailingAddressAddResult:(MailingAddressService *)arg1 isSuccess:(_Bool)arg2 newAddressID:(NSString *)arg3 error:(NSError *)arg4;
- (void)mailingAddressBindResultLoaded:(MailingAddressService *)arg1 isSuccess:(_Bool)arg2 result:(MailingAddressDTO *)arg3 error:(NSError *)arg4;
- (void)mailingSelfFetchingAddressLoaded:(MailingAddressService *)arg1 isSuccess:(_Bool)arg2 result:(AEMailingAddressListDTO *)arg3 error:(NSError *)arg4;
- (void)mailingAddressLoaded:(MailingAddressService *)arg1 isSuccess:(_Bool)arg2 result:(AEMailingAddressListDTO *)arg3 error:(NSError *)arg4;
@end

