//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdViewDelegate.h"

@class GADOpener, NSMutableArray, NSString;

@interface GADAdViewDelegate : NSObject <GADAdViewDelegate>
{
    NSMutableArray *_GMSGHandlers;	// 8 = 0x8
    _Bool _hasLoadedAtLeastOnce;	// 16 = 0x10
    GADOpener *_opener;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool hasLoadedAtLeastOnce; // @synthesize hasLoadedAtLeastOnce=_hasLoadedAtLeastOnce;
@property(readonly, nonatomic) GADOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;	// IMP=0x0000000100a186b4
- (id)CSIForGMSGHandler:(id)arg1;	// IMP=0x0000000100a1868c
- (void)adViewWebProcessDidTerminate:(id)arg1;	// IMP=0x0000000100a18610
- (void)adView:(id)arg1 didMoveToPlacement:(id)arg2;	// IMP=0x0000000100a18488
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000100a18484
- (_Bool)handlesClicks;	// IMP=0x0000000100a1847c
- (void)addGMSGHandler:(id)arg1;	// IMP=0x0000000100a18464
- (void)adViewDidFinishLoad:(id)arg1;	// IMP=0x0000000100a183c4
- (void)adViewDidStartLoad:(id)arg1;	// IMP=0x0000000100a183c0
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000100a18308
- (_Bool)adViewDelegateAdView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000100a17c04
- (_Bool)shouldTreatNavigationTypeAsClick:(long long)arg1;	// IMP=0x0000000100a17a98
- (void)handleDeeplinkPlusURL:(id)arg1;	// IMP=0x0000000100a17728
- (void)handleGMSGURL:(id)arg1 adView:(id)arg2;	// IMP=0x0000000100a17188
- (void)dealloc;	// IMP=0x0000000100a17104
- (id)init;	// IMP=0x0000000100a16cc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

