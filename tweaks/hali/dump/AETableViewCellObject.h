//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface AETableViewCellObject : UITableViewCell
{
    id <AETableViewCellModelProtocol> _model;	// 8 = 0x8
    _Bool _clearCellOnReCreate;	// 16 = 0x10
}

@property(nonatomic) _Bool clearCellOnReCreate; // @synthesize clearCellOnReCreate=_clearCellOnReCreate;
- (void).cxx_destruct;	// IMP=0x00000001006195e0
- (void)refreshCell;	// IMP=0x0000000100619558
- (void)reCreateSubviews;	// IMP=0x0000000100619514
- (void)layoutSubviewsWhenSizeSetToSupposed;	// IMP=0x0000000100619510
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000100619410
- (void)layoutSubviews;	// IMP=0x00000001006193dc
- (void)dealloc;	// IMP=0x0000000100619384
- (void)bindModel:(id)arg1 withIdentifierOrClassName:(id)arg2;	// IMP=0x0000000100619230
- (void)bindModel:(id)arg1;	// IMP=0x0000000100619220
- (id)init;	// IMP=0x00000001006191cc

@end

