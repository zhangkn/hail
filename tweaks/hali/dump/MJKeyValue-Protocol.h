//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MJProperty, NSArray, NSDictionary, NSString;

@protocol MJKeyValue <NSObject>

@optional
+ (NSDictionary *)objectClassInArray;
+ (NSString *)replacedKeyFromPropertyName121:(NSString *)arg1;
+ (NSDictionary *)replacedKeyFromPropertyName;
+ (NSArray *)ignoredPropertyNames;
+ (NSArray *)allowedPropertyNames;
- (void)objectDidFinishConvertingToKeyValues;
- (void)keyValuesDidFinishConvertingToObject;
- (id)newValueFromOldValue:(id)arg1 property:(MJProperty *)arg2;
@end

