//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol APIPServiceProtocol <NSObject>
+ (void)doPreConnect;
- (void)finishServiceWithResult:(NSDictionary *)arg1;
- (void)startServiceWithArg:(NSDictionary *)arg1 completeBlock:(void (^)(NSDictionary *))arg2;
@end
