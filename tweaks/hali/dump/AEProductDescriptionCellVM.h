//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEProductDescriptionCellVM : NSObject
{
    _Bool _dark;	// 8 = 0x8
    NSString *_keyText;	// 16 = 0x10
    NSString *_valueText;	// 24 = 0x18
    CDUnknownBlockType _tapBlock;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) _Bool dark; // @synthesize dark=_dark;
@property(retain, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;
@property(retain, nonatomic) NSString *keyText; // @synthesize keyText=_keyText;
- (void).cxx_destruct;	// IMP=0x00000001005968ac
- (id)initWithKey:(id)arg1 value:(id)arg2 dark:(_Bool)arg3;	// IMP=0x000000010059671c

@end

