//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSString;

@interface VKPropertyHelper : VKObject
{
    _Bool _isPrimitive;	// 8 = 0x8
    _Bool _isModelsArray;	// 9 = 0x9
    _Bool _isModel;	// 10 = 0xa
    NSString *_propertyName;	// 16 = 0x10
    NSString *_propertyClassName;	// 24 = 0x18
    Class _propertyClass;	// 32 = 0x20
    struct objc_property *_property;	// 40 = 0x28
}

@property(nonatomic) struct objc_property *property; // @synthesize property=_property;
@property(nonatomic) _Bool isModel; // @synthesize isModel=_isModel;
@property(nonatomic) _Bool isModelsArray; // @synthesize isModelsArray=_isModelsArray;
@property(nonatomic) _Bool isPrimitive; // @synthesize isPrimitive=_isPrimitive;
@property(retain, nonatomic) Class propertyClass; // @synthesize propertyClass=_propertyClass;
@property(retain, nonatomic) NSString *propertyClassName; // @synthesize propertyClassName=_propertyClassName;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;	// IMP=0x00000001009546d4
- (id)initWith:(struct objc_property *)arg1;	// IMP=0x0000000100954128

@end

