//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEModuleGoldBaseViewController.h"

@class AEModuleTreeBottomAlertView, AEModuleTreeView, NSString, UITableView;

@interface AEModuleTreeOtherTreeVCtr : AEModuleGoldBaseViewController
{
    _Bool _bFirstShow;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    AEModuleTreeView *_treeView;	// 24 = 0x18
    NSString *_memberSeq;	// 32 = 0x20
    AEModuleTreeBottomAlertView *_viewBottom;	// 40 = 0x28
}

@property(retain, nonatomic) AEModuleTreeBottomAlertView *viewBottom; // @synthesize viewBottom=_viewBottom;
@property(nonatomic) _Bool bFirstShow; // @synthesize bFirstShow=_bFirstShow;
@property(copy, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(retain, nonatomic) AEModuleTreeView *treeView; // @synthesize treeView=_treeView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x0000000100b22e30
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100b22cf8
- (void)getTreeData;	// IMP=0x0000000100b228a8
- (void)initView;	// IMP=0x0000000100b21ddc
- (void)getLanguage:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b21be0
- (void)doAnimation:(id)arg1;	// IMP=0x0000000100b21ba0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100b21ae4
- (void)viewDidLoad;	// IMP=0x0000000100b21a30
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100b21944

@end

