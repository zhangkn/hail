//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AECaptureCell, NSArray, NSMutableArray;

@interface AEImageRowTableViewCell : UITableViewCell
{
    NSMutableArray *_assetViews;	// 8 = 0x8
    double _assetWidth;	// 16 = 0x10
    _Bool _isShowCaptureBtn;	// 24 = 0x18
    _Bool _allowPreview;	// 25 = 0x19
    id <AEImageRowTableViewCellDelegate> delegate;	// 32 = 0x20
    NSArray *_assetsArray;	// 40 = 0x28
    long long _columnPerRow;	// 48 = 0x30
    AECaptureCell *_captureCell;	// 56 = 0x38
}

@property(nonatomic) _Bool allowPreview; // @synthesize allowPreview=_allowPreview;
@property(retain, nonatomic) AECaptureCell *captureCell; // @synthesize captureCell=_captureCell;
@property(nonatomic) _Bool isShowCaptureBtn; // @synthesize isShowCaptureBtn=_isShowCaptureBtn;
@property(nonatomic) long long columnPerRow; // @synthesize columnPerRow=_columnPerRow;
@property(retain, nonatomic) NSArray *assetsArray; // @synthesize assetsArray=_assetsArray;
@property(nonatomic) __weak id <AEImageRowTableViewCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;	// IMP=0x000000010082913c
- (void)captureAction:(id)arg1;	// IMP=0x0000000100828fb4
- (void)previewAssetAction:(id)arg1;	// IMP=0x0000000100828e80
- (void)assetViewAction:(id)arg1;	// IMP=0x0000000100828c28
- (void)clearAssetSelectedInRow;	// IMP=0x0000000100828988
- (void)setAssetSelectedAtIndex:(long long)arg1;	// IMP=0x00000001008288fc
- (void)reloadAssetView;	// IMP=0x0000000100828484
- (void)prepareForReuse;	// IMP=0x0000000100828260
- (void)layoutSubviews;	// IMP=0x0000000100828090
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100827df8

@end
