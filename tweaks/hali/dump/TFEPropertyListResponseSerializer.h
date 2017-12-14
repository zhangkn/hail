//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFEHTTPResponseSerializer.h"

@interface TFEPropertyListResponseSerializer : TFEHTTPResponseSerializer
{
    unsigned long long _format;	// 32 = 0x20
    unsigned long long _readOptions;	// 40 = 0x28
}

+ (id)serializerWithFormat:(unsigned long long)arg1 readOptions:(unsigned long long)arg2;	// IMP=0x000000010106b168
+ (id)serializer;	// IMP=0x000000010106b154
@property(nonatomic) unsigned long long readOptions; // @synthesize readOptions=_readOptions;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010106b6c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010106b558
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010106b3b8
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x000000010106b288
- (id)init;	// IMP=0x000000010106b1d4

@end

