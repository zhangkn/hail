//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface GIDSignInInternalOptions : NSObject
{
    _Bool _interactive;	// 8 = 0x8
    _Bool _allowsWebView;	// 9 = 0x9
    _Bool _allowsBrowser;	// 10 = 0xa
    _Bool _allowsExtension;	// 11 = 0xb
    _Bool _allowsSafariViewController;	// 12 = 0xc
    NSDictionary *_extraParams;	// 16 = 0x10
    CDUnknownBlockType _fallbackHandler;	// 24 = 0x18
}

+ (id)firstPartyOptionsWithFallbackHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010094bbcc
+ (id)optionsWithExtraParams:(id)arg1 fallbackHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010094bb30
+ (id)optionsWithExtraParams:(id)arg1;	// IMP=0x000000010094bab4
+ (id)silentOptions;	// IMP=0x000000010094ba88
+ (id)defaultOptions;	// IMP=0x000000010094ba14
@property(readonly, nonatomic) CDUnknownBlockType fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(readonly, nonatomic) _Bool allowsSafariViewController; // @synthesize allowsSafariViewController=_allowsSafariViewController;
@property(readonly, nonatomic) _Bool allowsExtension; // @synthesize allowsExtension=_allowsExtension;
@property(readonly, nonatomic) _Bool allowsBrowser; // @synthesize allowsBrowser=_allowsBrowser;
@property(readonly, nonatomic) _Bool allowsWebView; // @synthesize allowsWebView=_allowsWebView;
@property(readonly, nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
- (void).cxx_destruct;	// IMP=0x000000010094bce0

@end

