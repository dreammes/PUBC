//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdViewDelegate.h"

@class GADAdAppViewController;

@interface GADAdAppAdViewDelegate : GADAdViewDelegate
{
    GADAdAppViewController *_adAppViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100a2baec
- (id)CSIForGMSGHandler:(id)arg1;	// IMP=0x0000000100a2ba74
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000100a2ba0c
- (void)adViewDidFinishLoad:(id)arg1;	// IMP=0x0000000100a2b8d0
- (void)adViewDidStartLoad:(id)arg1;	// IMP=0x0000000100a2b76c
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000100a2b5bc
- (id)initWithAdAppViewController:(id)arg1;	// IMP=0x0000000100a2b418

@end

