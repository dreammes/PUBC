//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKButton.h"

#import "FBSDKButtonImpressionTracking.h"
#import "FBSDKLiking.h"

@class FBSDKLikeActionController, NSString;

@interface FBSDKLikeButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKLiking>
{
    _Bool _isExplicitlyDisabled;	// 8 = 0x8
    FBSDKLikeActionController *_likeActionController;	// 16 = 0x10
    NSString *_objectID;	// 24 = 0x18
    unsigned long long _objectType;	// 32 = 0x20
    _Bool _soundEnabled;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000100724af0
@property(nonatomic, getter=isSoundEnabled) _Bool soundEnabled; // @synthesize soundEnabled=_soundEnabled;
- (void).cxx_destruct;	// IMP=0x0000000100725d20
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100725814
- (void)_setLikeActionController:(id)arg1;	// IMP=0x000000010072579c
- (void)_resetLikeActionController;	// IMP=0x0000000100725764
- (void)_likeActionControllerDidUpdateNotification:(id)arg1;	// IMP=0x0000000100725604
- (void)_likeActionControllerDidResetNotification:(id)arg1;	// IMP=0x00000001007255cc
- (void)_likeActionControllerDidDisableNotification:(id)arg1;	// IMP=0x00000001007255c0
- (void)_like:(id)arg1;	// IMP=0x0000000100725520
- (void)_handleTap:(id)arg1;	// IMP=0x000000010072541c
- (void)_ensureLikeActionController:(_Bool)arg1;	// IMP=0x0000000100725340
- (_Bool)isImplicitlyDisabled;	// IMP=0x00000001007252e0
- (void)configureButton;	// IMP=0x0000000100725008
- (id)impressionTrackingIdentifier;	// IMP=0x0000000100724ffc
- (id)impressionTrackingEventName;	// IMP=0x0000000100724fec
- (id)analyticsParameters;	// IMP=0x0000000100724d44
- (void)layoutSubviews;	// IMP=0x0000000100724cf0
@property(nonatomic) unsigned long long objectType;
@property(copy, nonatomic) NSString *objectID;
@property(retain, nonatomic) FBSDKLikeActionController *likeActionController;
- (void)dealloc;	// IMP=0x0000000100724b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
