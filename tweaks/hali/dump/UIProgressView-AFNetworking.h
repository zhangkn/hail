//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIProgressView.h"

@interface UIProgressView (AFNetworking)
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001008bb0f0
- (void)setProgressWithDownloadProgressOfTask:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001008bb040
- (void)setProgressWithUploadProgressOfTask:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001008baf90
- (void)af_setDownloadProgressAnimated:(_Bool)arg1;	// IMP=0x00000001008baf2c
- (_Bool)af_downloadProgressAnimated;	// IMP=0x00000001008baee0
- (void)af_setUploadProgressAnimated:(_Bool)arg1;	// IMP=0x00000001008bae7c
- (_Bool)af_uploadProgressAnimated;	// IMP=0x00000001008bae30
@end

