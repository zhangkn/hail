//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface NWCFHTTPRequestManager : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010139c14c
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;	// IMP=0x000000010139c374
- (id)getRequestWithURLRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010139c258
- (id)init;	// IMP=0x000000010139c1cc

@end
