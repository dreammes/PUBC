//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdAppViewController.h"

@class NSString;

@interface GADInterstitialViewController : GADAdAppViewController
{
    NSString *_previousScreenName;	// 8 = 0x8
    NSString *_previousScreenClass;	// 16 = 0x10
    _Bool _hasSetScreenName;	// 24 = 0x18
    double _applicationBackgroundTimeIntervalSinceBoot;	// 32 = 0x20
    _Bool _presented;	// 40 = 0x28
}

@property(readonly, nonatomic) _Bool presented; // @synthesize presented=_presented;
- (void).cxx_destruct;	// IMP=0x0000000100a2f3b4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100a2f168
- (void)finishDismissal;	// IMP=0x0000000100a2f088
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a2efe8
- (void)finishAppearing;	// IMP=0x0000000100a2ec80
- (_Bool)isLoaded;	// IMP=0x0000000100a2ec30
- (_Bool)shouldDismissOnApplicationEnteringForeground;	// IMP=0x0000000100a2ea74
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a2e8a4
- (void)updateBackgroundTimeIntervalSinceBoot;	// IMP=0x0000000100a2e878
- (id)initWithAdView:(id)arg1;	// IMP=0x0000000100a2e860
- (id)initWithSlot:(id)arg1;	// IMP=0x0000000100a2e484

@end

