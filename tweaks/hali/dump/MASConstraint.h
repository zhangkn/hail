//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MASConstraint : NSObject
{
    _Bool _updateExisting;	// 8 = 0x8
    id <MASConstraintDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <MASConstraintDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool updateExisting; // @synthesize updateExisting=_updateExisting;
- (void).cxx_destruct;	// IMP=0x000000010133b8a8
- (void)uninstall;	// IMP=0x000000010133b79c
- (void)install;	// IMP=0x000000010133b6e4
- (void)deactivate;	// IMP=0x000000010133b62c
- (void)activate;	// IMP=0x000000010133b574
- (void)setOffset:(double)arg1;	// IMP=0x000000010133b4bc
- (void)setCenterOffset:(struct CGPoint)arg1;	// IMP=0x000000010133b404
- (void)setSizeOffset:(struct CGSize)arg1;	// IMP=0x000000010133b34c
- (void)setInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000010133b294
- (CDUnknownBlockType)key;	// IMP=0x000000010133b1dc
- (CDUnknownBlockType)equalToWithRelation;	// IMP=0x000000010133b124
- (CDUnknownBlockType)priority;	// IMP=0x000000010133b06c
- (CDUnknownBlockType)dividedBy;	// IMP=0x000000010133afb4
- (CDUnknownBlockType)multipliedBy;	// IMP=0x000000010133aefc
- (id)centerYWithinMargins;	// IMP=0x000000010133aee8
- (id)centerXWithinMargins;	// IMP=0x000000010133aed4
- (id)trailingMargin;	// IMP=0x000000010133aec0
- (id)leadingMargin;	// IMP=0x000000010133aeac
- (id)bottomMargin;	// IMP=0x000000010133ae98
- (id)topMargin;	// IMP=0x000000010133ae84
- (id)rightMargin;	// IMP=0x000000010133ae70
- (id)leftMargin;	// IMP=0x000000010133ae5c
- (id)baseline;	// IMP=0x000000010133ae48
- (id)centerY;	// IMP=0x000000010133ae34
- (id)centerX;	// IMP=0x000000010133ae20
- (id)height;	// IMP=0x000000010133ae0c
- (id)width;	// IMP=0x000000010133adf8
- (id)trailing;	// IMP=0x000000010133ade4
- (id)leading;	// IMP=0x000000010133add0
- (id)bottom;	// IMP=0x000000010133adbc
- (id)right;	// IMP=0x000000010133ada8
- (id)top;	// IMP=0x000000010133ad94
- (id)left;	// IMP=0x000000010133ad80
- (id)addConstraintWithLayoutAttribute:(long long)arg1;	// IMP=0x000000010133acc8
- (id)and;	// IMP=0x000000010133acc4
- (id)with;	// IMP=0x000000010133acc0
- (void)setLayoutConstantWithValue:(id)arg1;	// IMP=0x000000010133ab18
- (CDUnknownBlockType)mas_offset;	// IMP=0x000000010133ab10
- (CDUnknownBlockType)valueOffset;	// IMP=0x000000010133aa58
- (CDUnknownBlockType)offset;	// IMP=0x000000010133a9a8
- (CDUnknownBlockType)centerOffset;	// IMP=0x000000010133a8f8
- (CDUnknownBlockType)sizeOffset;	// IMP=0x000000010133a848
- (CDUnknownBlockType)insets;	// IMP=0x000000010133a798
- (CDUnknownBlockType)priorityHigh;	// IMP=0x000000010133a6b8
- (CDUnknownBlockType)priorityMedium;	// IMP=0x000000010133a5d8
- (CDUnknownBlockType)priorityLow;	// IMP=0x000000010133a4f8
- (CDUnknownBlockType)mas_lessThanOrEqualTo;	// IMP=0x000000010133a3f4
- (CDUnknownBlockType)lessThanOrEqualTo;	// IMP=0x000000010133a2f0
- (CDUnknownBlockType)mas_greaterThanOrEqualTo;	// IMP=0x000000010133a1ec
- (CDUnknownBlockType)greaterThanOrEqualTo;	// IMP=0x000000010133a0e8
- (CDUnknownBlockType)mas_equalTo;	// IMP=0x0000000101339fe4
- (CDUnknownBlockType)equalTo;	// IMP=0x0000000101339ee0
- (id)init;	// IMP=0x0000000101339ea4

@end

