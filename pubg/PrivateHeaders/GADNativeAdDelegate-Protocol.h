//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNativeAd;

@protocol GADNativeAdDelegate <NSObject>

@optional
- (void)nativeAdWillLeaveApplication:(GADNativeAd *)arg1;
- (void)nativeAdDidDismissScreen:(GADNativeAd *)arg1;
- (void)nativeAdWillDismissScreen:(GADNativeAd *)arg1;
- (void)nativeAdWillPresentScreen:(GADNativeAd *)arg1;
- (void)nativeAdDidRecordClick:(GADNativeAd *)arg1;
- (void)nativeAdDidRecordImpression:(GADNativeAd *)arg1;
@end

