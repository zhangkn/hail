//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AFNotificationBlockToken : NSObject
{
    _Bool _autoRemove;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    id _object;	// 32 = 0x20
}

+ (id)tokenFromName:(id)arg1 autoRemove:(_Bool)arg2 block:(CDUnknownBlockType)arg3 object:(id)arg4;	// IMP=0x0000000100a35c40
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x0000000100a35d9c

@end
