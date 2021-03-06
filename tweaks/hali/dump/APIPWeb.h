//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APIPControl.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIWebView;

@interface APIPWeb : APIPControl <UIGestureRecognizerDelegate>
{
    UIWebView *_webView;	// 8 = 0x8
}

@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;	// IMP=0x000000010112af60
- (void)click;	// IMP=0x000000010112adf8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010112adf0
- (void)layoutSubviews;	// IMP=0x000000010112ad74
- (id)initWithContrlFrame:(id)arg1;	// IMP=0x000000010112aa38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

