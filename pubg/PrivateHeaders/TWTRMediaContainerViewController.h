//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIButton, UINavigationBar, UIViewController<TWTRMediaContainerPresentable>;

@interface TWTRMediaContainerViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _hideStatusBar;	// 8 = 0x8
    UIViewController<TWTRMediaContainerPresentable> *_mediaViewController;	// 16 = 0x10
    UINavigationBar *_topBarContainer;	// 24 = 0x18
    UIButton *_closeButton;	// 32 = 0x20
    struct CGRect _initialViewPosition;	// 40 = 0x28
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UINavigationBar *topBarContainer; // @synthesize topBarContainer=_topBarContainer;
@property(nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(nonatomic) struct CGRect initialViewPosition; // @synthesize initialViewPosition=_initialViewPosition;
@property(readonly, nonatomic) UIViewController<TWTRMediaContainerPresentable> *mediaViewController; // @synthesize mediaViewController=_mediaViewController;
- (void).cxx_destruct;	// IMP=0x000000010085c89c
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000010085c798
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010085c790
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000010085c3b0
- (void)showFromView:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010085c218
- (void)handleCloseButton;	// IMP=0x000000010085c15c
- (id)makeCloseButton;	// IMP=0x000000010085bf68
- (void)setChromeVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010085bd24
- (void)prepareTopBar;	// IMP=0x000000010085babc
- (void)embedMediaViewController;	// IMP=0x000000010085b8f0
- (void)viewDidLoad;	// IMP=0x000000010085b824
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010085b818
- (id)initWithMediaViewController:(id)arg1;	// IMP=0x000000010085b788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

