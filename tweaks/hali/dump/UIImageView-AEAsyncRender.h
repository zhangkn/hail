//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface UIImageView (AEAsyncRender)
+ (id)aeAsyncRender_roundCornerImageWithImage:(id)arg1 cornerRadius:(float)arg2;	// IMP=0x000000010000cf4c
- (void)setRealDrawTime:(long long)arg1;	// IMP=0x000000010000d228
- (long long)realDrawTime;	// IMP=0x000000010000d1dc
- (void)setRealImageTime:(long long)arg1;	// IMP=0x000000010000d184
- (long long)realImageTime;	// IMP=0x000000010000d138
- (_Bool)needsDraw;	// IMP=0x000000010000d0f4
- (id)coreDrawImage:(id)arg1 Within:(struct CGSize)arg2;	// IMP=0x000000010000cde0
- (void)drawWithImage:(id)arg1 cornerRadius:(double)arg2 size:(struct CGSize)arg3;	// IMP=0x000000010000cb0c
- (void)aeAsyncRender_setImage:(id)arg1;	// IMP=0x000000010000c894
- (void)aeAsyncRender_setBackgroundColor:(id)arg1;	// IMP=0x000000010000c884
- (id)aeAsyncRender_backgroundColor;	// IMP=0x000000010000c878
@end
