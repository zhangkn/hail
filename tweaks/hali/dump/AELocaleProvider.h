//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFLocaleProvider.h"

@class NSMutableDictionary, NSString;

@interface AELocaleProvider : NSObject <AFLocaleProvider>
{
    NSMutableDictionary *_langDict;	// 8 = 0x8
    NSString *_recentLangCode;	// 16 = 0x10
}

+ (id)currentSupportedLanguageCode;	// IMP=0x0000000100a308cc
@property(retain, nonatomic) NSString *recentLangCode; // @synthesize recentLangCode=_recentLangCode;
@property(retain, nonatomic) NSMutableDictionary *langDict; // @synthesize langDict=_langDict;
- (void).cxx_destruct;	// IMP=0x0000000100a30ad4
- (id)defaultAppLanguage;	// IMP=0x0000000100a30a18
- (void)reloadLanguage;	// IMP=0x0000000100a30a14
- (id)languageByKey:(id)arg1;	// IMP=0x0000000100a30668
- (id)init;	// IMP=0x0000000100a30634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

