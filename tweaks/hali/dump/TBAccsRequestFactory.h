//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAccsRequestFactory : NSObject
{
}

+ (id)getAntiBrushCookies;	// IMP=0x000000010160b7e8
+ (id)getExtHeaderWithServiceFlag:(id)arg1 tag:(id)arg2 realExtHeader:(id *)arg3 iSInternal:(_Bool)arg4;	// IMP=0x000000010160b1ac
+ (id)getRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010160a950
+ (id)getRequestWithData:(id)arg1 identifier:(id)arg2 callBack:(CDUnknownBlockType)arg3 serviceId:(id)arg4 userId:(id)arg5 routID:(id)arg6 dataFlagType:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x000000010160a798
+ (id)getUnBindServiceIDRequestWithResultsBlock:(CDUnknownBlockType)arg1 identifier:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010160a404
+ (id)getBindServiceIDRequestWithResultsBlock:(CDUnknownBlockType)arg1 receviceDataBlock:(CDUnknownBlockType)arg2 identifier:(id)arg3 serviceID:(id)arg4 error:(id *)arg5;	// IMP=0x000000010160a050
+ (id)getUnBindUserRequestWithResultsBlock:(CDUnknownBlockType)arg1 identifier:(id)arg2 userID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000101609ccc
+ (id)getBindUserRequestWithResultsBlock:(CDUnknownBlockType)arg1 identifier:(id)arg2 userID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001016098a8
+ (id)getAckDataByEntity:(id)arg1 accsFlagAccsType:(unsigned long long)arg2;	// IMP=0x00000001016096fc
+ (id)getUnBindAppEntityWithResultsBlock:(CDUnknownBlockType)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101609500
+ (id)getInternalRequestWithServiceID:(id)arg1 userID:(id)arg2 parameters:(id)arg3 identifier:(id)arg4 callBack:(CDUnknownBlockType)arg5 receviceDataBlock:(CDUnknownBlockType)arg6 level:(unsigned long long)arg7 retryTime:(int)arg8 timeout:(long long)arg9 requestRetryTimeout:(double)arg10 accsSDKOperationTypeSF:(struct _AccsSDKOperationTypeSF)arg11 error:(id *)arg12;	// IMP=0x0000000101609110
+ (id)getBindAppRequestWithAppDeviceToken:(id)arg1 callBack:(CDUnknownBlockType)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x0000000101608a0c
+ (id)getSendDataByParameters:(id)arg1 dataID:(id)arg2 requestBaseParameters:(id)arg3 serviceID:(id)arg4 userID:(id)arg5 dataSegment:(id *)arg6 extHeader:(id *)arg7 error:(id *)arg8;	// IMP=0x0000000101608614

@end

