//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WVBridgePermission : NSObject
{
    BOOL _permitted;	// 8 = 0x8
    NSDictionary *_errorInfo;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
}

+ (id)permissionNotSure;	// IMP=0x0000000101b680c0
+ (id)permissionDenied:(id)arg1;	// IMP=0x0000000101b68058
+ (id)permissionAllowed;	// IMP=0x0000000101b67f9c
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(readonly, nonatomic, getter=isPermitted) BOOL permitted; // @synthesize permitted=_permitted;
- (void).cxx_destruct;	// IMP=0x0000000101b68294
- (id)initWithPermitted:(BOOL)arg1 withErrorInfo:(id)arg2;	// IMP=0x0000000101b68190
- (id)init;	// IMP=0x0000000101b6817c
- (void)setIsPermitted:(_Bool)arg1;	// IMP=0x0000000101b67f8c

@end

