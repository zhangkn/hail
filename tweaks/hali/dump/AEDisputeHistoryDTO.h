//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEDisputeHistoryDTO : NSObject
{
    NSString *_errorCode;	// 8 = 0x8
    NSArray *_processList;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *processList; // @synthesize processList=_processList;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;	// IMP=0x0000000100091358

@end

