//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AETileRewriteRuleProtocol.h"

@class NSString;

@interface AETileRewriteRule : NSObject <AETileRewriteRuleProtocol>
{
    id _target;	// 8 = 0x8
    id _fromValue;	// 16 = 0x10
    id _toValue;	// 24 = 0x18
    CDUnknownBlockType _rebuildBlock;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType rebuildBlock; // @synthesize rebuildBlock=_rebuildBlock;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;	// IMP=0x00000001009ec314
- (id)initWithTarget:(id)arg1;	// IMP=0x00000001009ec214

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

