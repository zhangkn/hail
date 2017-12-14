//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEProductListHeaderViewVM, NSString;

@interface AEProductListHeaderFloorViewModel : AEBaseTile
{
    _Bool _needHideSpellingCheck;	// 8 = 0x8
    AEProductListHeaderViewVM *_viewModel;	// 16 = 0x10
    id <AEProductListHeaderViewDelegate> _delegate;	// 24 = 0x18
    NSString *_selectedLogoWallProperty;	// 32 = 0x20
    NSString *_companyId;	// 40 = 0x28
}

+ (Class)cellClass;	// IMP=0x0000000100c5815c
@property(nonatomic) _Bool needHideSpellingCheck; // @synthesize needHideSpellingCheck=_needHideSpellingCheck;
@property(copy, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(retain, nonatomic) NSString *selectedLogoWallProperty; // @synthesize selectedLogoWallProperty=_selectedLogoWallProperty;
@property(nonatomic) __weak id <AEProductListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AEProductListHeaderViewVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100c57fd8
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100c57dc4
- (id)init;	// IMP=0x0000000100c57d40

@end
