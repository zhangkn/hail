//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURLResponse;

@interface TBDownloadResult : NSObject
{
    NSString *_destination;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSURLResponse *_response;	// 24 = 0x18
}

@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;	// IMP=0x0000000101647ab4
- (void)setResponse:(id)arg1;	// IMP=0x0000000101647a4c
- (void)setDestination:(id)arg1;	// IMP=0x0000000101647a14
- (void)setError:(id)arg1;	// IMP=0x00000001016479dc

@end

