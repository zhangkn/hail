//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TBScanResult : NSObject
{
    int _subType;	// 8 = 0x8
    int _approach;	// 12 = 0xc
    NSString *_resultType;	// 16 = 0x10
    NSString *_data;	// 24 = 0x18
    NSString *_hiddenData;	// 32 = 0x20
    NSMutableDictionary *_extData;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableDictionary *extData; // @synthesize extData=_extData;
@property(nonatomic) int approach; // @synthesize approach=_approach;
@property(retain, nonatomic) NSString *hiddenData; // @synthesize hiddenData=_hiddenData;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;	// IMP=0x00000001017d1bd0
- (id)initWithTBDecodeResult:(id)arg1;	// IMP=0x00000001017d15ac

@end
