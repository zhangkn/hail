//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AETileStyleDTO, NSDictionary, NSNumber, NSString;

@interface AETileFieldDTO : NSObject
{
    NSNumber *_index;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSDictionary *_extInfo;	// 24 = 0x18
    NSDictionary *_track;	// 32 = 0x20
    NSDictionary *_action;	// 40 = 0x28
    id _value;	// 48 = 0x30
    AETileStyleDTO *_style;	// 56 = 0x38
}

+ (id)objectWithKeyValues:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100a1dbfc
@property(retain, nonatomic) AETileStyleDTO *style; // @synthesize style=_style;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSDictionary *action; // @synthesize action=_action;
@property(copy, nonatomic) NSDictionary *track; // @synthesize track=_track;
@property(copy, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
- (void).cxx_destruct;	// IMP=0x0000000100a1e510
- (void)keyValuesDidFinishConvertingToObject;	// IMP=0x0000000100a1e154
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;	// IMP=0x0000000100a1e068

@end

