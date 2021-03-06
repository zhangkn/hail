//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEAutolayoutLabel, CALayer, NSString, UIButton, UIImageView, UILabel;

@interface AECoinsTaskFloor : AETileAdapterFloor
{
    UIImageView *_taskImage;	// 8 = 0x8
    AEAutolayoutLabel *_taskName;	// 16 = 0x10
    AEAutolayoutLabel *_taskSummery;	// 24 = 0x18
    UILabel *_taskCoins;	// 32 = 0x20
    UIButton *_gotoTask;	// 40 = 0x28
    CALayer *_seperator;	// 48 = 0x30
    NSString *_bizType;	// 56 = 0x38
}

+ (Class)modelClass;	// IMP=0x00000001002ee4d4
+ (id)identifier;	// IMP=0x00000001002ee4a8
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) CALayer *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) UIButton *gotoTask; // @synthesize gotoTask=_gotoTask;
@property(retain, nonatomic) UILabel *taskCoins; // @synthesize taskCoins=_taskCoins;
@property(retain, nonatomic) AEAutolayoutLabel *taskSummery; // @synthesize taskSummery=_taskSummery;
@property(retain, nonatomic) AEAutolayoutLabel *taskName; // @synthesize taskName=_taskName;
@property(retain, nonatomic) UIImageView *taskImage; // @synthesize taskImage=_taskImage;
- (void).cxx_destruct;	// IMP=0x00000001002f0494
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002efed8
- (void)coinTaskFinished:(id)arg1;	// IMP=0x00000001002efdf4
- (void)layoutSubviews;	// IMP=0x00000001002efcc0
- (void)configConstraints;	// IMP=0x00000001002eed84
- (void)configComponents;	// IMP=0x00000001002ee5d8
- (id)initFloor;	// IMP=0x00000001002ee4e8

@end

