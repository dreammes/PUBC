//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController;

@interface GADAdViewState : NSObject
{
    UIView *_superview;	// 8 = 0x8
    id <GADAdViewDelegate> _delegate;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    unsigned long long _autoresizingMask;	// 32 = 0x20
    struct CGRect _frame;	// 40 = 0x28
}

@property(nonatomic) unsigned long long autoresizingMask; // @synthesize autoresizingMask=_autoresizingMask;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <GADAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *superview; // @synthesize superview=_superview;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;	// IMP=0x0000000100a11c04

@end

