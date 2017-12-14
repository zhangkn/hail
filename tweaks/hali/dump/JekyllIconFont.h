//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JekyllIconFont : NSObject
{
    NSString *_fontName;	// 8 = 0x8
}

+ (id)fontNameWithData:(id)arg1;	// IMP=0x0000000101328cd4
+ (id)registerFontWithData:(id)arg1;	// IMP=0x0000000101328c48
+ (id)loadIconFontWithDiskData:(id)arg1;	// IMP=0x000000010132861c
+ (id)loadIconFontWithUrlData:(id *)arg1 resourceUrl:(id)arg2;	// IMP=0x0000000101328554
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;	// IMP=0x0000000101328e00
- (char *)replaceBytesWithOriginBytes:(char *)arg1 newBytes:(char *)arg2 startIndex:(long long)arg3 length:(long long)arg4;	// IMP=0x0000000101328dbc
- (long long)findBytes:(char *)arg1 oldLength:(long long)arg2 inBytes:(char *)arg3 originLength:(long long)arg4 offsetX:(long long)arg5;	// IMP=0x0000000101328d38
- (id)loadFontWithData:(id *)arg1 resourceUrl:(id)arg2;	// IMP=0x000000010132898c
- (id)fontNameWithUrl:(id)arg1 length:(long long)arg2;	// IMP=0x0000000101328760
- (id)initWithFontName:(id)arg1;	// IMP=0x00000001013286e8

@end

