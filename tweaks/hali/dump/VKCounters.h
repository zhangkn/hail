//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber;

@interface VKCounters : VKApiObject
{
    NSNumber *_friends;	// 8 = 0x8
    NSNumber *_messages;	// 16 = 0x10
    NSNumber *_photos;	// 24 = 0x18
    NSNumber *_videos;	// 32 = 0x20
    NSNumber *_notifications;	// 40 = 0x28
    NSNumber *_groups;	// 48 = 0x30
    NSNumber *_gifts;	// 56 = 0x38
    NSNumber *_events;	// 64 = 0x40
    NSNumber *_albums;	// 72 = 0x48
    NSNumber *_audios;	// 80 = 0x50
    NSNumber *_online_friends;	// 88 = 0x58
    NSNumber *_mutual_friends;	// 96 = 0x60
    NSNumber *_user_videos;	// 104 = 0x68
    NSNumber *_followers;	// 112 = 0x70
    NSNumber *_user_photos;	// 120 = 0x78
    NSNumber *_subscriptions;	// 128 = 0x80
    NSNumber *_documents;	// 136 = 0x88
    NSNumber *_topics;	// 144 = 0x90
    NSNumber *_pages;	// 152 = 0x98
}

@property(retain, nonatomic) NSNumber *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) NSNumber *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSNumber *documents; // @synthesize documents=_documents;
@property(retain, nonatomic) NSNumber *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(retain, nonatomic) NSNumber *user_photos; // @synthesize user_photos=_user_photos;
@property(retain, nonatomic) NSNumber *followers; // @synthesize followers=_followers;
@property(retain, nonatomic) NSNumber *user_videos; // @synthesize user_videos=_user_videos;
@property(retain, nonatomic) NSNumber *mutual_friends; // @synthesize mutual_friends=_mutual_friends;
@property(retain, nonatomic) NSNumber *online_friends; // @synthesize online_friends=_online_friends;
@property(retain, nonatomic) NSNumber *audios; // @synthesize audios=_audios;
@property(retain, nonatomic) NSNumber *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) NSNumber *events; // @synthesize events=_events;
@property(retain, nonatomic) NSNumber *gifts; // @synthesize gifts=_gifts;
@property(retain, nonatomic) NSNumber *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSNumber *notifications; // @synthesize notifications=_notifications;
@property(retain, nonatomic) NSNumber *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSNumber *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSNumber *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSNumber *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;	// IMP=0x000000010095c7ec

@end
