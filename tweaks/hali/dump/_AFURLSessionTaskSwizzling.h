//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _AFURLSessionTaskSwizzling : NSObject
{
}

+ (void)swizzleResumeAndSuspendMethodForClass:(Class)arg1;	// IMP=0x00000001008b3858
+ (void)load;	// IMP=0x00000001008b3680
- (void)af_suspend;	// IMP=0x00000001008b3a04
- (void)af_resume;	// IMP=0x00000001008b397c
- (long long)state;	// IMP=0x00000001008b3974

@end
