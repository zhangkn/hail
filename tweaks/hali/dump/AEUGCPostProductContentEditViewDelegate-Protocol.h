//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCPostProductContentEditView, NSString;

@protocol AEUGCPostProductContentEditViewDelegate <NSObject>

@optional
- (void)contentEditView:(AEUGCPostProductContentEditView *)arg1 didChangeHeight:(double)arg2;
- (void)contentEditView:(AEUGCPostProductContentEditView *)arg1 didChangeDescription:(NSString *)arg2;
- (void)contentEditViewDidEndDescriptionEditing:(AEUGCPostProductContentEditView *)arg1;
- (void)contentEditViewDidBeginDescriptionEditing:(AEUGCPostProductContentEditView *)arg1;
- (void)contentEditView:(AEUGCPostProductContentEditView *)arg1 didChangeTitle:(NSString *)arg2;
- (void)contentEditViewDidEndTitleEditing:(AEUGCPostProductContentEditView *)arg1;
- (void)contentEditViewDidBeginTitleEditing:(AEUGCPostProductContentEditView *)arg1;
@end

