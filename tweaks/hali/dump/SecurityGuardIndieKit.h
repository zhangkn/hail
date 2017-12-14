//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardIndieKit.h"

@class NSString;

@interface SecurityGuardIndieKit : NSObject <ISecurityGuardIndieKit>
{
}

- (Class)getMetaClass;	// IMP=0x00000001014a1dac
- (id)callCoreIndieKitFunctionsWithArray:(char **)arg1 arrayLen:(unsigned int)arg2 appKey:(id)arg3 requestType:(long long)arg4;	// IMP=0x00000001014a1ab4
- (void)createArrayForFirstParameter:(const char *)arg1 secondParameter:(const char *)arg2 arrayPtr:(char ***)arg3 arrayLenPtr:(unsigned int *)arg4;	// IMP=0x00000001014a1610
- (void)createArrayForOnePrameter:(const char *)arg1 arrayPtr:(char ***)arg2 arrayLenPtr:(unsigned int *)arg3;	// IMP=0x00000001014a139c
- (int)validateFileSignature:(id)arg1 fileHash:(id)arg2 secretKey:(id)arg3;	// IMP=0x00000001014a0f7c
- (id)indieKitRequest:(id)arg1;	// IMP=0x00000001014a04c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
