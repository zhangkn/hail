//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFLanguage, AIFCountry, NSMutableArray, NSMutableDictionary, NSString;

@interface AFLocaleManager : NSObject
{
    id <AFLocaleProvider> _localeProvider;	// 8 = 0x8
    NSMutableDictionary *_systemSupportLanguageMapping;	// 16 = 0x10
    NSMutableDictionary *_systemSupportCountryMapping;	// 24 = 0x18
    Class _localeProviderClass;	// 32 = 0x20
    NSMutableArray *_appSupportLanguages;	// 40 = 0x28
    AFLanguage *_currentLanguage;	// 48 = 0x30
    AIFCountry *_currentCountry;	// 56 = 0x38
    NSString *_currentLang;	// 64 = 0x40
    NSString *_currentCurrency;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000010103f810
@property(retain, nonatomic) NSString *currentCurrency; // @synthesize currentCurrency=_currentCurrency;
@property(retain, nonatomic) NSString *currentLang; // @synthesize currentLang=_currentLang;
@property(retain, nonatomic) AIFCountry *currentCountry; // @synthesize currentCountry=_currentCountry;
@property(retain, nonatomic) AFLanguage *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(retain, nonatomic) NSMutableArray *appSupportLanguages; // @synthesize appSupportLanguages=_appSupportLanguages;
@property(retain, nonatomic) Class localeProviderClass; // @synthesize localeProviderClass=_localeProviderClass;
@property(retain, nonatomic) NSMutableDictionary *systemSupportCountryMapping; // @synthesize systemSupportCountryMapping=_systemSupportCountryMapping;
@property(retain, nonatomic) NSMutableDictionary *systemSupportLanguageMapping; // @synthesize systemSupportLanguageMapping=_systemSupportLanguageMapping;
- (void).cxx_destruct;	// IMP=0x00000001010412a4
- (id)private_getPreferCurrency;	// IMP=0x0000000101041064
- (id)private_getPreferCountry;	// IMP=0x0000000101041000
- (id)private_getPreferLanguage;	// IMP=0x0000000101040f9c
- (void)private_setPreferCurrency:(id)arg1;	// IMP=0x0000000101040ed4
- (void)private_setPreferCountry:(id)arg1;	// IMP=0x0000000101040de8
- (void)private_setPreferLanguage:(id)arg1;	// IMP=0x0000000101040d24
- (void)private_reloadLocale;	// IMP=0x0000000101040bf8
- (id)private_defaultAppLanguage;	// IMP=0x0000000101040adc
- (void)private_loadCountries;	// IMP=0x0000000101040910
- (void)private_loadLanguages;	// IMP=0x0000000101040744
- (id)allCountries;	// IMP=0x000000010104072c
- (id)languageFromCode:(id)arg1;	// IMP=0x00000001010406ac
- (id)countryFromCode:(id)arg1;	// IMP=0x000000010104060c
- (id)languageByResourceKey:(id)arg1;	// IMP=0x00000001010405b4
- (void)setPreferCurrency:(id)arg1;	// IMP=0x0000000101040544
- (void)setPreferCountry:(id)arg1;	// IMP=0x0000000101040434
- (void)setPreferLanguage:(id)arg1;	// IMP=0x0000000101040348
@property(readonly) id <AFLocaleProvider> localeProvider;
- (void)setupLocaleProvider:(Class)arg1 supportedLanguages:(id)arg2;	// IMP=0x000000010103f8c4
- (id)init;	// IMP=0x000000010103f7b8

@end

