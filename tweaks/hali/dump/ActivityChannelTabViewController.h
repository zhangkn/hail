//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActivityChannelViewController.h"

#import "ActivityChannelTabProperty.h"
#import "ActivityChannelTabViewControllerProperty.h"

@class NSMutableDictionary, NSString, UIView<ActivityChannelTabProperty>, UIViewController;

@interface ActivityChannelTabViewController : ActivityChannelViewController <ActivityChannelTabProperty, ActivityChannelTabViewControllerProperty>
{
    long long _selectedTabIndex;	// 8 = 0x8
    UIViewController *_selectedViewController;	// 16 = 0x10
    NSMutableDictionary *_viewControllers;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(nonatomic) long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
- (void).cxx_destruct;	// IMP=0x00000001009ba96c
- (void)fetchDataWithParam:(id)arg1;	// IMP=0x00000001009ba764
- (void)doReloadFetchRequest;	// IMP=0x00000001009ba6b4
- (void)doRefreshFetchRequest;	// IMP=0x00000001009ba604
- (long long)ac_tabBar:(id)arg1 tabIndexForParam:(id)arg2;	// IMP=0x00000001009ba5f4
- (void)ac_tabBar:(id)arg1 didSelectedTabAtIndex:(long long)arg2 withParam:(id)arg3;	// IMP=0x00000001009ba180
- (void)setAc_selectedTabIndex:(long long)arg1;	// IMP=0x00000001009ba108
@property(nonatomic, setter=ac_selectTabAtIndex:) long long ac_selectedTabIndex; // @dynamic ac_selectedTabIndex;
@property(readonly, nonatomic) UIView<ActivityChannelTabProperty> *ac_tabBar;
- (void)viewDidLoad;	// IMP=0x00000001009b9fdc
- (id)initWithParam:(id)arg1;	// IMP=0x00000001009b9f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
