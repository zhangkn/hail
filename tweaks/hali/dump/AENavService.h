//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AENavService : NSObject
{
    Class _bizClazz;	// 8 = 0x8
    SEL _bizSel;	// 16 = 0x10
    CDUnknownBlockType _bizBlock;	// 24 = 0x18
}

+ (id)serviceByClass:(Class)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b607e0
+ (id)serviceByClass:(Class)arg1 selector:(SEL)arg2;	// IMP=0x0000000100b6076c
@property(copy, nonatomic) CDUnknownBlockType bizBlock; // @synthesize bizBlock=_bizBlock;
@property(nonatomic) SEL bizSel; // @synthesize bizSel=_bizSel;
@property(retain, nonatomic) Class bizClazz; // @synthesize bizClazz=_bizClazz;
- (void).cxx_destruct;	// IMP=0x0000000100b608cc

@end

