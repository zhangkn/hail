//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface AEComponentPaddingLabel : UILabel
{
    struct UIEdgeInsets _insets;	// 8 = 0x8
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000100a14fc8
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;	// IMP=0x0000000100a14f1c
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100a14eb8

@end

