//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@interface AEUGCVideoLPResult : NSObject
{
    _Bool _hasNext;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSString *_nextStartRowKey;	// 24 = 0x18
    NSArray *_liveSceneArr;	// 32 = 0x20
}

@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSArray *liveSceneArr; // @synthesize liveSceneArr=_liveSceneArr;
@property(copy, nonatomic) NSString *nextStartRowKey; // @synthesize nextStartRowKey=_nextStartRowKey;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;	// IMP=0x0000000100fb7a80
- (id)initWithError:(id)arg1 withNextStartRowKey:(id)arg2 hasNext:(_Bool)arg3 withLiveSceneArr:(id)arg4;	// IMP=0x0000000100fb78cc

@end

