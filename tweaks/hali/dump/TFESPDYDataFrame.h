//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFESPDYFrame.h"

@class NSData;

@interface TFESPDYDataFrame : TFESPDYFrame
{
    _Bool _last;	// 8 = 0x8
    unsigned int _streamId;	// 12 = 0xc
    NSData *_data;	// 16 = 0x10
}

@property(nonatomic) _Bool last; // @synthesize last=_last;
@property(nonatomic) unsigned int streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;	// IMP=0x00000001010bcae0

@end
