//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBAccsUploadStrategy : TBJSONModel
{
    long long _interval;	// 8 = 0x8
    long long _logNum;	// 16 = 0x10
    long long _logSize;	// 24 = 0x18
}

@property(nonatomic) long long logSize; // @synthesize logSize=_logSize;
@property(nonatomic) long long logNum; // @synthesize logNum=_logNum;
@property(nonatomic) long long interval; // @synthesize interval=_interval;

@end

