//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFAppLink, NSDictionary;

@interface BFAppLinkNavigation : NSObject
{
    NSDictionary *_extras;	// 8 = 0x8
    NSDictionary *_appLinkData;	// 16 = 0x10
    BFAppLink *_appLink;	// 24 = 0x18
}

+ (void)setDefaultResolver:(id)arg1;	// IMP=0x00000001008c7604
+ (id)defaultResolver;	// IMP=0x00000001008c75c4
+ (long long)navigateToAppLink:(id)arg1 error:(id *)arg2;	// IMP=0x00000001008c7560
+ (id)navigateToURLInBackground:(id)arg1 resolver:(id)arg2;	// IMP=0x00000001008c73a0
+ (id)navigateToURLInBackground:(id)arg1;	// IMP=0x00000001008c7314
+ (id)resolveAppLinkInBackground:(id)arg1;	// IMP=0x00000001008c7288
+ (id)resolveAppLinkInBackground:(id)arg1 resolver:(id)arg2;	// IMP=0x00000001008c7238
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3;	// IMP=0x00000001008c640c
@property(retain, nonatomic) BFAppLink *appLink; // @synthesize appLink=_appLink;
@property(copy, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
- (void).cxx_destruct;	// IMP=0x00000001008c7694
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3;	// IMP=0x00000001008c6dcc
- (long long)navigate:(id *)arg1;	// IMP=0x00000001008c69a8
- (id)appLinkURLWithTargetURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001008c650c
- (id)stringByEscapingQueryString:(id)arg1;	// IMP=0x00000001008c64dc

@end

