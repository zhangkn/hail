//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AEUGCHashTagCampaignPreview : NSObject <NSCoding>
{
    NSString *_postImg;	// 8 = 0x8
    NSString *_postId;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *postId; // @synthesize postId=_postId;
@property(copy, nonatomic) NSString *postImg; // @synthesize postImg=_postImg;
- (void).cxx_destruct;	// IMP=0x00000001006d921c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001006d9120
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001006d9044

@end
