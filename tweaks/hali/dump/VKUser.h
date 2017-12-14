//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSMutableArray, NSNumber, NSString, VKAudio, VKCity, VKCounters, VKCountry, VKExports, VKLastSeen, VKPersonal, VKPhotoArray, VKRelativities, VKSchools, VKUniversities;

@interface VKUser : VKApiObject
{
    _Bool _can_post;	// 8 = 0x8
    _Bool _can_see_all_posts;	// 9 = 0x9
    _Bool _status_loaded;	// 10 = 0xa
    _Bool _can_write_private_message;	// 11 = 0xb
    NSNumber *_id;	// 16 = 0x10
    NSString *_first_name;	// 24 = 0x18
    NSString *_last_name;	// 32 = 0x20
    NSString *_first_name_acc;	// 40 = 0x28
    NSString *_last_name_acc;	// 48 = 0x30
    NSString *_first_name_gen;	// 56 = 0x38
    NSString *_last_name_gen;	// 64 = 0x40
    NSString *_first_name_dat;	// 72 = 0x48
    NSString *_last_name_dat;	// 80 = 0x50
    NSString *_first_name_ins;	// 88 = 0x58
    NSString *_last_name_ins;	// 96 = 0x60
    VKPersonal *_personal;	// 104 = 0x68
    NSNumber *_sex;	// 112 = 0x70
    NSNumber *_invited_by;	// 120 = 0x78
    NSNumber *_online;	// 128 = 0x80
    NSString *_bdate;	// 136 = 0x88
    VKCity *_city;	// 144 = 0x90
    VKCountry *_country;	// 152 = 0x98
    NSMutableArray *_lists;	// 160 = 0xa0
    NSString *_screen_name;	// 168 = 0xa8
    NSNumber *_has_mobile;	// 176 = 0xb0
    NSNumber *_rate;	// 184 = 0xb8
    NSString *_mobile_phone;	// 192 = 0xc0
    NSString *_home_phone;	// 200 = 0xc8
    NSString *_status;	// 208 = 0xd0
    VKAudio *_status_audio;	// 216 = 0xd8
    VKLastSeen *_last_seen;	// 224 = 0xe0
    NSNumber *_relation;	// 232 = 0xe8
    VKUser *_relation_partner;	// 240 = 0xf0
    VKCounters *_counters;	// 248 = 0xf8
    NSString *_nickname;	// 256 = 0x100
    VKExports *_exports;	// 264 = 0x108
    NSNumber *_wall_comments;	// 272 = 0x110
    NSString *_phone;	// 280 = 0x118
    NSNumber *_online_mobile;	// 288 = 0x120
    NSNumber *_faculty;	// 296 = 0x128
    NSNumber *_university;	// 304 = 0x130
    VKUniversities *_universities;	// 312 = 0x138
    VKSchools *_schools;	// 320 = 0x140
    NSNumber *_graduation;	// 328 = 0x148
    NSNumber *_friendState;	// 336 = 0x150
    NSString *_faculty_name;	// 344 = 0x158
    NSString *_university_name;	// 352 = 0x160
    NSString *_books;	// 360 = 0x168
    NSString *_games;	// 368 = 0x170
    NSString *_interests;	// 376 = 0x178
    NSString *_movies;	// 384 = 0x180
    NSString *_tv;	// 392 = 0x188
    NSString *_about;	// 400 = 0x190
    NSString *_music;	// 408 = 0x198
    NSString *_quoutes;	// 416 = 0x1a0
    NSString *_activities;	// 424 = 0x1a8
    NSString *_photo_max;	// 432 = 0x1b0
    NSString *_photo_50;	// 440 = 0x1b8
    NSString *_photo_100;	// 448 = 0x1c0
    NSString *_photo_200;	// 456 = 0x1c8
    NSString *_photo_200_orig;	// 464 = 0x1d0
    NSString *_photo_400_orig;	// 472 = 0x1d8
    NSString *_photo_max_orig;	// 480 = 0x1e0
    VKPhotoArray *_photos;	// 488 = 0x1e8
    NSNumber *_photos_count;	// 496 = 0x1f0
    VKRelativities *_relatives;	// 504 = 0x1f8
    double _bdateIntervalSort;	// 512 = 0x200
    NSNumber *_verified;	// 520 = 0x208
    NSString *_deactivated;	// 528 = 0x210
    NSString *_site;	// 536 = 0x218
    NSString *_home_town;	// 544 = 0x220
    NSNumber *_blacklisted;	// 552 = 0x228
    NSNumber *_blacklisted_by_me;	// 560 = 0x230
    NSString *_twitter;	// 568 = 0x238
    NSString *_skype;	// 576 = 0x240
    NSString *_facebook;	// 584 = 0x248
    NSString *_livejournal;	// 592 = 0x250
    NSString *_wall_default;	// 600 = 0x258
    NSNumber *_followers_count;	// 608 = 0x260
}

@property(retain, nonatomic) NSNumber *followers_count; // @synthesize followers_count=_followers_count;
@property(retain, nonatomic) NSString *wall_default; // @synthesize wall_default=_wall_default;
@property(retain, nonatomic) NSString *livejournal; // @synthesize livejournal=_livejournal;
@property(retain, nonatomic) NSString *facebook; // @synthesize facebook=_facebook;
@property(retain, nonatomic) NSString *skype; // @synthesize skype=_skype;
@property(retain, nonatomic) NSString *twitter; // @synthesize twitter=_twitter;
@property(retain, nonatomic) NSNumber *blacklisted_by_me; // @synthesize blacklisted_by_me=_blacklisted_by_me;
@property(retain, nonatomic) NSNumber *blacklisted; // @synthesize blacklisted=_blacklisted;
@property(retain, nonatomic) NSString *home_town; // @synthesize home_town=_home_town;
@property(retain, nonatomic) NSString *site; // @synthesize site=_site;
@property(retain, nonatomic) NSString *deactivated; // @synthesize deactivated=_deactivated;
@property(retain, nonatomic) NSNumber *verified; // @synthesize verified=_verified;
@property(nonatomic) double bdateIntervalSort; // @synthesize bdateIntervalSort=_bdateIntervalSort;
@property(retain, nonatomic) VKRelativities *relatives; // @synthesize relatives=_relatives;
@property(retain, nonatomic) NSNumber *photos_count; // @synthesize photos_count=_photos_count;
@property(retain, nonatomic) VKPhotoArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSString *photo_max_orig; // @synthesize photo_max_orig=_photo_max_orig;
@property(retain, nonatomic) NSString *photo_400_orig; // @synthesize photo_400_orig=_photo_400_orig;
@property(retain, nonatomic) NSString *photo_200_orig; // @synthesize photo_200_orig=_photo_200_orig;
@property(retain, nonatomic) NSString *photo_200; // @synthesize photo_200=_photo_200;
@property(retain, nonatomic) NSString *photo_100; // @synthesize photo_100=_photo_100;
@property(retain, nonatomic) NSString *photo_50; // @synthesize photo_50=_photo_50;
@property(retain, nonatomic) NSString *photo_max; // @synthesize photo_max=_photo_max;
@property(retain, nonatomic) NSString *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) NSString *quoutes; // @synthesize quoutes=_quoutes;
@property(retain, nonatomic) NSString *music; // @synthesize music=_music;
@property(retain, nonatomic) NSString *about; // @synthesize about=_about;
@property(retain, nonatomic) NSString *tv; // @synthesize tv=_tv;
@property(retain, nonatomic) NSString *movies; // @synthesize movies=_movies;
@property(retain, nonatomic) NSString *interests; // @synthesize interests=_interests;
@property(retain, nonatomic) NSString *games; // @synthesize games=_games;
@property(retain, nonatomic) NSString *books; // @synthesize books=_books;
@property(retain, nonatomic) NSString *university_name; // @synthesize university_name=_university_name;
@property(retain, nonatomic) NSString *faculty_name; // @synthesize faculty_name=_faculty_name;
@property(retain, nonatomic) NSNumber *friendState; // @synthesize friendState=_friendState;
@property(retain, nonatomic) NSNumber *graduation; // @synthesize graduation=_graduation;
@property(retain, nonatomic) VKSchools *schools; // @synthesize schools=_schools;
@property(retain, nonatomic) VKUniversities *universities; // @synthesize universities=_universities;
@property(retain, nonatomic) NSNumber *university; // @synthesize university=_university;
@property(retain, nonatomic) NSNumber *faculty; // @synthesize faculty=_faculty;
@property(retain, nonatomic) NSNumber *online_mobile; // @synthesize online_mobile=_online_mobile;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(nonatomic) _Bool can_write_private_message; // @synthesize can_write_private_message=_can_write_private_message;
@property(retain, nonatomic) NSNumber *wall_comments; // @synthesize wall_comments=_wall_comments;
@property(retain, nonatomic) VKExports *exports; // @synthesize exports=_exports;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) VKCounters *counters; // @synthesize counters=_counters;
@property(retain, nonatomic) VKUser *relation_partner; // @synthesize relation_partner=_relation_partner;
@property(retain, nonatomic) NSNumber *relation; // @synthesize relation=_relation;
@property(retain, nonatomic) VKLastSeen *last_seen; // @synthesize last_seen=_last_seen;
@property(nonatomic) _Bool status_loaded; // @synthesize status_loaded=_status_loaded;
@property(retain, nonatomic) VKAudio *status_audio; // @synthesize status_audio=_status_audio;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) _Bool can_see_all_posts; // @synthesize can_see_all_posts=_can_see_all_posts;
@property(nonatomic) _Bool can_post; // @synthesize can_post=_can_post;
@property(retain, nonatomic) NSString *home_phone; // @synthesize home_phone=_home_phone;
@property(retain, nonatomic) NSString *mobile_phone; // @synthesize mobile_phone=_mobile_phone;
@property(retain, nonatomic) NSNumber *rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSNumber *has_mobile; // @synthesize has_mobile=_has_mobile;
@property(retain, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSMutableArray *lists; // @synthesize lists=_lists;
@property(retain, nonatomic) VKCountry *country; // @synthesize country=_country;
@property(retain, nonatomic) VKCity *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *bdate; // @synthesize bdate=_bdate;
@property(retain, nonatomic) NSNumber *online; // @synthesize online=_online;
@property(retain, nonatomic) NSNumber *invited_by; // @synthesize invited_by=_invited_by;
@property(retain, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) VKPersonal *personal; // @synthesize personal=_personal;
@property(retain, nonatomic) NSString *last_name_ins; // @synthesize last_name_ins=_last_name_ins;
@property(retain, nonatomic) NSString *first_name_ins; // @synthesize first_name_ins=_first_name_ins;
@property(retain, nonatomic) NSString *last_name_dat; // @synthesize last_name_dat=_last_name_dat;
@property(retain, nonatomic) NSString *first_name_dat; // @synthesize first_name_dat=_first_name_dat;
@property(retain, nonatomic) NSString *last_name_gen; // @synthesize last_name_gen=_last_name_gen;
@property(retain, nonatomic) NSString *first_name_gen; // @synthesize first_name_gen=_first_name_gen;
@property(retain, nonatomic) NSString *last_name_acc; // @synthesize last_name_acc=_last_name_acc;
@property(retain, nonatomic) NSString *first_name_acc; // @synthesize first_name_acc=_first_name_acc;
@property(retain, nonatomic) NSString *last_name; // @synthesize last_name=_last_name;
@property(retain, nonatomic) NSString *first_name; // @synthesize first_name=_first_name;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;	// IMP=0x000000010097daec

@end

