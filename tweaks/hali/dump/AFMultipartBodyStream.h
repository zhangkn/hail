//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

#import "NSCopying.h"
#import "NSStreamDelegate.h"

@class AFHTTPBodyPart, NSEnumerator, NSError, NSMutableArray, NSMutableData, NSOutputStream, NSString;

@interface AFMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate>
{
    id <NSStreamDelegate> delegate;	// 8 = 0x8
    unsigned long long streamStatus;	// 16 = 0x10
    NSError *streamError;	// 24 = 0x18
    unsigned long long _numberOfBytesInPacket;	// 32 = 0x20
    double _delay;	// 40 = 0x28
    NSInputStream *_inputStream;	// 48 = 0x30
    unsigned long long _stringEncoding;	// 56 = 0x38
    NSMutableArray *_HTTPBodyParts;	// 64 = 0x40
    NSEnumerator *_HTTPBodyPartEnumerator;	// 72 = 0x48
    AFHTTPBodyPart *_currentHTTPBodyPart;	// 80 = 0x50
    NSOutputStream *_outputStream;	// 88 = 0x58
    NSMutableData *_buffer;	// 96 = 0x60
}

@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) AFHTTPBodyPart *currentHTTPBodyPart; // @synthesize currentHTTPBodyPart=_currentHTTPBodyPart;
@property(retain, nonatomic) NSEnumerator *HTTPBodyPartEnumerator; // @synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator;
@property(retain, nonatomic) NSMutableArray *HTTPBodyParts; // @synthesize HTTPBodyParts=_HTTPBodyParts;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) unsigned long long numberOfBytesInPacket; // @synthesize numberOfBytesInPacket=_numberOfBytesInPacket;
- (void)setStreamError:(id)arg1;	// IMP=0x00000001008abb14
- (id)streamError;	// IMP=0x00000001008abb04
- (void)setStreamStatus:(unsigned long long)arg1;	// IMP=0x00000001008abaf4
- (unsigned long long)streamStatus;	// IMP=0x00000001008abae4
- (void)setDelegate:(id)arg1;	// IMP=0x00000001008abad4
- (id)delegate;	// IMP=0x00000001008abac4
- (void).cxx_destruct;	// IMP=0x00000001008abd30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008ab910
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;	// IMP=0x00000001008ab908
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000001008ab904
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000001008ab900
@property(readonly, nonatomic) unsigned long long contentLength;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000001008ab7d0
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000001008ab7cc
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001008ab7c4
- (id)propertyForKey:(id)arg1;	// IMP=0x00000001008ab7bc
- (void)close;	// IMP=0x00000001008ab7ac
- (void)open;	// IMP=0x00000001008ab6ec
- (_Bool)hasBytesAvailable;	// IMP=0x00000001008ab6c8
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x00000001008ab6c0
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000001008ab3e8
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)appendHTTPBodyPart:(id)arg1;	// IMP=0x00000001008ab328
- (void)setInitialAndFinalBoundaries;	// IMP=0x00000001008ab0fc
- (id)initWithStringEncoding:(unsigned long long)arg1;	// IMP=0x00000001008ab030

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

