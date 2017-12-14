//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSBase64 : NSObject
{
}

+ (id)webSafeDecodeString:(id)arg1;	// IMP=0x00000001017e4f88
+ (id)stringByWebSafeEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;	// IMP=0x00000001017e4de4
+ (id)stringByWebSafeEncodingData:(id)arg1 padded:(_Bool)arg2;	// IMP=0x00000001017e4bec
+ (id)webSafeDecodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001017e4b50
+ (id)webSafeEncodeBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;	// IMP=0x00000001017e4acc
+ (id)webSafeDecodeData:(id)arg1;	// IMP=0x00000001017e49f0
+ (id)webSafeEncodeData:(id)arg1 padded:(_Bool)arg2;	// IMP=0x00000001017e4918
+ (id)decodeString:(id)arg1;	// IMP=0x00000001017e4740
+ (id)stringByEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001017e4588
+ (id)stringByEncodingData:(id)arg1;	// IMP=0x00000001017e4374
+ (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001017e42ec
+ (id)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000001017e4260
+ (id)decodeData:(id)arg1;	// IMP=0x00000001017e4198
+ (id)encodeData:(id)arg1;	// IMP=0x00000001017e40c0
+ (unsigned long long)baseDecode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 requirePadding:(_Bool)arg6;	// IMP=0x00000001017e690c
+ (unsigned long long)baseEncode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 padded:(_Bool)arg6;	// IMP=0x00000001017e5890
+ (id)baseDecode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 requirePadding:(_Bool)arg4;	// IMP=0x00000001017e55bc
+ (id)baseEncode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 padded:(_Bool)arg4;	// IMP=0x00000001017e515c

@end

