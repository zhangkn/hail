//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIView, UIView<ActivityChannelTabProperty>;

@protocol ActivityChannelTabViewControllerProperty <NSObject>
@property(readonly, nonatomic) UIView<ActivityChannelTabProperty> *ac_tabBar;
- (long long)ac_tabBar:(UIView *)arg1 tabIndexForParam:(NSDictionary *)arg2;
- (void)ac_tabBar:(UIView *)arg1 didSelectedTabAtIndex:(long long)arg2 withParam:(NSDictionary *)arg3;
@end

