//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKTConnectionInterface.h"

@class NSString;

@interface MKTConnection : NSObject <MKTConnectionInterface>
{
    NSString *_type;	// 8 = 0x8
    id <MKTConvertProtocol> _convert;	// 16 = 0x10
}

@property(retain, nonatomic) id <MKTConvertProtocol> convert; // @synthesize convert=_convert;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x000000010134477c
- (void)parse:(id)arg1 error:(id)arg2;	// IMP=0x0000000101344530
- (void)processMsg:(id)arg1;	// IMP=0x0000000101344524
- (void)processData:(id)arg1;	// IMP=0x0000000101344254
- (void)dispatchMsg:(id)arg1;	// IMP=0x00000001013441e4
- (void)send:(id)arg1;	// IMP=0x00000001013441e0
- (id)init;	// IMP=0x00000001013441ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

