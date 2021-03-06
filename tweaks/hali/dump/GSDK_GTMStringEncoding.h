//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface GSDK_GTMStringEncoding : NSObject
{
    NSData *charMapData_;	// 8 = 0x8
    char *charMap_;	// 16 = 0x10
    int reverseCharMap_[128];	// 24 = 0x18
    int shift_;	// 536 = 0x218
    int mask_;	// 540 = 0x21c
    _Bool doPad_;	// 544 = 0x220
    BOOL paddingChar_;	// 545 = 0x221
    int padLen_;	// 548 = 0x224
}

+ (id)stringEncodingWithString:(id)arg1;	// IMP=0x000000010092dd04
+ (id)rfc4648Base64WebsafeStringEncoding;	// IMP=0x000000010092dcac
+ (id)rfc4648Base64StringEncoding;	// IMP=0x000000010092dc54
+ (id)crockfordBase32StringEncoding;	// IMP=0x000000010092dc0c
+ (id)rfc4648Base32HexStringEncoding;	// IMP=0x000000010092dbb4
+ (id)rfc4648Base32StringEncoding;	// IMP=0x000000010092db5c
+ (id)hexStringEncoding;	// IMP=0x000000010092db14
+ (id)binaryStringEncoding;	// IMP=0x000000010092db00
- (id)stringByDecoding:(id)arg1;	// IMP=0x000000010092e664
- (id)decode:(id)arg1;	// IMP=0x000000010092e470
- (id)encodeString:(id)arg1;	// IMP=0x000000010092e42c
- (id)encode:(id)arg1;	// IMP=0x000000010092e1c8
- (void)setPaddingChar:(BOOL)arg1;	// IMP=0x000000010092e1a4
- (void)setDoPad:(_Bool)arg1;	// IMP=0x000000010092e194
- (_Bool)doPad;	// IMP=0x000000010092e184
- (void)ignoreCharacters:(id)arg1;	// IMP=0x000000010092e07c
- (void)addDecodeSynonyms:(id)arg1;	// IMP=0x000000010092e000
- (id)description;	// IMP=0x000000010092dfa4
- (void)dealloc;	// IMP=0x000000010092df48
- (id)initWithString:(id)arg1;	// IMP=0x000000010092dd44

@end

