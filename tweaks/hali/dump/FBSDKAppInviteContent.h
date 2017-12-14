//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface FBSDKAppInviteContent : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSURL *_appInvitePreviewImageURL;	// 8 = 0x8
    NSURL *_appLinkURL;	// 16 = 0x10
    NSString *_promotionCode;	// 24 = 0x18
    NSString *_promotionText;	// 32 = 0x20
    unsigned long long _destination;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010128449c
@property unsigned long long destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
@property(copy, nonatomic) NSString *promotionCode; // @synthesize promotionCode=_promotionCode;
@property(copy, nonatomic) NSURL *appLinkURL; // @synthesize appLinkURL=_appLinkURL;
@property(copy, nonatomic) NSURL *appInvitePreviewImageURL; // @synthesize appInvitePreviewImageURL=_appInvitePreviewImageURL;
- (void).cxx_destruct;	// IMP=0x00000001012848c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010128473c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010128464c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001012844a4
- (_Bool)isEqualToAppInviteContent:(id)arg1;	// IMP=0x00000001012842bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010128422c
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *previewImageURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

