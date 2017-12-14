//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCPostProductTagEditViewModelProtocol.h"

@class NSArray, NSMutableArray, NSString;

@interface AEUGCPostPicTextHashTagViewModel : NSObject <AEUGCPostProductTagEditViewModelProtocol>
{
    NSMutableArray *_selectedTagsList;	// 8 = 0x8
    NSMutableArray *_unSelectedTagsList;	// 16 = 0x10
    NSString *_themeId;	// 24 = 0x18
    unsigned long long _maxTagsCount;	// 32 = 0x20
}

+ (id)parseWithJSONString:(id)arg1 withThemeId:(id)arg2;	// IMP=0x0000000100dfb99c
@property(readonly, nonatomic) unsigned long long maxTagsCount; // @synthesize maxTagsCount=_maxTagsCount;
@property(readonly, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
- (void).cxx_destruct;	// IMP=0x0000000100dfb7d4
- (unsigned long long)errorTest;	// IMP=0x0000000100dfb768
- (_Bool)alreadyInputData;	// IMP=0x0000000100dfb738
- (void)deleteSelectedTagAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100dfb6a4
- (void)addFromUnSelectedTagWithText:(id)arg1;	// IMP=0x0000000100dfb4e8
- (void)addNewTagWithText:(id)arg1;	// IMP=0x0000000100dfb440
@property(readonly, nonatomic) NSArray *unSelectedTagsTextArray;
@property(readonly, nonatomic) NSArray *selectedTagsTextArray;
- (void)loadUnSelectedTags;	// IMP=0x0000000100dfae0c
- (id)init;	// IMP=0x0000000100dfadfc
- (id)initWithThemeId:(id)arg1;	// IMP=0x0000000100dfac9c
- (id)exportJSONString;	// IMP=0x0000000100dfb828

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
