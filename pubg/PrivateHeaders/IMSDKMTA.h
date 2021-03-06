//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKMTAMainServiceDelegate.h"

@class NSString;

@interface IMSDKMTA : NSObject <IMSDKMTAMainServiceDelegate>
{
    struct dispatch_queue_s *task_queue;	// 8 = 0x8
    NSString *_keyForKeyChain;	// 16 = 0x10
    NSString *_mtaCurrentPage;	// 24 = 0x18
    NSString *_lastPage;	// 32 = 0x20
}

+ (void)sendEvent:(id)arg1 withCachedEvent:(int)arg2;	// IMP=0x000000010064ed14
+ (void)reportSessionEvent:(id)arg1 isRealTime:(_Bool)arg2;	// IMP=0x000000010064ebd8
+ (id)getMtaUDID;	// IMP=0x000000010064eb7c
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;	// IMP=0x000000010064e9a8
+ (void)trackGameUser:(id)arg1 world:(id)arg2 level:(id)arg3;	// IMP=0x000000010064e934
+ (void)reportAppMonitorStat:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;	// IMP=0x000000010064e7a0
+ (void)reportAppMonitorStat:(id)arg1;	// IMP=0x000000010064e78c
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3 appkey:(id)arg4 isRealTime:(_Bool)arg5;	// IMP=0x000000010064e4fc
+ (void)reportAccount:(id)arg1 type:(unsigned int)arg2 ext:(id)arg3;	// IMP=0x000000010064e49c
+ (void)reportQQ:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;	// IMP=0x000000010064e378
+ (void)reportQQ:(id)arg1;	// IMP=0x000000010064e364
+ (void)stopSession;	// IMP=0x000000010064e330
+ (void)startNewSession:(_Bool)arg1;	// IMP=0x000000010064e138
+ (void)startNewSession;	// IMP=0x000000010064e0cc
+ (void)trackCustomKeyValueEventDuration:(unsigned int)arg1 withEventid:(id)arg2 props:(id)arg3 appKey:(id)arg4 isRealTime:(_Bool)arg5;	// IMP=0x000000010064dee0
+ (void)trackCustomKeyValueEventDuration:(unsigned int)arg1 withEventid:(id)arg2 props:(id)arg3;	// IMP=0x000000010064de80
+ (void)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;	// IMP=0x000000010064db70
+ (void)trackCustomKeyValueEventEnd:(id)arg1 props:(id)arg2;	// IMP=0x000000010064db18
+ (void)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2 appkey:(id)arg3;	// IMP=0x000000010064d67c
+ (void)trackCustomKeyValueEventBegin:(id)arg1 props:(id)arg2;	// IMP=0x000000010064d628
+ (void)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;	// IMP=0x000000010064d44c
+ (void)trackCustomKeyValueEvent:(id)arg1 props:(id)arg2;	// IMP=0x000000010064d3f4
+ (void)trackCustomEventEnd:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;	// IMP=0x000000010064d0e4
+ (void)trackCustomEventEnd:(id)arg1 args:(id)arg2;	// IMP=0x000000010064d08c
+ (void)trackCustomEventBegin:(id)arg1 args:(id)arg2 appkey:(id)arg3;	// IMP=0x000000010064cca8
+ (void)trackCustomEventBegin:(id)arg1 args:(id)arg2;	// IMP=0x000000010064cc54
+ (void)trackCustomEvent:(id)arg1 args:(id)arg2 appkey:(id)arg3 isRealTime:(_Bool)arg4;	// IMP=0x000000010064ca8c
+ (void)trackCustomEvent:(id)arg1 args:(id)arg2;	// IMP=0x000000010064ca34
+ (void)trackError:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;	// IMP=0x000000010064c89c
+ (void)trackError:(id)arg1;	// IMP=0x000000010064c888
+ (void)trackException:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;	// IMP=0x000000010064c6a0
+ (void)trackException:(id)arg1;	// IMP=0x000000010064c68c
+ (void)trackActiveEnd;	// IMP=0x000000010064c318
+ (void)trackActiveBegin;	// IMP=0x000000010064c1e4
+ (void)resetTrackActiveStartTime;	// IMP=0x000000010064c120
+ (void)autoTrackActiveEnd;	// IMP=0x000000010064c0a4
+ (void)autoTrackActiveBegin;	// IMP=0x000000010064c018
+ (void)trackPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;	// IMP=0x000000010064bed4
+ (void)trackPageViewEnd:(id)arg1;	// IMP=0x000000010064bec0
+ (void)trackPageViewBegin:(id)arg1 appkey:(id)arg2;	// IMP=0x000000010064bd40
+ (void)trackPageViewBegin:(id)arg1;	// IMP=0x000000010064bd30
+ (void)trackDirectPageViewEnd:(id)arg1 appkey:(id)arg2 isRealTime:(_Bool)arg3;	// IMP=0x000000010064b870
+ (void)trackDirectPageViewBegin:(id)arg1 appkey:(id)arg2;	// IMP=0x000000010064b4a4
+ (void)commitCachedStats:(int)arg1;	// IMP=0x000000010064b3e8
+ (_Bool)startWithAppkey:(id)arg1 checkedSdkVersion:(id)arg2;	// IMP=0x000000010064b300
+ (void)startWithAppkey:(id)arg1;	// IMP=0x000000010064b034
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010064af7c
+ (id)getInstance;	// IMP=0x000000010064aef4
+ (void)load;	// IMP=0x000000010064a800
+ (_Bool)isEqualToMagic:(id)arg1;	// IMP=0x0000000100668df4
+ (id)filterBodyData:(id)arg1 configData:(id)arg2;	// IMP=0x0000000100668d50
+ (id)getSendData:(id)arg1;	// IMP=0x0000000100668cc8
+ (id)getMTAConfigIDFA;	// IMP=0x0000000100668c10
+ (id)getIDFV;	// IMP=0x0000000100668b84
+ (id)getBundleID;	// IMP=0x0000000100668af8
+ (id)getOpenUDID;	// IMP=0x0000000100668ae4
@property(retain, nonatomic) NSString *lastPage; // @synthesize lastPage=_lastPage;
@property(retain, nonatomic) NSString *mtaCurrentPage; // @synthesize mtaCurrentPage=_mtaCurrentPage;
@property(retain, nonatomic) NSString *keyForKeyChain; // @synthesize keyForKeyChain=_keyForKeyChain;
- (void).cxx_destruct;	// IMP=0x000000010064f008
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010064b030
- (struct dispatch_queue_s *)getTaskQueue;	// IMP=0x000000010064aee4
- (void)dealloc;	// IMP=0x000000010064ae98
- (void)onWillApplicationEnterBackground;	// IMP=0x000000010064ae2c
- (void)onWillApplicationEnterForeground;	// IMP=0x000000010064adc0
- (void)onDidApplicationBecomeActive;	// IMP=0x000000010064ac98
- (void)onWillApplicationResignActive;	// IMP=0x000000010064ab14
- (void)handleCrashReport;	// IMP=0x000000010064ab10
- (id)init;	// IMP=0x000000010064a804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

