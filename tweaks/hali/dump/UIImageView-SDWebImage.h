//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString;

@interface UIImageView (SDWebImage)
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 cutSize:(struct CGSize)arg3 cornerRadius:(double)arg4 options:(unsigned long long)arg5 completed:(CDUnknownBlockType)arg6;	// IMP=0x00000001007dc680
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 cutSize:(struct CGSize)arg3 cornerRadius:(double)arg4 cutType:(unsigned long long)arg5 options:(unsigned long long)arg6 completed:(CDUnknownBlockType)arg7;	// IMP=0x00000001007dbe58
@property(copy, nonatomic) NSString *strUrl;
@end

