//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AVFSRelation : NSObject
{
    Class _sourceClass;	// 8 = 0x8
    Class _targetClass;	// 16 = 0x10
    NSString *_sourceProperty;	// 24 = 0x18
    NSString *_targetProperty;	// 32 = 0x20
    NSString *_entityPropertyName;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *entityPropertyName; // @synthesize entityPropertyName=_entityPropertyName;
@property(retain, nonatomic) NSString *targetProperty; // @synthesize targetProperty=_targetProperty;
@property(retain, nonatomic) NSString *sourceProperty; // @synthesize sourceProperty=_sourceProperty;
@property(retain) Class targetClass; // @synthesize targetClass=_targetClass;
@property(retain) Class sourceClass; // @synthesize sourceClass=_sourceClass;
- (void).cxx_destruct;	// IMP=0x00000001011d7d30

@end

