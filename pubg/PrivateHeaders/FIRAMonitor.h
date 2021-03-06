//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRAASLLogger, FIRAMonitoringSampledData, NSObject<OS_dispatch_queue>, NSUserDefaults;

@interface FIRAMonitor : NSObject
{
    long long _logLevel;	// 8 = 0x8
    FIRAASLLogger *_logger;	// 16 = 0x10
    FIRAMonitoringSampledData *_monitoringSampledData;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_monitorQueue;	// 32 = 0x20
    long long _libraryVersion;	// 40 = 0x28
    NSUserDefaults *_monitorUserDefaults;	// 48 = 0x30
    long long _excludeBackupOnceToken;	// 56 = 0x38
    _Bool _debugModeEnabled;	// 64 = 0x40
    _Bool _encodeContexts;	// 65 = 0x41
}

+ (id)monitoringDataKeyWithMessage:(id)arg1 logLevel:(long long)arg2 libraryVersion:(long long)arg3;	// IMP=0x00000001008d2220
+ (id)lastFIRASymbolFromException:(id)arg1;	// IMP=0x00000001008d16bc
+ (id)encodedStringWithContextObject:(id)arg1;	// IMP=0x00000001008d1424
+ (id)stringWithLogMessage:(id)arg1 logLevel:(long long)arg2 contexts:(id)arg3 encodeContexts:(_Bool)arg4;	// IMP=0x00000001008d0f08
+ (id)encodedStringWithContextArray:(id)arg1 insertSpaces:(_Bool)arg2;	// IMP=0x00000001008d0cec
+ (_Bool)isMonitorableLevel:(long long)arg1;	// IMP=0x00000001008d0cc8
+ (_Bool)isSilentLevel:(long long)arg1;	// IMP=0x00000001008d0ca4
+ (id)logLevelDescriptionFromLogLevel:(long long)arg1;	// IMP=0x00000001008d09d4
@property(nonatomic) _Bool encodeContexts; // @synthesize encodeContexts=_encodeContexts;
@property(nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
- (void).cxx_destruct;	// IMP=0x00000001008d22b0
- (void)synchronizeToDiskOnMonitorQueue;	// IMP=0x00000001008d20f0
- (void)migrateMonitorDataOnMonitorQueue;	// IMP=0x00000001008d1ee0
- (void)saveMonitoringDataToUserDefaultsOnMonitorQueue;	// IMP=0x00000001008d1e58
- (void)insertOrUpdateMonitoringDataWithMessage:(id)arg1 encodedContext:(id)arg2 logLevel:(long long)arg3;	// IMP=0x00000001008d1c8c
- (void)logToConsole:(long long)arg1 message:(id)arg2 logLevel:(long long)arg3;	// IMP=0x00000001008d1b4c
- (_Bool)isLoggableLevel:(long long)arg1;	// IMP=0x00000001008d1af4
- (void)loadMonitoringDataFromUserDefaultsOnMonitorQueue;	// IMP=0x00000001008d1a1c
- (void)clearMonitoringData;	// IMP=0x00000001008d0878
- (id)monitoringDataForDispatchWithSamplePeriod:(double)arg1 lastSampledTimestamp:(double)arg2;	// IMP=0x00000001008d0694
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 contexts:(id)arg4;	// IMP=0x00000001008d04bc
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4 context:(id)arg5 context:(id)arg6;	// IMP=0x00000001008d02cc
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4 context:(id)arg5;	// IMP=0x00000001008d0138
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4;	// IMP=0x00000001008d0008
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3;	// IMP=0x00000001008cff60
- (void)setLogLevel:(long long)arg1;	// IMP=0x00000001008cfdd0
- (id)initWithLogLevel:(long long)arg1 logger:(id)arg2 libraryVersion:(long long)arg3;	// IMP=0x00000001008cfa78
- (id)initWithLibraryVersion:(long long)arg1;	// IMP=0x00000001008cf9fc

@end

