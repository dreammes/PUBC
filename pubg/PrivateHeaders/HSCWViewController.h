//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface HSCWViewController : UIViewController
{
    long long _hsPreferredStatusBarStyle;	// 8 = 0x8
    UIView *_customView;	// 16 = 0x10
    long long __cwViewControllerSupportedInterfaceOrientation;	// 24 = 0x18
}

@property(nonatomic) long long _cwViewControllerSupportedInterfaceOrientation; // @synthesize _cwViewControllerSupportedInterfaceOrientation=__cwViewControllerSupportedInterfaceOrientation;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) long long hsPreferredStatusBarStyle; // @synthesize hsPreferredStatusBarStyle=_hsPreferredStatusBarStyle;
- (void).cxx_destruct;	// IMP=0x0000000101397044
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000101396f80
@property(nonatomic, setter=setSupportedInterfaceOrientations:) unsigned long long supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;	// IMP=0x0000000101396f5c

@end
