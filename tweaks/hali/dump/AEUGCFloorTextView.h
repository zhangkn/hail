//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UILabel;

@interface AEUGCFloorTextView : AETileAdapterView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_descLabel;	// 16 = 0x10
}

+ (double)calculateTextViewHeight:(id)arg1;	// IMP=0x0000000100dceac0
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100dcfcdc
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100dcef6c
- (void)configConstraints;	// IMP=0x0000000100dce438
- (void)configSubviews;	// IMP=0x0000000100dce3ac
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100dce308

@end

