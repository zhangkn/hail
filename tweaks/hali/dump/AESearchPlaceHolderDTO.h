//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AESearchPlaceHolderDTO : NSObject
{
    NSString *_searchKeyword;	// 8 = 0x8
    NSString *_placeholder;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100c504c4
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;	// IMP=0x0000000100c50608

@end

