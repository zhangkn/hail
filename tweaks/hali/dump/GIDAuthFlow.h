//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIDCallbackQueue.h"

@class GSDK_GTMOAuth2Authentication, NSError;

@interface GIDAuthFlow : GIDCallbackQueue
{
    GSDK_GTMOAuth2Authentication *_auth;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GSDK_GTMOAuth2Authentication *auth; // @synthesize auth=_auth;
- (void).cxx_destruct;	// IMP=0x0000000100942668

@end

