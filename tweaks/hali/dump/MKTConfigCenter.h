//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKTConfigCenter : NSObject
{
}

+ (id)getPMSendChannel;	// IMP=0x0000000101343778
+ (id)getPullErrorMax;	// IMP=0x0000000101343754
+ (id)getLimitDelayTime;	// IMP=0x0000000101343730
+ (id)getPullTimeout;	// IMP=0x000000010134370c
+ (id)getPullChkTimer;	// IMP=0x00000001013436e8
+ (id)getPullTimer;	// IMP=0x00000001013436c4
+ (id)getForcePullMode;	// IMP=0x00000001013436a0
+ (id)getMonitorDefaultTime;	// IMP=0x000000010134367c
+ (id)getArvMod;	// IMP=0x0000000101343610
+ (id)getArvRight;	// IMP=0x00000001013435a4
+ (id)getArvLeft;	// IMP=0x0000000101343538
+ (_Bool)getArvOpen;	// IMP=0x00000001013434c4
+ (long long)getMonitorAll;	// IMP=0x0000000101343454
+ (_Bool)getMonitorArvMsgNoPull;	// IMP=0x00000001013433e0
+ (_Bool)getMonitorArvMsg;	// IMP=0x000000010134336c
+ (long long)getArvMonitorConfig;	// IMP=0x00000001013432fc
+ (id)getSybTypeLimitConfig;	// IMP=0x0000000101343284
+ (id)getConfigByGroupName:(id)arg1 key:(id)arg2;	// IMP=0x00000001013431e0
+ (id)sharedInstance;	// IMP=0x00000001013430d4
- (id)getValueByGroup:(id)arg1 key:(id)arg2;	// IMP=0x0000000101343188

@end

