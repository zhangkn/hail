//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class FBSDKSharePhoto, NSString, NSURL;

@interface FBSDKShareVideo : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSURL *_videoURL;	// 8 = 0x8
    FBSDKSharePhoto *_previewPhoto;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001012a980c
+ (id)videoWithVideoURL:(id)arg1 previewPhoto:(id)arg2;	// IMP=0x00000001012a9534
+ (id)videoWithVideoURL:(id)arg1;	// IMP=0x00000001012a94c0
@property(copy, nonatomic) FBSDKSharePhoto *previewPhoto; // @synthesize previewPhoto=_previewPhoto;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;	// IMP=0x00000001012a9a68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001012a9994
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001012a9908
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001012a9814
- (_Bool)isEqualToShareVideo:(id)arg1;	// IMP=0x00000001012a9708
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001012a9678
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

