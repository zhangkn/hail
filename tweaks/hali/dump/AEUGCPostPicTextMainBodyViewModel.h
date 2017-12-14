//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCPostPicTextIntroEditViewModelProtocol.h"

@class NSIndexPath, NSMutableArray, NSString;

@interface AEUGCPostPicTextMainBodyViewModel : NSObject <AEUGCPostPicTextIntroEditViewModelProtocol>
{
    NSString *_title;	// 8 = 0x8
    NSString *_guidance;	// 16 = 0x10
    NSMutableArray *_mainTextElementsViewModels;	// 24 = 0x18
    NSIndexPath *_currentEditElementIndexPath;	// 32 = 0x20
    unsigned long long _maxTitleLength;	// 40 = 0x28
    unsigned long long _maxDescroptionLength;	// 48 = 0x30
    unsigned long long _maxPicElementCount;	// 56 = 0x38
    unsigned long long _maxYTVideoCount;	// 64 = 0x40
}

+ (id)parseWithDic:(id)arg1;	// IMP=0x0000000100e54494
@property(nonatomic) unsigned long long maxYTVideoCount; // @synthesize maxYTVideoCount=_maxYTVideoCount;
@property(nonatomic) unsigned long long maxPicElementCount; // @synthesize maxPicElementCount=_maxPicElementCount;
@property(nonatomic) unsigned long long maxDescroptionLength; // @synthesize maxDescroptionLength=_maxDescroptionLength;
@property(nonatomic) unsigned long long maxTitleLength; // @synthesize maxTitleLength=_maxTitleLength;
@property(retain, nonatomic) NSIndexPath *currentEditElementIndexPath; // @synthesize currentEditElementIndexPath=_currentEditElementIndexPath;
@property(readonly, nonatomic) NSMutableArray *mainTextElementsViewModels; // @synthesize mainTextElementsViewModels=_mainTextElementsViewModels;
@property(copy, nonatomic) NSString *guidanceText; // @synthesize guidanceText=_guidance;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000100e54300
- (_Bool)supplementWordGapElementBehindIndexIfNeed:(unsigned long long)arg1;	// IMP=0x0000000100e540d0
- (_Bool)supplementWordGapElementBeforeIndexIfNeed:(unsigned long long)arg1;	// IMP=0x0000000100e53fb0
- (void)processWordTobeInputElement;	// IMP=0x0000000100e53f30
- (id)currentEditElementViewModel;	// IMP=0x0000000100e53ee4
- (unsigned long long)errorTest;	// IMP=0x0000000100e53df0
- (_Bool)alreadyInputData;	// IMP=0x0000000100e53d0c
- (void)prepareUploadMainBodyModelImageCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e539bc
- (unsigned long long)numberOfTypeOfElement:(unsigned long long)arg1;	// IMP=0x0000000100e5389c
- (id)productElementIdList;	// IMP=0x0000000100e53734
- (id)deleteNonWordElementWithIndex:(unsigned long long)arg1;	// IMP=0x0000000100e53380
- (void)insertPicElementsWithImages:(id)arg1 fromIndex:(unsigned long long)arg2;	// IMP=0x0000000100e531fc
- (void)insertPicElementWithImage:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100e53198
- (void)modifyWordElementContentFormat:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;	// IMP=0x0000000100e53124
- (void)modifyWordElementContent:(id)arg1 withIndex:(unsigned long long)arg2;	// IMP=0x0000000100e5308c
- (id)deleteWordElementWidhtIndex:(unsigned long long)arg1;	// IMP=0x0000000100e52df0
- (void)insertWordElementWithContent:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100e52d8c
- (id)deleteElementWithIndex:(unsigned long long)arg1;	// IMP=0x0000000100e52cb8
- (void)insertElementsWithViewModels:(id)arg1 fromIndex:(unsigned long long)arg2;	// IMP=0x0000000100e528e8
- (void)insertElementWithViewModel:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100e52828
- (id)init;	// IMP=0x0000000100e526ac
- (id)exportSubPostListJSONString;	// IMP=0x0000000100e547d0
- (id)exportDic;	// IMP=0x0000000100e54368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

