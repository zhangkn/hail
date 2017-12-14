//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MirrorMaterialManager : NSObject
{
    id <MirrorGetMaterialDelegate> _delegate;	// 8 = 0x8
}

@property(retain, nonatomic) id <MirrorGetMaterialDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101357774
- (void)dealloc;	// IMP=0x0000000101357700
- (void)clear;	// IMP=0x00000001013576fc
- (void)resumeDownload;	// IMP=0x00000001013576f8
- (void)pauseDownload;	// IMP=0x00000001013576f4
- (void)cancelDownload;	// IMP=0x00000001013576f0
- (void)getMaterialWithMakeUpModelArray:(id)arg1 osVersion:(id)arg2;	// IMP=0x00000001013576ec
- (void)getMaterialWithMakeUpArrayData:(id)arg1 osVersion:(id)arg2;	// IMP=0x00000001013576e8
- (id)initWithType:(int)arg1;	// IMP=0x0000000101357680

@end
