//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TBSDKBIZCacheObject : NSObject
{
    _Bool _compress;	// 8 = 0x8
    _Bool _encrypt;	// 9 = 0x9
    _Bool _removable;	// 10 = 0xa
    int _size;	// 12 = 0xc
    NSString *_blockName;	// 16 = 0x10
    NSMutableArray *_apis;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *apis; // @synthesize apis=_apis;
@property(nonatomic) _Bool removable; // @synthesize removable=_removable;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
@property(nonatomic) _Bool compress; // @synthesize compress=_compress;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *blockName; // @synthesize blockName=_blockName;
- (void).cxx_destruct;	// IMP=0x0000000101d0d9d8
- (id)init;	// IMP=0x0000000101d0d884
- (id)initWithBlock:(id)arg1 withSize:(int)arg2 withCompress:(_Bool)arg3 withEncrypt:(_Bool)arg4 withRemovable:(_Bool)arg5;	// IMP=0x0000000101d0d7b0

@end

