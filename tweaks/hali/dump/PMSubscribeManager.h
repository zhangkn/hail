//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface PMSubscribeManager : NSObject
{
    NSMutableArray *_processorArray;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
}

+ (void)unsubscribe:(id)arg1 bizKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101409858
+ (void)subscribe:(id)arg1 bizKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101409464
+ (id)sharedInstance;	// IMP=0x000000010140932c
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *processorArray; // @synthesize processorArray=_processorArray;
- (void).cxx_destruct;	// IMP=0x0000000101409f54
- (id)getProcessor:(id)arg1;	// IMP=0x0000000101409c18

@end

