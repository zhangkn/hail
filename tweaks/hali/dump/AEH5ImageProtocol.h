//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface AEH5ImageProtocol : NSURLProtocol
{
    id <SDWebImageOperation> _downloadOperation;	// 16 = 0x10
}

+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x00000001000071ac
+ (_Bool)canInitWithTask:(id)arg1;	// IMP=0x0000000100007150
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0000000100006eb4
- (void).cxx_destruct;	// IMP=0x0000000100007d04
- (void)stopLoading;	// IMP=0x0000000100007cec
- (void)startLoading;	// IMP=0x00000001000071c4

@end

