//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBWTResponse.h"

@class NSString;

@interface ALBBWTInitMultipartUploadResponse : ALBBWTResponse
{
    NSString *_id;	// 40 = 0x28
    NSString *_dir;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_eTag;	// 64 = 0x40
    NSString *_uploadId;	// 72 = 0x48
    long long _partNumber;	// 80 = 0x50
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x00000001010c4b18
@property(nonatomic) long long partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *dir; // @synthesize dir=_dir;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;	// IMP=0x00000001010c4d80

@end

