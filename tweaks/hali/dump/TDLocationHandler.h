//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, NSString;

@interface TDLocationHandler : NSObject <CLLocationManagerDelegate>
{
    _Bool _fullLocationUpdatesEnabled;	// 8 = 0x8
    _Bool _sigLocChangeAvailable;	// 9 = 0x9
    _Bool _dontUsedidUpdateToLocation;	// 10 = 0xa
    CLLocation *_location;	// 16 = 0x10
    double _desiredAccuracy;	// 24 = 0x18
    CLLocationManager *_locationManager;	// 32 = 0x20
}

+ (_Bool)isBetterLocation:(id)arg1 currentBest:(id)arg2 accuracy:(double)arg3;	// IMP=0x0000000101151774
@property(nonatomic) _Bool dontUsedidUpdateToLocation; // @synthesize dontUsedidUpdateToLocation=_dontUsedidUpdateToLocation;
@property(nonatomic) _Bool sigLocChangeAvailable; // @synthesize sigLocChangeAvailable=_sigLocChangeAvailable;
@property(nonatomic) _Bool fullLocationUpdatesEnabled; // @synthesize fullLocationUpdatesEnabled=_fullLocationUpdatesEnabled;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;	// IMP=0x0000000101153058
- (void)dealloc;	// IMP=0x0000000101152c68
- (_Bool)registerLocationServicesWithPrompt:(_Bool)arg1;	// IMP=0x000000010115265c
- (void)willTerm;	// IMP=0x00000001011524f4
- (void)willEnterForeground;	// IMP=0x00000001011523bc
- (void)didEnterBackground;	// IMP=0x0000000101152284
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000101151e44
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000101151d4c
- (void)updateLocation:(id)arg1;	// IMP=0x0000000101151b48
- (id)init;	// IMP=0x0000000101151a78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

