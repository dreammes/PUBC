//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIViewController;

@protocol GADMAdNetworkAdapter <NSObject>
+ (Class)networkExtrasClass;
+ (NSString *)adapterVersion;
- (void)presentInterstitialFromRootViewController:(UIViewController *)arg1;
- (void)stopBeingDelegate;
- (void)getInterstitial;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (id)initWithGADMAdNetworkConnector:(id <GADMAdNetworkConnector>)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;

@optional
- (void)changeAdSizeTo:(struct GADAdSize)arg1;
- (_Bool)handlesUserImpressions;
- (_Bool)handlesUserClicks;
- (void)getNativeAdWithAdTypes:(NSArray *)arg1 options:(NSArray *)arg2;
@end

