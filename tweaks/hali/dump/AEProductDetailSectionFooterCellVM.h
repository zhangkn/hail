//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AEProductDetailSectionFooterCellVM : NSObject
{
    double _topPadding;	// 8 = 0x8
    NSString *_actionTitle;	// 16 = 0x10
    NSString *_action;	// 24 = 0x18
    NSDictionary *_actionParams;	// 32 = 0x20
    CDUnknownBlockType _actionBlock;	// 40 = 0x28
    NSString *_action1Title;	// 48 = 0x30
    NSString *_action1;	// 56 = 0x38
    NSDictionary *_action1Params;	// 64 = 0x40
    CDUnknownBlockType _action1Block;	// 72 = 0x48
    NSString *_action2Title;	// 80 = 0x50
    NSString *_action2;	// 88 = 0x58
    NSDictionary *_action2Params;	// 96 = 0x60
    CDUnknownBlockType _action2Block;	// 104 = 0x68
}

@property(copy, nonatomic) CDUnknownBlockType action2Block; // @synthesize action2Block=_action2Block;
@property(retain, nonatomic) NSDictionary *action2Params; // @synthesize action2Params=_action2Params;
@property(retain, nonatomic) NSString *action2; // @synthesize action2=_action2;
@property(retain, nonatomic) NSString *action2Title; // @synthesize action2Title=_action2Title;
@property(copy, nonatomic) CDUnknownBlockType action1Block; // @synthesize action1Block=_action1Block;
@property(retain, nonatomic) NSDictionary *action1Params; // @synthesize action1Params=_action1Params;
@property(retain, nonatomic) NSString *action1; // @synthesize action1=_action1;
@property(retain, nonatomic) NSString *action1Title; // @synthesize action1Title=_action1Title;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSDictionary *actionParams; // @synthesize actionParams=_actionParams;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
- (void).cxx_destruct;	// IMP=0x00000001005c5cac
- (id)init;	// IMP=0x00000001005c5954

@end

