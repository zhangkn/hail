//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFMultipartFormData.h"

@class AFMultipartBodyStream, NSMutableURLRequest, NSString;

@interface AFStreamingMultipartFormData : NSObject <AFMultipartFormData>
{
    NSMutableURLRequest *_request;	// 8 = 0x8
    unsigned long long _stringEncoding;	// 16 = 0x10
    NSString *_boundary;	// 24 = 0x18
    AFMultipartBodyStream *_bodyStream;	// 32 = 0x20
}

@property(retain, nonatomic) AFMultipartBodyStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(copy, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x00000001008aafdc
- (id)requestByFinalizingMultipartFormData;	// IMP=0x00000001008aacd8
- (void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;	// IMP=0x00000001008aac44
- (void)appendPartWithHeaders:(id)arg1 body:(id)arg2;	// IMP=0x00000001008aaae0
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;	// IMP=0x00000001008aa9e8
- (void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;	// IMP=0x00000001008aa89c
- (void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;	// IMP=0x00000001008aa660
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;	// IMP=0x00000001008aa1a4
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x00000001008aa050
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2;	// IMP=0x00000001008a9ef8

@end
