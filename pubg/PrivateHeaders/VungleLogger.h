//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL, NSUserDefaults;

@interface VungleLogger : NSObject
{
    _Bool _paused;	// 8 = 0x8
    long long _loggingLevel;	// 16 = 0x10
    unsigned long long _maximumEntries;	// 24 = 0x18
    NSString *_userAgent;	// 32 = 0x20
    id <VungleLoggerDelegate> _delegate;	// 40 = 0x28
    NSString *_eventID;	// 48 = 0x30
    unsigned long long _numberOfEntries;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    NSString *_loggingUUID;	// 72 = 0x48
    NSString *_bundleID;	// 80 = 0x50
    NSMutableArray *_messageBuffer;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_loggerQueue;	// 96 = 0x60
    unsigned long long _messageBufferSize;	// 104 = 0x68
    NSUserDefaults *_defaults;	// 112 = 0x70
}

+ (id)eventIDFromAppID:(id)arg1;	// IMP=0x0000000100af51e4
+ (id)sharedLogger;	// IMP=0x0000000100af3018
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) unsigned long long messageBufferSize; // @synthesize messageBufferSize=_messageBufferSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(retain, nonatomic) NSMutableArray *messageBuffer; // @synthesize messageBuffer=_messageBuffer;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *loggingUUID; // @synthesize loggingUUID=_loggingUUID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long numberOfEntries; // @synthesize numberOfEntries=_numberOfEntries;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(getter=isPaused, setter=setIsPaused:) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <VungleLoggerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) unsigned long long maximumEntries; // @synthesize maximumEntries=_maximumEntries;
@property(nonatomic) long long loggingLevel; // @synthesize loggingLevel=_loggingLevel;
- (void).cxx_destruct;	// IMP=0x0000000100af550c
- (void)flushBuffer:(id)arg1;	// IMP=0x0000000100af4a78
- (_Bool)setupLogDirectoryStructure;	// IMP=0x0000000100af4770
- (void)setupSerialQueue;	// IMP=0x0000000100af470c
- (_Bool)moveLogFileToTempAndGenerateNew;	// IMP=0x0000000100af4590
- (id)tempLogFileURLWithLogName:(id)arg1;	// IMP=0x0000000100af4460
- (id)logFileURLWithLogName:(id)arg1;	// IMP=0x0000000100af43ac
@property(readonly, copy, nonatomic) NSURL *localTempLogURL;
@property(readonly, copy, nonatomic) NSURL *localLogURL;
@property(readonly, nonatomic) unsigned long long entryCount;
- (void)flush;	// IMP=0x0000000100af4254
- (void)clearTempLog:(id)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100af407c
- (void)clearLogWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100af3e10
- (void)logMessage:(id)arg1 level:(long long)arg2 context:(id)arg3;	// IMP=0x0000000100af3788
- (_Bool)kickstartWithError:(id *)arg1;	// IMP=0x0000000100af34c4
- (void)setupLoggerWithLoggingLevel:(long long)arg1 maximumEntries:(unsigned long long)arg2 name:(id)arg3 bufferSize:(unsigned long long)arg4 defaults:(id)arg5;	// IMP=0x0000000100af30dc

@end

