//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdViewVideoControllerDelegate.h"
#import "GADMediationNativeAdVideoControllerDelegate.h"
#import "GADVideoControllerDelegate.h"
#import "GADVideoControlling.h"

@class NSString;

@interface GADVideoController : NSObject <GADAdViewVideoControllerDelegate, GADMediationNativeAdVideoControllerDelegate, GADVideoControllerDelegate, GADVideoControlling>
{
    id <GADVideoControllerDelegate> _delegate;	// 8 = 0x8
    id <GADVideoControlling> _internalVideoController;	// 16 = 0x10
}

@property(retain, nonatomic) id <GADVideoControlling> internalVideoController; // @synthesize internalVideoController=_internalVideoController;
@property(nonatomic) __weak id <GADVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100a085e8
- (void)videoControllerDidUnmuteVideo:(id)arg1;	// IMP=0x0000000100a08484
- (void)videoControllerDidMuteVideo:(id)arg1;	// IMP=0x0000000100a08364
- (void)videoControllerDidEndVideoPlayback:(id)arg1;	// IMP=0x0000000100a08244
- (void)videoControllerDidPauseVideo:(id)arg1;	// IMP=0x0000000100a08124
- (void)videoControllerDidPlayVideo:(id)arg1;	// IMP=0x0000000100a08004
- (void)mediationNativeAdVideoControllerDidEndVideoPlayback:(id)arg1;	// IMP=0x0000000100a07ff4
- (void)mediationNativeAdVideoControllerDidPauseVideo:(id)arg1;	// IMP=0x0000000100a07fe4
- (void)mediationNativeAdVideoControllerDidPlayVideo:(id)arg1;	// IMP=0x0000000100a07fd4
- (void)adViewVideoControllerDidUnmuteVideo:(id)arg1;	// IMP=0x0000000100a07fc4
- (void)adViewVideoControllerDidMuteVideo:(id)arg1;	// IMP=0x0000000100a07fb4
- (void)adViewVideoControllerDidEndVideoPlayback:(id)arg1;	// IMP=0x0000000100a07fa4
- (void)adViewVideoControllerDidPauseVideo:(id)arg1;	// IMP=0x0000000100a07f94
- (void)adViewVideoControllerDidPlayVideo:(id)arg1;	// IMP=0x0000000100a07f84
- (void)setInternalVideoControllerDelegate:(id)arg1;	// IMP=0x0000000100a07e90
- (_Bool)clickToExpandEnabled;	// IMP=0x0000000100a07e78
- (long long)videoPlaybackState;	// IMP=0x0000000100a07e60
- (_Bool)customControlsEnabled;	// IMP=0x0000000100a07e48
- (void)setInitialStateWithVideoOptions:(id)arg1;	// IMP=0x0000000100a07e30
- (double)aspectRatio;	// IMP=0x0000000100a07e18
- (_Bool)hasVideoContent;	// IMP=0x0000000100a07e00
- (void)setMute:(_Bool)arg1;	// IMP=0x0000000100a07de8
- (void)pause;	// IMP=0x0000000100a07dd0
- (void)play;	// IMP=0x0000000100a07db8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

