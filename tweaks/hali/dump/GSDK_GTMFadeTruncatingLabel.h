//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface GSDK_GTMFadeTruncatingLabel : UILabel
{
    int truncateMode_;	// 8 = 0x8
}

+ (id)getLinearGradient:(struct CGRect)arg1 fadeHead:(_Bool)arg2 fadeTail:(_Bool)arg3;	// IMP=0x00000001009309a8
@property(nonatomic) int truncateMode; // @synthesize truncateMode=truncateMode_;
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x00000001009306a8
- (void)awakeFromNib;	// IMP=0x000000010093069c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010093062c
- (void)setup;	// IMP=0x00000001009305d8

@end

