//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSNumber, NSString;

@interface AEProductDetailStatisticsCellVM : NSObject
{
    NSString *_displayRating;	// 8 = 0x8
    NSNumber *_ratingNumber;	// 16 = 0x10
    NSAttributedString *_orders;	// 24 = 0x18
    NSAttributedString *_wishList;	// 32 = 0x20
    CDUnknownBlockType _feedbackAction;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType feedbackAction; // @synthesize feedbackAction=_feedbackAction;
@property(retain, nonatomic) NSAttributedString *wishList; // @synthesize wishList=_wishList;
@property(retain, nonatomic) NSAttributedString *orders; // @synthesize orders=_orders;
@property(retain, nonatomic) NSNumber *ratingNumber; // @synthesize ratingNumber=_ratingNumber;
@property(retain, nonatomic) NSString *displayRating; // @synthesize displayRating=_displayRating;
- (void).cxx_destruct;	// IMP=0x00000001005cf904
- (id)initWithProductDTO:(id)arg1;	// IMP=0x00000001005ced68

@end
