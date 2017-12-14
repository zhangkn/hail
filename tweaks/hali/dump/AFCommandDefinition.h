//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface AFCommandDefinition : NSObject
{
    NSMutableArray *_aliases;	// 8 = 0x8
    _Bool _needLogin;	// 16 = 0x10
    unsigned long long _commandType;	// 24 = 0x18
    unsigned long long _threadType;	// 32 = 0x20
    NSArray *_requires;	// 40 = 0x28
    Class _commandProviderClass;	// 48 = 0x30
}

@property(retain, nonatomic) Class commandProviderClass; // @synthesize commandProviderClass=_commandProviderClass;
@property(readonly, nonatomic) NSArray *requires; // @synthesize requires=_requires;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(nonatomic) unsigned long long threadType; // @synthesize threadType=_threadType;
@property(nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;	// IMP=0x0000000101009a18
- (id)description;	// IMP=0x000000010100981c
@property(readonly, nonatomic) NSArray *aliases;
- (void)appendAlias:(id)arg1;	// IMP=0x000000010100976c
- (id)init;	// IMP=0x00000001010096c0

@end
