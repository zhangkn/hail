//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class brandInfoItemDTO, storeInfoItemDTO;

@interface brandStoreItemDTO : NSObject
{
    brandInfoItemDTO *_brandInfo;	// 8 = 0x8
    storeInfoItemDTO *_storeInfo;	// 16 = 0x10
}

@property(retain, nonatomic) storeInfoItemDTO *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(retain, nonatomic) brandInfoItemDTO *brandInfo; // @synthesize brandInfo=_brandInfo;
- (void).cxx_destruct;	// IMP=0x0000000100c94758

@end

