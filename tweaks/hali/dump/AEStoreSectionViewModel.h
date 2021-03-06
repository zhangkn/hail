//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEStoreSectionViewModel : NSObject
{
    _Bool _hasViewMore;	// 8 = 0x8
    float _bottomMargin;	// 12 = 0xc
    long long _templateType;	// 16 = 0x10
    long long _titleType;	// 24 = 0x18
    NSString *_titleImageURL;	// 32 = 0x20
    NSString *_titleText;	// 40 = 0x28
    long long _titleProductCount;	// 48 = 0x30
    NSString *_textStyle;	// 56 = 0x38
    NSString *_viewMoreText;	// 64 = 0x40
    NSString *_viewMoreAction;	// 72 = 0x48
    NSString *_titleAction;	// 80 = 0x50
}

+ (void)registerCellsForTableView:(id)arg1;	// IMP=0x0000000100d60c34
@property(nonatomic) float bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(retain, nonatomic) NSString *titleAction; // @synthesize titleAction=_titleAction;
@property(retain, nonatomic) NSString *viewMoreAction; // @synthesize viewMoreAction=_viewMoreAction;
@property(retain, nonatomic) NSString *viewMoreText; // @synthesize viewMoreText=_viewMoreText;
@property(nonatomic) _Bool hasViewMore; // @synthesize hasViewMore=_hasViewMore;
@property(retain, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long titleProductCount; // @synthesize titleProductCount=_titleProductCount;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSString *titleImageURL; // @synthesize titleImageURL=_titleImageURL;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(nonatomic) long long templateType; // @synthesize templateType=_templateType;
- (void).cxx_destruct;	// IMP=0x0000000100d61128
- (id)cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;	// IMP=0x0000000100d60ee4
- (void)configCell:(id)arg1 whoseReusableIdIs:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100d60ee0
- (id)cellReusableIdentifier:(id)arg1;	// IMP=0x0000000100d60eb4
- (long long)cellCount;	// IMP=0x0000000100d60e4c
- (void)inflateWithItems:(id)arg1;	// IMP=0x0000000100d60e48
- (void)inflateWithFields:(id)arg1;	// IMP=0x0000000100d60e44
- (id)initWithStoreCellDTO:(id)arg1;	// IMP=0x0000000100d60990
- (id)init;	// IMP=0x0000000100d608f4

@end

