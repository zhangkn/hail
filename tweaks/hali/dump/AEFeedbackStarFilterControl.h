//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEFeedbackBaseFilterControl.h"

@class UILabel;

@interface AEFeedbackStarFilterControl : AEFeedbackBaseFilterControl
{
    UILabel *_filterLabel;	// 32 = 0x20
    unsigned long long _starCount;	// 40 = 0x28
}

@property(nonatomic) unsigned long long starCount; // @synthesize starCount=_starCount;
- (void).cxx_destruct;	// IMP=0x00000001004f3778
- (double)adjustedWidth;	// IMP=0x00000001004f3700
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001004f34a4

@end

