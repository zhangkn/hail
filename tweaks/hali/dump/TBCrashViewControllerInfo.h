//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBCrashViewControllerInfo : NSObject
{
    NSMutableArray *_crashReporterViewControllers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010163f880
@property(retain) NSMutableArray *crashReporterViewControllers; // @synthesize crashReporterViewControllers=_crashReporterViewControllers;
- (void).cxx_destruct;	// IMP=0x000000010163fde8
- (void)registerCrashViewControllerInfo:(id)arg1;	// IMP=0x000000010163fccc
- (id)crashReportCallBackViewControllerInfo;	// IMP=0x000000010163fad4
- (id)getViewControllerInfo:(id)arg1;	// IMP=0x000000010163f9b4
- (id)init;	// IMP=0x000000010163f934

@end

