//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IOpenSecurityGuardPlugin.h"

@class NSString;

@interface IndieKitPlugin : NSObject <IOpenSecurityGuardPlugin>
{
}

+ (void *)nativeEntry;	// IMP=0x00000001014a7f78
+ (void *)initializePlugin:(void *)arg1;	// IMP=0x00000001014a7f24
+ (id)getMetaInfo;	// IMP=0x00000001014a7c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

