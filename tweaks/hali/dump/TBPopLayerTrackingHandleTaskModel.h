//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBPopLayerTrackingHandleTaskModel : TBJSONModel
{
    NSString *_taskHandle;	// 8 = 0x8
    NSString *_operationName;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
@property(copy, nonatomic) NSString *taskHandle; // @synthesize taskHandle=_taskHandle;
- (void).cxx_destruct;	// IMP=0x0000000101755a00
- (_Bool)isModelWithOperationName:(id)arg1;	// IMP=0x0000000101755950

@end
