//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCommandService.h"

@class AEUserTaskService, NSString;

@interface AESNSDetailCommand : AFCommandService
{
    AEUserTaskService *requestService;	// 8 = 0x8
    NSString *_from;	// 16 = 0x10
}

+ (id)paramsDescription;	// IMP=0x00000001002729b8
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;	// IMP=0x0000000100273288
- (id)init;	// IMP=0x00000001002731c0
- (void)doRequest4VipTaskDetail;	// IMP=0x0000000100272f60
- (void)doRequest4TaskDetail;	// IMP=0x0000000100272d00
- (void)checkTask;	// IMP=0x0000000100272ae4
- (void)runWithParams:(id)arg1;	// IMP=0x00000001002729c0

@end

