//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface resourceDTO : NSObject
{
    NSString *_activityTitle;	// 8 = 0x8
    NSString *_vipIcon;	// 16 = 0x10
    NSString *_vipTitle;	// 24 = 0x18
    NSString *_brandImage;	// 32 = 0x20
    NSString *_brandExpiredImage;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_discription;	// 56 = 0x38
    NSString *_expireDiscription;	// 64 = 0x40
    NSString *_termsAndConditions;	// 72 = 0x48
    NSString *_termsAndConditionsAction;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *termsAndConditionsAction; // @synthesize termsAndConditionsAction=_termsAndConditionsAction;
@property(retain, nonatomic) NSString *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(retain, nonatomic) NSString *expireDiscription; // @synthesize expireDiscription=_expireDiscription;
@property(retain, nonatomic) NSString *discription; // @synthesize discription=_discription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *brandExpiredImage; // @synthesize brandExpiredImage=_brandExpiredImage;
@property(retain, nonatomic) NSString *brandImage; // @synthesize brandImage=_brandImage;
@property(retain, nonatomic) NSString *vipTitle; // @synthesize vipTitle=_vipTitle;
@property(retain, nonatomic) NSString *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
- (void).cxx_destruct;	// IMP=0x0000000100278fe4

@end

