//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCFeedWaterfallModel, RACCommand;

@interface AEUGCFeedWaterFallCellViewModel : NSObject
{
    AEUGCFeedWaterfallModel *_model;	// 8 = 0x8
    RACCommand *_likeButtonCommand;	// 16 = 0x10
}

@property(retain, nonatomic) RACCommand *likeButtonCommand; // @synthesize likeButtonCommand=_likeButtonCommand;
@property(nonatomic) __weak AEUGCFeedWaterfallModel *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x00000001006d06b0
- (void)handleLikeAction:(id)arg1;	// IMP=0x00000001006d0430
- (id)init;	// IMP=0x00000001006d0294

@end

