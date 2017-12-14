//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDB, AliDBExecResult, NSArray, NSMutableArray, NSString;

@interface DBOpertaion : NSObject
{
    _Bool _isWrite;	// 8 = 0x8
    _Bool _isAttach;	// 9 = 0x9
    _Bool _isTranscation;	// 10 = 0xa
    _Bool _isBatch;	// 11 = 0xb
    _Bool _isLog;	// 12 = 0xc
    _Bool _isMerged;	// 13 = 0xd
    NSString *_type;	// 16 = 0x10
    NSString *_sql;	// 24 = 0x18
    NSArray *_arguments;	// 32 = 0x20
    CDUnknownBlockType _transactionBlock;	// 40 = 0x28
    CDUnknownBlockType _execCallback;	// 48 = 0x30
    CDUnknownBlockType _extExecCallback;	// 56 = 0x38
    AliDBExecResult *_result;	// 64 = 0x40
    id _extContext;	// 72 = 0x48
    id _extResult;	// 80 = 0x50
    id <AliDBSQLExtProcessor> _processor;	// 88 = 0x58
    id <AliDBLoggerProtocol> _logger;	// 96 = 0x60
    double _beginTime;	// 104 = 0x68
    double _endTime;	// 112 = 0x70
    AliDB *_dbHandle;	// 120 = 0x78
    NSMutableArray *_mergedQueue;	// 128 = 0x80
}

@property(retain, nonatomic) NSMutableArray *mergedQueue; // @synthesize mergedQueue=_mergedQueue;
@property(nonatomic) _Bool isMerged; // @synthesize isMerged=_isMerged;
@property(nonatomic) __weak AliDB *dbHandle; // @synthesize dbHandle=_dbHandle;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool isLog; // @synthesize isLog=_isLog;
@property(nonatomic) __weak id <AliDBLoggerProtocol> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <AliDBSQLExtProcessor> processor; // @synthesize processor=_processor;
@property(retain, nonatomic) id extResult; // @synthesize extResult=_extResult;
@property(retain, nonatomic) id extContext; // @synthesize extContext=_extContext;
@property(retain, nonatomic) AliDBExecResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType extExecCallback; // @synthesize extExecCallback=_extExecCallback;
@property(copy, nonatomic) CDUnknownBlockType execCallback; // @synthesize execCallback=_execCallback;
@property(copy, nonatomic) CDUnknownBlockType transactionBlock; // @synthesize transactionBlock=_transactionBlock;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(nonatomic) _Bool isBatch; // @synthesize isBatch=_isBatch;
@property(nonatomic) _Bool isTranscation; // @synthesize isTranscation=_isTranscation;
@property(nonatomic) _Bool isAttach; // @synthesize isAttach=_isAttach;
@property(nonatomic) _Bool isWrite; // @synthesize isWrite=_isWrite;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x00000001011b9de0
- (void)dealloc;	// IMP=0x00000001011b99fc
- (id)init;	// IMP=0x00000001011b9970

@end

