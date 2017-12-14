//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BrowserInfoGathererBase : NSObject
{
    unsigned int _mimeTypeCount;	// 8 = 0x8
    NSString *_userAgent;	// 16 = 0x10
    NSString *_pluginsFromJS;	// 24 = 0x18
    NSString *_pluginCount;	// 32 = 0x20
    NSString *_plugins;	// 40 = 0x28
    NSString *_mimeTypes;	// 48 = 0x30
}

+ (id)getFakeBrowserString;	// IMP=0x000000010116428c
@property(nonatomic) unsigned int mimeTypeCount; // @synthesize mimeTypeCount=_mimeTypeCount;
@property(retain, nonatomic) NSString *mimeTypes; // @synthesize mimeTypes=_mimeTypes;
@property(retain, nonatomic) NSString *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) NSString *pluginCount; // @synthesize pluginCount=_pluginCount;
@property(retain, nonatomic) NSString *pluginsFromJS; // @synthesize pluginsFromJS=_pluginsFromJS;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;	// IMP=0x0000000101164a04
- (id)init;	// IMP=0x000000010116411c

@end

