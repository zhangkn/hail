//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBScanPlugin.h"

@interface TBScanBarcodeQRPlugin : TBScanPlugin
{
}

- (id)saveBarcodeQRImage:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000001017e3e14
- (struct CGRect)barcodeQRRect:(struct CGRect)arg1;	// IMP=0x00000001017e381c
- (void)onProcess:(id)arg1;	// IMP=0x00000001017e2c28
- (struct CGRect)convertCGRectFromViewCoordinates:(struct CGRect)arg1;	// IMP=0x00000001017e2a28

@end
