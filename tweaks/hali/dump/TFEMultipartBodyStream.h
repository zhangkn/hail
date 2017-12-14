//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

#import "NSCopying.h"
#import "NSStreamDelegate.h"

@class NSEnumerator, NSError, NSMutableArray, NSMutableData, NSOutputStream, NSString, TFEHTTPBodyPart;

@interface TFEMultipartBodyStream : NSInputStream <NSCopying, NSStreamDelegate>
{
    unsigned long long streamStatus;	// 8 = 0x8
    NSError *streamError;	// 16 = 0x10
    unsigned long long _numberOfBytesInPacket;	// 24 = 0x18
    double _delay;	// 32 = 0x20
    NSInputStream *_inputStream;	// 40 = 0x28
    unsigned long long _stringEncoding;	// 48 = 0x30
    NSMutableArray *_HTTPBodyParts;	// 56 = 0x38
    NSEnumerator *_HTTPBodyPartEnumerator;	// 64 = 0x40
    TFEHTTPBodyPart *_currentHTTPBodyPart;	// 72 = 0x48
    NSOutputStream *_outputStream;	// 80 = 0x50
    NSMutableData *_buffer;	// 88 = 0x58
}

@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) TFEHTTPBodyPart *currentHTTPBodyPart; // @synthesize currentHTTPBodyPart=_currentHTTPBodyPart;
@property(retain, nonatomic) NSEnumerator *HTTPBodyPartEnumerator; // @synthesize HTTPBodyPartEnumerator=_HTTPBodyPartEnumerator;
@property(retain, nonatomic) NSMutableArray *HTTPBodyParts; // @synthesize HTTPBodyParts=_HTTPBodyParts;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) unsigned long long numberOfBytesInPacket; // @synthesize numberOfBytesInPacket=_numberOfBytesInPacket;
- (void)setStreamError:(id)arg1;	// IMP=0x00000001010a4870
- (id)streamError;	// IMP=0x00000001010a4860
- (void)setStreamStatus:(unsigned long long)arg1;	// IMP=0x00000001010a4850
- (unsigned long long)streamStatus;	// IMP=0x00000001010a4840
- (void).cxx_destruct;	// IMP=0x00000001010a4a8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001010a4698
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;	// IMP=0x00000001010a4690
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000001010a468c
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;	// IMP=0x00000001010a4688
@property(readonly, nonatomic) unsigned long long contentLength;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000001010a4558
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x00000001010a4554
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001010a454c
- (id)propertyForKey:(id)arg1;	// IMP=0x00000001010a4544
- (void)close;	// IMP=0x00000001010a4534
- (void)open;	// IMP=0x00000001010a4474
- (_Bool)hasBytesAvailable;	// IMP=0x00000001010a4450
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x00000001010a4448
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00000001010a41b8
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)appendHTTPBodyPart:(id)arg1;	// IMP=0x00000001010a40f8
- (void)setInitialAndFinalBoundaries;	// IMP=0x00000001010a3ed0
- (id)initWithStringEncoding:(unsigned long long)arg1;	// IMP=0x00000001010a3e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

