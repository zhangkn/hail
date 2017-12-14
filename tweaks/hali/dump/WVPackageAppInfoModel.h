//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVModelObject.h"

@class NSArray, NSString;

@interface WVPackageAppInfoModel : WVModelObject
{
    unsigned long long _seq;	// 8 = 0x8
    NSString *_mappingUrl;	// 16 = 0x10
    NSArray *_addFolders;	// 24 = 0x18
    NSArray *_removedFolders;	// 32 = 0x20
    NSArray *_removedRes;	// 40 = 0x28
    long long _appMonitor;	// 48 = 0x30
}

@property(nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(retain, nonatomic) NSArray *removedRes; // @synthesize removedRes=_removedRes;
@property(retain, nonatomic) NSArray *removedFolders; // @synthesize removedFolders=_removedFolders;
@property(retain, nonatomic) NSArray *addFolders; // @synthesize addFolders=_addFolders;
@property(retain, nonatomic) NSString *mappingUrl; // @synthesize mappingUrl=_mappingUrl;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (void).cxx_destruct;	// IMP=0x0000000101bb7cbc

@end

