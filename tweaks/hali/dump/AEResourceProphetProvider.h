//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface AEResourceProphetProvider : NSObject
{
    NSDictionary *_languageDict;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100a4336c
@property(retain) NSDictionary *languageDict; // @synthesize languageDict=_languageDict;
- (void).cxx_destruct;	// IMP=0x0000000100a43a80
- (_Bool)loadLanuguagePatch:(id)arg1;	// IMP=0x0000000100a43534
- (id)languageByKey:(id)arg1 languageCode:(id)arg2;	// IMP=0x0000000100a433ec

@end

