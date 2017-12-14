//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class NSDateFormatter, NSString, UITextView;

@interface AEAppRuntimeInfoVC : AEUIViewController
{
    double _appRun;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
    NSString *_clientTimestamp;	// 24 = 0x18
    NSString *_serverTimestamp;	// 32 = 0x20
    NSDateFormatter *_clientTimeFmt;	// 40 = 0x28
    NSDateFormatter *_serverTimeFmt;	// 48 = 0x30
}

@property(retain, nonatomic) NSDateFormatter *serverTimeFmt; // @synthesize serverTimeFmt=_serverTimeFmt;
@property(retain, nonatomic) NSDateFormatter *clientTimeFmt; // @synthesize clientTimeFmt=_clientTimeFmt;
@property(retain, nonatomic) NSString *serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
@property(retain, nonatomic) NSString *clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double appRun; // @synthesize appRun=_appRun;
- (void).cxx_destruct;	// IMP=0x0000000100ad21ec
- (void)dealloc;	// IMP=0x0000000100ad1fe8
- (id)pageTrackName;	// IMP=0x0000000100ad1fbc
- (_Bool)needAuthority;	// IMP=0x0000000100ad1fb4
- (id)title:(id)arg1 value:(id)arg2;	// IMP=0x0000000100ad1dd4
- (void)rebuild;	// IMP=0x0000000100ad1768
- (void)viewDidLoad;	// IMP=0x0000000100ad15a0
- (void)tickTock:(id)arg1;	// IMP=0x0000000100ad138c
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ad1234

@end

