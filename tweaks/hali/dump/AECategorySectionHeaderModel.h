//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AECategorySectionHeaderModel : NSObject
{
    _Bool _leaf;	// 8 = 0x8
    _Bool _expanded;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    long long _headerStyle;	// 24 = 0x18
    long long _section;	// 32 = 0x20
}

@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) _Bool leaf; // @synthesize leaf=_leaf;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x0000000100be70c4

@end

