//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleAdContainerView.h"

@class UIButton;

@interface VungleDismissibleContainerView : VungleAdContainerView
{
    _Bool _dismissCloseButtonCalled;	// 16 = 0x10
    id <VungleDismissibleContainerViewDelegate> _delegate;	// 24 = 0x18
    UIButton *_closeButton;	// 32 = 0x20
}

@property(nonatomic) _Bool dismissCloseButtonCalled; // @synthesize dismissCloseButtonCalled=_dismissCloseButtonCalled;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <VungleDismissibleContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100adc9b8
- (void)closeButtonPressed;	// IMP=0x0000000100adc8a4
- (void)updateConstraints;	// IMP=0x0000000100adc6b8
- (void)setupCloseButton;	// IMP=0x0000000100adc5c0
- (void)dismissCloseButton;	// IMP=0x0000000100adc570
- (void)hideCloseButton;	// IMP=0x0000000100adc524
- (void)showCloseButton;	// IMP=0x0000000100adc508
- (void)didMoveToSuperview;	// IMP=0x0000000100adc28c
- (id)initWithContainedView:(id)arg1;	// IMP=0x0000000100adc1dc

@end

