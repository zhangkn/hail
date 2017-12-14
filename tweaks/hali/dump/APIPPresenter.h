//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class APIPDetailTableController, APIPRenderPopView, APIPRenderViewController, APIPScreenFrame, NSMutableArray, NSString, UINavigationController, UIView;

@interface APIPPresenter : NSObject <UIAlertViewDelegate>
{
    _Bool _popViewIsDismiss;	// 8 = 0x8
    APIPScreenFrame *_currentFrame;	// 16 = 0x10
    NSMutableArray *_framesArr;	// 24 = 0x18
    APIPRenderViewController *_renderViewController;	// 32 = 0x20
    UINavigationController *_navigationController;	// 40 = 0x28
    APIPRenderPopView *_popView;	// 48 = 0x30
    UIView *_maskView;	// 56 = 0x38
    APIPDetailTableController *_detailTableView;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000010110c460
@property(retain, nonatomic) APIPDetailTableController *detailTableView; // @synthesize detailTableView=_detailTableView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) APIPRenderPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) APIPRenderViewController *renderViewController; // @synthesize renderViewController=_renderViewController;
@property(retain, nonatomic) NSMutableArray *framesArr; // @synthesize framesArr=_framesArr;
@property(retain, nonatomic) APIPScreenFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(nonatomic) _Bool popViewIsDismiss; // @synthesize popViewIsDismiss=_popViewIsDismiss;
- (void).cxx_destruct;	// IMP=0x0000000101111a30
- (void)syncPerformBlockOnMainThread:(CDUnknownBlockType)arg1;	// IMP=0x0000000101111728
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001011113e8
- (_Bool)checkAllContrlValidContent;	// IMP=0x0000000101111230
- (void)unFocusAllContrls;	// IMP=0x00000001011110ec
- (_Bool)hasInputControlInCurrentScreen;	// IMP=0x0000000101110f3c
- (_Bool)focusOnFirstContrlOrName:(id)arg1 withTypes:(id)arg2;	// IMP=0x0000000101110ca8
- (void)checkInputAndButtonInScreen;	// IMP=0x00000001011109c4
- (void)showComboxDetailViewControllerWithInfo:(id)arg1;	// IMP=0x0000000101110818
- (void)showDetailTableViewWithItem:(id)arg1;	// IMP=0x0000000101110760
- (void)openWebWithParam:(id)arg1;	// IMP=0x000000010110feb4
- (void)resignFirstResponder;	// IMP=0x000000010110fe58
- (void)shiftFocus:(_Bool)arg1;	// IMP=0x000000010110fc1c
- (int)checkInputCount;	// IMP=0x000000010110facc
- (void)setImageName:(id)arg1 byName:(id)arg2;	// IMP=0x000000010110fa14
- (void)setValue:(id)arg1 forKey:(id)arg2 byName:(id)arg3;	// IMP=0x000000010110f980
- (void)clickedElementByName:(id)arg1;	// IMP=0x000000010110f934
- (id)getSubmitParamWithAction:(id)arg1;	// IMP=0x000000010110f8a8
- (void)hideCellByName:(id)arg1;	// IMP=0x000000010110f808
- (void)showCellByName:(id)arg1;	// IMP=0x000000010110f768
- (void)hideElementByName:(id)arg1;	// IMP=0x000000010110f71c
- (void)showElementByName:(id)arg1;	// IMP=0x000000010110f6d0
- (void)setFocus:(_Bool)arg1 byName:(id)arg2;	// IMP=0x000000010110f630
- (id)getCurrentFormName;	// IMP=0x000000010110f628
- (void)showErrorMessage:(id)arg1;	// IMP=0x000000010110f624
- (void)clearAndFocusElementByName:(id)arg1;	// IMP=0x000000010110f5a4
- (void)setChecked:(_Bool)arg1 byName:(id)arg2;	// IMP=0x000000010110f550
- (void)setText:(id)arg1 animateType:(id)arg2 byName:(id)arg3;	// IMP=0x000000010110f484
- (void)setText:(id)arg1 byName:(id)arg2;	// IMP=0x000000010110f3b4
- (id)getHintByName:(id)arg1;	// IMP=0x000000010110f3ac
- (void)setHint:(id)arg1 byName:(id)arg2;	// IMP=0x000000010110f334
- (id)getValueByName:(id)arg1;	// IMP=0x000000010110f32c
- (void)setValue:(id)arg1 byName:(id)arg2;	// IMP=0x000000010110f2b4
- (id)findControlByName:(id)arg1;	// IMP=0x000000010110f0f0
- (void)alertWithParam:(id)arg1;	// IMP=0x000000010110eed8
- (void)dismiss:(_Bool)arg1;	// IMP=0x000000010110ebc8
- (void)dismiss;	// IMP=0x000000010110eb7c
- (void)onSubmit;	// IMP=0x000000010110eb6c
- (void)back;	// IMP=0x000000010110eb60
- (void)pop;	// IMP=0x000000010110e338
- (void)clearInput;	// IMP=0x000000010110e1ac
- (void)clearUI;	// IMP=0x000000010110dbec
- (void)createPopView;	// IMP=0x000000010110daf8
- (void)removeMaskView;	// IMP=0x000000010110d978
- (void)showMaskView;	// IMP=0x000000010110d690
- (void)ceateDialogWithData:(id)arg1;	// IMP=0x000000010110d110
- (void)drawNewScreenWithData:(id)arg1;	// IMP=0x000000010110cb10
- (void)presentViewControllerOfPad:(id)arg1;	// IMP=0x000000010110c944
- (void)pushViewController:(id)arg1;	// IMP=0x000000010110c5a8
- (id)init;	// IMP=0x000000010110c4e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

