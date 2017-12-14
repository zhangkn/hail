//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface GPBCodedOutputStream : NSObject
{
    struct GPBOutputBufferState state_;	// 8 = 0x8
    NSMutableData *buffer_;	// 40 = 0x28
}

+ (id)streamWithData:(id)arg1;	// IMP=0x000000010178e9dc
+ (id)streamWithOutputStream:(id)arg1;	// IMP=0x000000010178e964
- (void)writeRawLittleEndian64:(long long)arg1;	// IMP=0x0000000101791f68
- (void)writeRawLittleEndian32:(int)arg1;	// IMP=0x0000000101791f54
- (void)writeRawVarint64:(long long)arg1;	// IMP=0x0000000101791f40
- (void)writeRawVarintSizeTAs32:(unsigned long long)arg1;	// IMP=0x0000000101791f2c
- (void)writeRawVarint32:(int)arg1;	// IMP=0x0000000101791f18
- (void)writeTag:(unsigned int)arg1 format:(int)arg2;	// IMP=0x0000000101791ee0
- (void)writeRawPtr:(const void *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;	// IMP=0x0000000101791de8
- (void)writeRawData:(id)arg1;	// IMP=0x0000000101791d84
- (void)writeRawByte:(unsigned char)arg1;	// IMP=0x0000000101791d70
- (void)flush;	// IMP=0x0000000101791cb8
- (void)writeRawMessageSetExtension:(int)arg1 value:(id)arg2;	// IMP=0x0000000101791c18
- (void)writeMessageSetExtension:(int)arg1 value:(id)arg2;	// IMP=0x0000000101791b78
- (void)writeUnknownGroupArray:(int)arg1 values:(id)arg2;	// IMP=0x0000000101791a64
- (void)writeGroupArray:(int)arg1 values:(id)arg2;	// IMP=0x0000000101791950
- (void)writeBytesArray:(int)arg1 values:(id)arg2;	// IMP=0x000000010179183c
- (void)writeMessageArray:(int)arg1 values:(id)arg2;	// IMP=0x0000000101791728
- (void)writeStringArray:(int)arg1 values:(id)arg2;	// IMP=0x0000000101791614
- (void)writeEnumArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101791388
- (void)writeBoolArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101791160
- (void)writeSFixed32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101790f38
- (void)writeSFixed64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101790d10
- (void)writeSInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101790ac0
- (void)writeSInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101790824
- (void)writeFixed32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000001017905fc
- (void)writeFixed64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x00000001017903d4
- (void)writeUInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101790148
- (void)writeInt32Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x000000010178fea4
- (void)writeInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x000000010178fc60
- (void)writeUInt64Array:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x000000010178fa1c
- (void)writeFloatArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x000000010178f804
- (void)writeDoubleArray:(int)arg1 values:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x000000010178f5ec
- (void)writeSInt64:(int)arg1 value:(long long)arg2;	// IMP=0x000000010178f5a0
- (void)writeSInt64NoTag:(long long)arg1;	// IMP=0x000000010178f588
- (void)writeSInt32:(int)arg1 value:(int)arg2;	// IMP=0x000000010178f53c
- (void)writeSInt32NoTag:(int)arg1;	// IMP=0x000000010178f524
- (void)writeSFixed64:(int)arg1 value:(long long)arg2;	// IMP=0x000000010178f4dc
- (void)writeSFixed64NoTag:(long long)arg1;	// IMP=0x000000010178f4c8
- (void)writeSFixed32:(int)arg1 value:(int)arg2;	// IMP=0x000000010178f480
- (void)writeSFixed32NoTag:(int)arg1;	// IMP=0x000000010178f46c
- (void)writeEnum:(int)arg1 value:(int)arg2;	// IMP=0x000000010178f424
- (void)writeEnumNoTag:(int)arg1;	// IMP=0x000000010178f410
- (void)writeUInt32:(int)arg1 value:(unsigned int)arg2;	// IMP=0x000000010178f3c8
- (void)writeUInt32NoTag:(unsigned int)arg1;	// IMP=0x000000010178f3b4
- (void)writeBytes:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f358
- (void)writeBytesNoTag:(id)arg1;	// IMP=0x000000010178f2f8
- (void)writeMessage:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f29c
- (void)writeMessageNoTag:(id)arg1;	// IMP=0x000000010178f23c
- (void)writeUnknownGroup:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f1d8
- (void)writeUnknownGroupNoTag:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f184
- (void)writeGroup:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f120
- (void)writeGroupNoTag:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f0cc
- (void)writeString:(int)arg1 value:(id)arg2;	// IMP=0x000000010178f070
- (void)writeStringNoTag:(id)arg1;	// IMP=0x000000010178ee7c
- (void)writeBool:(int)arg1 value:(_Bool)arg2;	// IMP=0x000000010178ee34
- (void)writeBoolNoTag:(_Bool)arg1;	// IMP=0x000000010178edd8
- (void)writeFixed32:(int)arg1 value:(unsigned int)arg2;	// IMP=0x000000010178ed90
- (void)writeFixed32NoTag:(unsigned int)arg1;	// IMP=0x000000010178ed7c
- (void)writeFixed64:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x000000010178ed34
- (void)writeFixed64NoTag:(unsigned long long)arg1;	// IMP=0x000000010178ed20
- (void)writeInt32:(int)arg1 value:(int)arg2;	// IMP=0x000000010178ecd8
- (void)writeInt32NoTag:(int)arg1;	// IMP=0x000000010178ecb4
- (void)writeInt64:(int)arg1 value:(long long)arg2;	// IMP=0x000000010178ec6c
- (void)writeInt64NoTag:(long long)arg1;	// IMP=0x000000010178ec58
- (void)writeUInt64:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x000000010178ec10
- (void)writeUInt64NoTag:(unsigned long long)arg1;	// IMP=0x000000010178eba4
- (void)writeFloat:(int)arg1 value:(float)arg2;	// IMP=0x000000010178eb54
- (void)writeFloatNoTag:(float)arg1;	// IMP=0x000000010178eaf8
- (void)writeDouble:(int)arg1 value:(double)arg2;	// IMP=0x000000010178eaa8
- (void)writeDoubleNoTag:(double)arg1;	// IMP=0x000000010178ea1c
- (id)initWithOutputStream:(id)arg1 data:(id)arg2;	// IMP=0x000000010178e88c
- (id)initWithData:(id)arg1;	// IMP=0x000000010178e874
- (id)initWithOutputStream:(id)arg1;	// IMP=0x000000010178e820
- (void)dealloc;	// IMP=0x000000010178e78c

@end

