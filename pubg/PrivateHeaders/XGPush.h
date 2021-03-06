//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNUserNotificationCenterDelegate.h"
#import "XGPushApplicationDelegateInjectionProtocol.h"

@class NSMutableArray, NSString, XGNotificationConfigure;

@interface XGPush : NSObject <UNUserNotificationCenterDelegate, XGPushApplicationDelegateInjectionProtocol>
{
    XGNotificationConfigure *_notificationConfigure;	// 8 = 0x8
    NSMutableArray *_tpnsEventList;	// 16 = 0x10
    id <XGPushDelegate> _xgPushDelegate;	// 24 = 0x18
}

+ (void)startAppForMSDK:(unsigned int)arg1 appKey:(id)arg2 delegate:(id)arg3 domainOrIp:(id)arg4;	// IMP=0x00000001014f8858
+ (void)startAppForMSDK:(unsigned int)arg1 appKey:(id)arg2;	// IMP=0x00000001014f883c
+ (void)startAppForMSDK:(unsigned int)arg1 domainOrIp:(id)arg2;	// IMP=0x00000001014f8820
+ (void)startAppForMSDK:(unsigned int)arg1;	// IMP=0x00000001014f8804
+ (void)setReportURL:(id)arg1;	// IMP=0x00000001014f8794
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001014f502c
+ (id)defaultManager;	// IMP=0x00000001014f4f08
@property(nonatomic) __weak id <XGPushDelegate> xgPushDelegate; // @synthesize xgPushDelegate=_xgPushDelegate;
@property(retain, nonatomic) NSMutableArray *tpnsEventList; // @synthesize tpnsEventList=_tpnsEventList;
@property(retain, nonatomic) XGNotificationConfigure *notificationConfigure; // @synthesize notificationConfigure=_notificationConfigure;
- (void).cxx_destruct;	// IMP=0x00000001014f8c10
- (id)sdkVersion;	// IMP=0x00000001014f8b68
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001014f8550
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;	// IMP=0x00000001014f833c
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x00000001014f8160
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001014f8060
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001014f7ef4
- (id)checkConditionForXGPush;	// IMP=0x00000001014f7d88
- (void)registerNotificationForiOS8Earlier:(CDUnknownBlockType)arg1;	// IMP=0x00000001014f7c30
- (void)registerNotificationForiOS8To9:(CDUnknownBlockType)arg1;	// IMP=0x00000001014f799c
- (void)registerNotificationForiOS10Later:(CDUnknownBlockType)arg1;	// IMP=0x00000001014f74c0
- (void)registerAPNs:(CDUnknownBlockType)arg1;	// IMP=0x00000001014f73a8
- (void)reportXGNotificationInfo:(id)arg1;	// IMP=0x00000001014f68c8
- (void)deviceNotificationIsAllowed:(CDUnknownBlockType)arg1;	// IMP=0x00000001014f6680
- (void)reportXGNotificationResponse:(id)arg1;	// IMP=0x00000001014f6494
- (void)setBadge:(long long)arg1;	// IMP=0x00000001014f5f18
- (void)reportLocationWithLatitude:(double)arg1 longitude:(double)arg2;	// IMP=0x00000001014f5e5c
- (void)stopXGNotification;	// IMP=0x00000001014f5628
- (void)startXGWithAppID:(unsigned int)arg1 appKey:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001014f528c
@property(readonly, nonatomic) __weak id <XGPushDelegate> delegate;
@property(nonatomic) long long xgApplicationBadgeNumber;
@property(readonly) _Bool deviceDidRegisteredXG;
@property(readonly) _Bool xgNotificationStatus;
@property(getter=isEnableDebug) _Bool enableDebug;
- (id)mutableCopy;	// IMP=0x00000001014f507c
- (id)copy;	// IMP=0x00000001014f5054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

