//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductDetailService, AFLanguage, NSMutableArray, NSString;

@interface AEProductDetailDescViewModel : NSObject
{
    _Bool _isPreview;	// 8 = 0x8
    AEProductDetailService *_service;	// 16 = 0x10
    NSMutableArray *_specifics;	// 24 = 0x18
    id <AEFloorTableViewSupport> _tableView;	// 32 = 0x20
    id <AEFloorTableViewSupport> _tableViewB;	// 40 = 0x28
    NSString *_productId;	// 48 = 0x30
    NSString *_sellerMemberSeq;	// 56 = 0x38
    AFLanguage *_language;	// 64 = 0x40
}

@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(retain, nonatomic) AFLanguage *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *sellerMemberSeq; // @synthesize sellerMemberSeq=_sellerMemberSeq;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) __weak id <AEFloorTableViewSupport> tableViewB; // @synthesize tableViewB=_tableViewB;
@property(nonatomic) __weak id <AEFloorTableViewSupport> tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *specifics; // @synthesize specifics=_specifics;
@property(retain, nonatomic) AEProductDetailService *service; // @synthesize service=_service;
- (void).cxx_destruct;	// IMP=0x00000001005a5f60
- (id)_prepareDataForTableViewB:(id)arg1;	// IMP=0x00000001005a5888
- (id)_prepareData:(id)arg1;	// IMP=0x00000001005a4c38
- (void)loadData:(id)arg1 sellerMemberSeq:(id)arg2 language:(id)arg3 isPreview:(_Bool)arg4;	// IMP=0x00000001005a4908
- (void)setupTableViewB:(id)arg1;	// IMP=0x00000001005a48f4
- (void)setupTableView:(id)arg1;	// IMP=0x00000001005a48e0
- (void)_updateDescriptionHeader;	// IMP=0x00000001005a46a4
- (void)languageSelected:(id)arg1;	// IMP=0x00000001005a4578
- (id)init;	// IMP=0x00000001005a4454
- (void)dealloc;	// IMP=0x00000001005a43d8

@end
