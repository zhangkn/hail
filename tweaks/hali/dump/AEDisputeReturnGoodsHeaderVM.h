//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEDisputeReturnGoodsHeaderVM : NSObject
{
    NSString *_imageURL;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subTitle;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;	// IMP=0x00000001000a5c44
- (id)initWithData:(id)arg1 title:(id)arg2 subTitle:(id)arg3;	// IMP=0x00000001000a5a94

@end

