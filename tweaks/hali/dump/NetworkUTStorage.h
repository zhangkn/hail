//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBSDKLinkedMutableDictionary;

@interface NetworkUTStorage : NSObject
{
    TBSDKLinkedMutableDictionary *_TB_STD_NET_DB;	// 8 = 0x8
}

+ (id)shareInstance;	// IMP=0x00000001013ed28c
@property(retain, nonatomic) TBSDKLinkedMutableDictionary *TB_STD_NET_DB; // @synthesize TB_STD_NET_DB=_TB_STD_NET_DB;
- (void).cxx_destruct;	// IMP=0x00000001013ed55c
- (void)DELETE_NETWORK_DB:(id)arg1;	// IMP=0x00000001013ed4cc
- (id)GET_NETWORK_DB:(id)arg1;	// IMP=0x00000001013ed448
- (void)SET_NETWORK_DB:(id)arg1 withObjectKey:(id)arg2;	// IMP=0x00000001013ed310
- (id)init;	// IMP=0x00000001013ed1fc

@end

