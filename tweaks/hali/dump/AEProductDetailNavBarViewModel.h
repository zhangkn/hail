//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface AEProductDetailNavBarViewModel : NSObject
{
    _Bool _showShareButton;	// 8 = 0x8
    NSNumber *_cartItemNumber;	// 16 = 0x10
    CDUnknownBlockType _backAction;	// 24 = 0x18
    CDUnknownBlockType _cartAction;	// 32 = 0x20
    CDUnknownBlockType _shareAction;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType shareAction; // @synthesize shareAction=_shareAction;
@property(copy, nonatomic) CDUnknownBlockType cartAction; // @synthesize cartAction=_cartAction;
@property(copy, nonatomic) CDUnknownBlockType backAction; // @synthesize backAction=_backAction;
@property(retain, nonatomic) NSNumber *cartItemNumber; // @synthesize cartItemNumber=_cartItemNumber;
@property(nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
- (void).cxx_destruct;	// IMP=0x00000001005af998

@end

