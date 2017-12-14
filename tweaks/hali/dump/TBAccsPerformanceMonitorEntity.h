//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBAccsPerformanceMonitorEntity : NSObject
{
    _Bool _ret;	// 8 = 0x8
    int _error_code;	// 12 = 0xc
    double _start_send_date;	// 16 = 0x10
    double _enter_queue_date;	// 24 = 0x18
    double _talk_date;	// 32 = 0x20
    double _send_date;	// 40 = 0x28
    double _receive_ack_date;	// 48 = 0x30
    double _to_bz_date;	// 56 = 0x38
    double _start_to_enter_queue_time;	// 64 = 0x40
    double _in_queue_time;	// 72 = 0x48
    double _talk_to_send_time;	// 80 = 0x50
    double _send_to_receive_time;	// 88 = 0x58
    double _receive_to_call_back_time;	// 96 = 0x60
    double _total_time;	// 104 = 0x68
    NSString *_accs_sdk_version;	// 112 = 0x70
    NSString *_device_id;	// 120 = 0x78
    NSString *_service_id;	// 128 = 0x80
    NSString *_data_id;	// 136 = 0x88
    NSString *_fail_reasons;	// 144 = 0x90
    NSString *_host;	// 152 = 0x98
    NSString *_accs_type;	// 160 = 0xa0
}

@property(retain, nonatomic) NSString *accs_type; // @synthesize accs_type=_accs_type;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *fail_reasons; // @synthesize fail_reasons=_fail_reasons;
@property(nonatomic) int error_code; // @synthesize error_code=_error_code;
@property(nonatomic) _Bool ret; // @synthesize ret=_ret;
@property(retain, nonatomic) NSString *data_id; // @synthesize data_id=_data_id;
@property(retain, nonatomic) NSString *service_id; // @synthesize service_id=_service_id;
@property(retain, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(retain, nonatomic) NSString *accs_sdk_version; // @synthesize accs_sdk_version=_accs_sdk_version;
@property(nonatomic) double total_time; // @synthesize total_time=_total_time;
@property(nonatomic) double receive_to_call_back_time; // @synthesize receive_to_call_back_time=_receive_to_call_back_time;
@property(nonatomic) double send_to_receive_time; // @synthesize send_to_receive_time=_send_to_receive_time;
@property(nonatomic) double talk_to_send_time; // @synthesize talk_to_send_time=_talk_to_send_time;
@property(nonatomic) double in_queue_time; // @synthesize in_queue_time=_in_queue_time;
@property(nonatomic) double start_to_enter_queue_time; // @synthesize start_to_enter_queue_time=_start_to_enter_queue_time;
@property(nonatomic) double to_bz_date; // @synthesize to_bz_date=_to_bz_date;
@property(nonatomic) double receive_ack_date; // @synthesize receive_ack_date=_receive_ack_date;
@property(nonatomic) double send_date; // @synthesize send_date=_send_date;
@property(nonatomic) double talk_date; // @synthesize talk_date=_talk_date;
@property(nonatomic) double enter_queue_date; // @synthesize enter_queue_date=_enter_queue_date;
@property(nonatomic) double start_send_date; // @synthesize start_send_date=_start_send_date;
- (void).cxx_destruct;	// IMP=0x000000010162b138

@end

