//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEMediaUploadTokenDTO : NSObject
{
    NSString *_token;	// 8 = 0x8
    NSString *_expiration;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010013d644
@property(copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;	// IMP=0x000000010013d6fc

@end
