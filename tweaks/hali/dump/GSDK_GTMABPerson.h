//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_GTMABRecord.h"

@interface GSDK_GTMABPerson : GSDK_GTMABRecord
{
}

+ (unsigned int)typeOfProperty:(int)arg1;	// IMP=0x00000001009281a8
+ (unsigned int)compositeNameFormat;	// IMP=0x00000001009281a4
+ (id)localizedPropertyName:(int)arg1;	// IMP=0x0000000100928184
+ (id)personWithFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x0000000100927e58
- (id)description;	// IMP=0x00000001009280c8
- (id)compositeName;	// IMP=0x00000001009280a0
- (id)imageData;	// IMP=0x0000000100928078
- (_Bool)setImage:(struct UIImage *)arg1;	// IMP=0x0000000100928044
- (struct UIImage *)image;	// IMP=0x0000000100928014
- (_Bool)setImageData:(id)arg1;	// IMP=0x0000000100927f74
- (id)init;	// IMP=0x0000000100927f10

@end

