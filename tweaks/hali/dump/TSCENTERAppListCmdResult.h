//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSCENTERBaseResult.h"

@class NSString;

@interface TSCENTERAppListCmdResult : TSCENTERBaseResult
{
    _Bool _needRetry;	// 8 = 0x8
    NSString *_appListVer;	// 16 = 0x10
    NSString *_appListData;	// 24 = 0x18
}

@property(nonatomic) _Bool needRetry; // @synthesize needRetry=_needRetry;
@property(retain, nonatomic) NSString *appListData; // @synthesize appListData=_appListData;
@property(retain, nonatomic) NSString *appListVer; // @synthesize appListVer=_appListVer;
- (void).cxx_destruct;	// IMP=0x000000010113cbdc

@end
