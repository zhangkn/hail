//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileFieldDTO.h"

@class NSString;

@interface AETileTextFieldDTO : AETileFieldDTO
{
    _Bool _isImageText;	// 64 = 0x40
    NSString *_text;	// 72 = 0x48
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100a1e5b4
@property(nonatomic) _Bool isImageText; // @synthesize isImageText=_isImageText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;	// IMP=0x0000000100a1e664

@end

