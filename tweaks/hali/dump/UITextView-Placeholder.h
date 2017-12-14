//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSAttributedString, NSString, UIColor, UILabel;

@interface UITextView (Placeholder)
+ (id)observingKeys;	// IMP=0x00000001007dcec8
+ (id)defaultPlaceholderColor;	// IMP=0x00000001007dce00
+ (void)load;	// IMP=0x00000001007dcbd4
- (void)updatePlaceholderLabel;	// IMP=0x00000001007dd648
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001007dd580
- (void)setNeedsUpdateFont:(_Bool)arg1;	// IMP=0x00000001007dd51c
- (_Bool)needsUpdateFont;	// IMP=0x00000001007dd4d0
@property(retain, nonatomic) UIColor *placeholderColor;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholder;
@property(retain, nonatomic) NSString *placeholder;
@property(readonly, nonatomic) UILabel *placeholderLabel;
- (void)swizzledDealloc;	// IMP=0x00000001007dcc48
@end
