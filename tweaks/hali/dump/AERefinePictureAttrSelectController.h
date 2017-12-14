//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AERefineAttrSelectControllerObject.h"

#import "AESKUViewDelegate.h"

@class AESKUView, NSString;

@interface AERefinePictureAttrSelectController : AERefineAttrSelectControllerObject <AESKUViewDelegate>
{
    AESKUView *_skuView;	// 16 = 0x10
    NSString *prefixURL;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *prefixURL; // @synthesize prefixURL;
- (void).cxx_destruct;	// IMP=0x0000000100be139c
- (id)pageTrackName;	// IMP=0x0000000100be1328
- (void)selectItem:(id)arg1 index:(long long)arg2;	// IMP=0x0000000100be1234
- (double)getSKUItemHeight;	// IMP=0x0000000100be11e0
- (double)getTotalHeight;	// IMP=0x0000000100be1138
- (void)buildSKUView;	// IMP=0x0000000100be0948
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be08ac
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100be0858
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100be0804
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be07a4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be0754
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100be074c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100be0744
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be05bc
- (void)reload;	// IMP=0x0000000100be0538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

