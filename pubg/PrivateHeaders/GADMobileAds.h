//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAudioVideoManager;

@interface GADMobileAds : NSObject
{
    _Bool _applicationMuted;	// 8 = 0x8
    float _applicationVolume;	// 12 = 0xc
    GADAudioVideoManager *_audioVideoManager;	// 16 = 0x10
}

+ (void)enableBackgroundAdLoading;	// IMP=0x00000001009f66b4
+ (void)disableSDKCrashReporting;	// IMP=0x00000001009f6668
+ (void)disableAutomatedInAppPurchaseReporting;	// IMP=0x00000001009f6620
+ (void)configureWithApplicationID:(id)arg1;	// IMP=0x00000001009f65a0
+ (id)sharedInstance;	// IMP=0x00000001009f6520
@property(retain, nonatomic) GADAudioVideoManager *audioVideoManager; // @synthesize audioVideoManager=_audioVideoManager;
@property(nonatomic) _Bool applicationMuted; // @synthesize applicationMuted=_applicationMuted;
@property(nonatomic) float applicationVolume; // @synthesize applicationVolume=_applicationVolume;
- (void).cxx_destruct;	// IMP=0x00000001009f691c
- (_Bool)isSDKVersionAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;	// IMP=0x00000001009f68b0
@property(readonly, nonatomic) float clampedApplicationVolume;
- (id)init;	// IMP=0x00000001009f66fc

@end
