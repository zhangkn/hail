//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFEFile : NSObject
{
    NSString *_space;	// 8 = 0x8
    NSString *_dir;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (id)fileWithSpace:(id)arg1 dir:(id)arg2 name:(id)arg3;	// IMP=0x0000000101085458
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *dir; // @synthesize dir=_dir;
@property(retain, nonatomic) NSString *space; // @synthesize space=_space;
- (void).cxx_destruct;	// IMP=0x00000001010855d4
- (id)initWithSpace:(id)arg1 dir:(id)arg2 name:(id)arg3;	// IMP=0x0000000101085380

@end

