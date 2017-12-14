//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSDoublyLinkedListNode, NSMutableDictionary;

@interface AVFSDoublyLinkedList : NSObject
{
    NSMutableDictionary *_dict;	// 8 = 0x8
    unsigned long long _totalBytes;	// 16 = 0x10
    unsigned long long _totalCount;	// 24 = 0x18
    AVFSDoublyLinkedListNode *_head;	// 32 = 0x20
    AVFSDoublyLinkedListNode *_tail;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001011bc5fc
- (id)allKeysAndValues;	// IMP=0x00000001011bc438
- (void)removeAllNodes;	// IMP=0x00000001011bc39c
- (id)removeTailNode;	// IMP=0x00000001011bc290
- (id)removeNode:(id)arg1;	// IMP=0x00000001011bc0e0
- (void)bringNodeToHead:(id)arg1;	// IMP=0x00000001011bbf74
- (void)insertNodeAtHead:(id)arg1;	// IMP=0x00000001011bbe84
- (id)init;	// IMP=0x00000001011bbe04

@end
