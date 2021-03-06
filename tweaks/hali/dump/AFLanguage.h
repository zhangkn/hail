//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AFLanguage : NSObject
{
    int _writingMode;	// 8 = 0x8
    NSString *_code;	// 16 = 0x10
    NSString *_appleCode;	// 24 = 0x18
    NSString *_languageName;	// 32 = 0x20
}

+ (id)loadAllLanguages;	// IMP=0x0000000101042eb8
+ (int)stringToEnum:(id)arg1;	// IMP=0x0000000101042e94
+ (id)make:(id)arg1;	// IMP=0x0000000101042d20
@property(nonatomic) int writingMode; // @synthesize writingMode=_writingMode;
@property(retain, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
@property(retain, nonatomic) NSString *appleCode; // @synthesize appleCode=_appleCode;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;	// IMP=0x00000001010441d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000101044018

@end

