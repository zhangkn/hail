//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ObjectPool : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
}

+ (id)getInstance;	// IMP=0x0000000101d30f7c
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;	// IMP=0x0000000101d312fc
- (id)nextId;	// IMP=0x0000000101d31284
- (void)remove:(id)arg1;	// IMP=0x0000000101d311d4
- (id)pending:(id)arg1 timeout:(long long)arg2;	// IMP=0x0000000101d310f8
- (void)dealloc;	// IMP=0x0000000101d31088
- (id)init;	// IMP=0x0000000101d30ffc

@end

