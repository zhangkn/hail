//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEUGCHFThemeDTO : NSObject
{
    NSString *_sceneId;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_desc;	// 24 = 0x18
    NSString *_acitivityTime;	// 32 = 0x20
    NSString *_imgUrl;	// 40 = 0x28
    NSString *_cmdUrl;	// 48 = 0x30
    NSString *_backgroudColor;	// 56 = 0x38
    NSString *_activityId;	// 64 = 0x40
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001006b0174
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *backgroudColor; // @synthesize backgroudColor=_backgroudColor;
@property(retain, nonatomic) NSString *cmdUrl; // @synthesize cmdUrl=_cmdUrl;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *acitivityTime; // @synthesize acitivityTime=_acitivityTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
- (void).cxx_destruct;	// IMP=0x00000001006b0428

@end
