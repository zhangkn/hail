//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MtopExtResponse;

@interface FilterResult : NSObject
{
    int _action;	// 8 = 0x8
    MtopExtResponse *_response;	// 16 = 0x10
}

@property(retain, nonatomic) MtopExtResponse *response; // @synthesize response=_response;
@property(nonatomic) int action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x0000000101d38188
- (id)description;	// IMP=0x0000000101d38014

@end

