//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString;

@interface AECardCouponCodeKeyMode : NSObject
{
    NSAttributedString *_codeString;	// 8 = 0x8
    NSAttributedString *_statusString;	// 16 = 0x10
    NSArray *_codeImageUrlList;	// 24 = 0x18
    long long _codeKeyStatus;	// 32 = 0x20
}

@property long long codeKeyStatus; // @synthesize codeKeyStatus=_codeKeyStatus;
@property(retain, nonatomic) NSArray *codeImageUrlList; // @synthesize codeImageUrlList=_codeImageUrlList;
@property(retain) NSAttributedString *statusString; // @synthesize statusString=_statusString;
@property(retain) NSAttributedString *codeString; // @synthesize codeString=_codeString;
- (void).cxx_destruct;	// IMP=0x00000001000274e0

@end

