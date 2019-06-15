//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstractModule.h"

#import "BLYReachabilitySubscription.h"

@class NSString;

@interface BLYEnvironmentInfo : BLYAbstractModule <BLYReachabilitySubscription>
{
    _Bool _didReceiveMemoryWarning;	// 8 = 0x8
    NSString *_networkAPN;	// 16 = 0x10
    unsigned long long _reachabilityState;	// 24 = 0x18
    long long _lastEvent;	// 32 = 0x20
    unsigned long long _receivedMemoryWarningCount;	// 40 = 0x28
    CDUnknownBlockType _lifecycleEventBlock;	// 48 = 0x30
}

+ (id)constructSelector;	// IMP=0x0000000100754e74
+ (id)sharedInfo;	// IMP=0x0000000100754c48
@property(copy, nonatomic) CDUnknownBlockType lifecycleEventBlock; // @synthesize lifecycleEventBlock=_lifecycleEventBlock;
@property(nonatomic) unsigned long long receivedMemoryWarningCount; // @synthesize receivedMemoryWarningCount=_receivedMemoryWarningCount;
@property(nonatomic) _Bool didReceiveMemoryWarning; // @synthesize didReceiveMemoryWarning=_didReceiveMemoryWarning;
@property(nonatomic) long long lastEvent; // @synthesize lastEvent=_lastEvent;
@property(nonatomic) unsigned long long reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(copy, nonatomic) NSString *networkAPN; // @synthesize networkAPN=_networkAPN;
- (void).cxx_destruct;	// IMP=0x00000001007558cc
- (void)applicationDidReceiveMemoryWarning:(id)arg1;	// IMP=0x0000000100755710
- (void)applicationWillTerminateHandler:(id)arg1;	// IMP=0x0000000100755648
- (void)applicationWillResignActiveHandler:(id)arg1;	// IMP=0x0000000100755580
- (void)applicationDidBecomeActiveHandler:(id)arg1;	// IMP=0x00000001007554b8
- (void)applicationDidFinishLaunchingHandler:(id)arg1;	// IMP=0x00000001007553f0
- (void)applicationWillEnterForegroundHandler:(id)arg1;	// IMP=0x0000000100755328
- (void)applicationDidEnterBackgroundHandler:(id)arg1;	// IMP=0x0000000100755260
- (void)registerApplicationLifeCycleEventsObserver;	// IMP=0x0000000100755048
- (void)postAppLifeCycleNotification:(long long)arg1;	// IMP=0x0000000100754ff0
- (void)subscribeForApplicationLifecycleEvents:(CDUnknownBlockType)arg1;	// IMP=0x0000000100754fe4
- (_Bool)isNetworkReachable;	// IMP=0x0000000100754fc0
- (_Bool)isWIFIAvailable;	// IMP=0x0000000100754f9c
- (void)reachability:(id)arg1 didChangeReachabilityState:(unsigned long long)arg2;	// IMP=0x0000000100754f8c
- (void)subscribeForReachability;	// IMP=0x0000000100754e80
- (_Bool)disableModule;	// IMP=0x0000000100754db8
- (_Bool)enableModule;	// IMP=0x0000000100754d2c
- (id)init;	// IMP=0x0000000100754cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

