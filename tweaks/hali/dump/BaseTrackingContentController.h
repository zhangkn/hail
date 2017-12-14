//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface BaseTrackingContentController : NSObject
{
    UIView *_contentView;	// 8 = 0x8
    NSString *_groupId;	// 16 = 0x10
}

+ (id)notificationName;	// IMP=0x0000000101760b6c
+ (id)type;	// IMP=0x0000000101760b40
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;	// IMP=0x0000000101760f34
- (void)receiveEvent:(id)arg1 withParams:(id)arg2;	// IMP=0x0000000101760ecc
- (void)fireEvent:(id)arg1 withParams:(id)arg2;	// IMP=0x0000000101760c38
- (void)frameChanged:(struct CGRect)arg1;	// IMP=0x0000000101760c34
- (void)onViewRemoved;	// IMP=0x0000000101760c30
- (void)onViewAdded;	// IMP=0x0000000101760c2c
- (void)destroyView;	// IMP=0x0000000101760c28
- (void)createViewWithFrame:(struct CGRect)arg1 params:(id)arg2 createdBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000101760c24
- (id)initWithGroupId:(id)arg1;	// IMP=0x0000000101760b98

@end

