//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANXNativeInjectNavigationBarExport.h"
#import "ANXNativeInjectToolBarExport.h"

@class JSContext, NSMutableDictionary;

@interface ANXNativeInject : NSObject <ANXNativeInjectNavigationBarExport, ANXNativeInjectToolBarExport>
{
    JSContext *_context;	// 8 = 0x8
    NSMutableDictionary *_interfaces;	// 16 = 0x10
}

+ (id)shareInject;	// IMP=0x000000010113ac04
@property(retain, nonatomic) NSMutableDictionary *interfaces; // @synthesize interfaces=_interfaces;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x000000010113b250
- (void)ANXBack;	// IMP=0x000000010113b100
- (void)ANXExit;	// IMP=0x000000010113b090
- (void)unregisterInterfaces;	// IMP=0x000000010113b080
- (void)registerInterface:(id)arg1;	// IMP=0x000000010113afe8
- (void)configureInjectWithWebView:(id)arg1 injectName:(id)arg2;	// IMP=0x000000010113acb8

@end
