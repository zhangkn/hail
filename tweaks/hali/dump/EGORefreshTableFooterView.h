//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEActivityIndicatorView;

@interface EGORefreshTableFooterView : UIView
{
    id _delegate;	// 8 = 0x8
    int _state;	// 16 = 0x10
    AEActivityIndicatorView *_activityView;	// 24 = 0x18
}

@property(nonatomic) __weak id <EGORefreshTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010088b4fc
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;	// IMP=0x000000010088b4b8
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;	// IMP=0x000000010088b318
- (void)egoRefreshScrollViewDidScroll:(id)arg1;	// IMP=0x000000010088b0f0
- (void)setState:(int)arg1;	// IMP=0x000000010088b084
- (void)refreshLastUpdatedDate;	// IMP=0x000000010088b080
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010088afcc
- (id)initWithFrame:(struct CGRect)arg1 arrowImageName:(id)arg2 textColor:(id)arg3;	// IMP=0x000000010088ad78

@end
