//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AETraceDTO, NSString;

@interface AESearchSuggestionListDTO : NSObject
{
    NSString *_keyword;	// 8 = 0x8
    long long _number;	// 16 = 0x10
    NSString *_cateId;	// 24 = 0x18
    NSString *_catName;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    AETraceDTO *_trace;	// 48 = 0x30
}

@property(retain, nonatomic) AETraceDTO *trace; // @synthesize trace=_trace;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *catName; // @synthesize catName=_catName;
@property(retain, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;	// IMP=0x0000000100bc64d8

@end
