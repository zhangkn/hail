//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEEditComponentBaseView.h"

@class NSString;

@interface AEEditNRReminderView : AEEditComponentBaseView
{
    NSString *_content;	// 8 = 0x8
    NSString *_orderID;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;	// IMP=0x00000001000c2964
- (void)buildContentView;	// IMP=0x00000001000c1d6c
- (id)initWithContent:(id)arg1 orderID:(id)arg2;	// IMP=0x00000001000c1c9c

@end
