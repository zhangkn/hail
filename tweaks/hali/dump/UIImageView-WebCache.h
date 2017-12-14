//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface UIImageView (WebCache)
- (void)removeActivityIndicator;	// IMP=0x0000000101460620
- (void)addActivityIndicator;	// IMP=0x000000010146008c
- (int)getIndicatorStyle;	// IMP=0x0000000101460040
- (void)setIndicatorStyle:(long long)arg1;	// IMP=0x000000010145ffe8
- (_Bool)showActivityIndicatorView;	// IMP=0x000000010145ff9c
- (void)setShowActivityIndicatorView:(_Bool)arg1;	// IMP=0x000000010145ff44
- (void)setActivityIndicator:(id)arg1;	// IMP=0x000000010145ff34
- (id)activityIndicator;	// IMP=0x000000010145ff28
- (void)sd_cancelCurrentAnimationImagesLoad;	// IMP=0x000000010145ff14
- (void)sd_cancelCurrentImageLoad;	// IMP=0x000000010145ff00
- (void)sd_setAnimationImagesWithURLs:(id)arg1;	// IMP=0x000000010145f81c
- (id)sd_imageURL;	// IMP=0x000000010145f810
- (void)sd_setImageWithPreviousCachedImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;	// IMP=0x000000010145f6b0
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;	// IMP=0x000000010145e978
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;	// IMP=0x000000010145e8f8
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;	// IMP=0x000000010145e884
- (void)sd_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;	// IMP=0x000000010145e828
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000010145e7c8
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;	// IMP=0x000000010145e76c
- (void)sd_setImageWithURL:(id)arg1;	// IMP=0x000000010145e750
@end
