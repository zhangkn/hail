//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharingContent.h"

@class FBSDKHashtag, NSArray, NSString, NSURL;

@interface FBSDKShareMediaContent : NSObject <FBSDKSharingContent>
{
    NSURL *_contentURL;	// 8 = 0x8
    FBSDKHashtag *_hashtag;	// 16 = 0x10
    NSArray *_peopleIDs;	// 24 = 0x18
    NSString *_placeID;	// 32 = 0x20
    NSString *_ref;	// 40 = 0x28
    NSArray *_media;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001012a0870
@property(copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;	// IMP=0x00000001012a0da8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001012a0bec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001012a0ae0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001012a0878
- (_Bool)isEqualToShareMediaContent:(id)arg1;	// IMP=0x00000001012a0614
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001012a0584
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

