//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface AEProductInvalid404Header : UIView
{
    UIImageView *_coverImageView;	// 8 = 0x8
    UILabel *_oopsLabel;	// 16 = 0x10
    UILabel *_oopsDescLabel;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;	// IMP=0x00000001005dd908
- (void)setupCommentLabel;	// IMP=0x00000001005dcd90
- (void)setupCoverImage;	// IMP=0x00000001005dc9fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001005dc860

@end
