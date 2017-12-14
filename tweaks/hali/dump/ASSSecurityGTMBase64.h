//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASSSecurityGTMBase64 : NSObject
{
}

+ (id)webSafeDecodeString:(id)arg1;	// IMP=0x0000000101140d50
+ (id)stringByWebSafeEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;	// IMP=0x0000000101140ccc
+ (id)stringByWebSafeEncodingData:(id)arg1 padded:(_Bool)arg2;	// IMP=0x0000000101140be0
+ (id)webSafeDecodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000101140bc8
+ (id)webSafeEncodeBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;	// IMP=0x0000000101140bac
+ (id)webSafeDecodeData:(id)arg1;	// IMP=0x0000000101140b20
+ (id)webSafeEncodeData:(id)arg1 padded:(_Bool)arg2;	// IMP=0x0000000101140a88
+ (id)decodeString:(id)arg1;	// IMP=0x00000001011409cc
+ (id)stringByEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000010114094c
+ (id)stringByEncodingData:(id)arg1;	// IMP=0x000000010114086c
+ (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000101140854
+ (id)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000010114083c
+ (id)decodeData:(id)arg1;	// IMP=0x00000001011407b0
+ (id)encodeData:(id)arg1;	// IMP=0x0000000101140724
+ (unsigned long long)baseDecode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 requirePadding:(_Bool)arg6;	// IMP=0x0000000101141190
+ (unsigned long long)baseEncode:(const char *)arg1 srcLen:(unsigned long long)arg2 destBytes:(char *)arg3 destLen:(unsigned long long)arg4 charset:(const char *)arg5 padded:(_Bool)arg6;	// IMP=0x0000000101141028
+ (id)baseDecode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 requirePadding:(_Bool)arg4;	// IMP=0x0000000101140f10
+ (id)baseEncode:(const void *)arg1 length:(unsigned long long)arg2 charset:(const char *)arg3 padded:(_Bool)arg4;	// IMP=0x0000000101140e0c

@end
