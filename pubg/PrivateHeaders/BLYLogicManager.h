//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface BLYLogicManager : NSObject
{
    _Bool _enableAbortAction;	// 8 = 0x8
    NSOperationQueue *_queue;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _abortAfterCrashTimeout;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000010075cdac
@property(nonatomic) unsigned long long abortAfterCrashTimeout; // @synthesize abortAfterCrashTimeout=_abortAfterCrashTimeout;
@property(nonatomic) _Bool enableAbortAction; // @synthesize enableAbortAction=_enableAbortAction;
- (void).cxx_destruct;	// IMP=0x000000010075d81c
- (void)abortAfterSendingReportIfNeed;	// IMP=0x000000010075d6c0
- (void)executeEmergencyLogic:(id)arg1;	// IMP=0x000000010075d29c
- (void)addLogic:(id)arg1;	// IMP=0x000000010075d070
@property unsigned long long count; // @synthesize count=_count;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
- (id)init;	// IMP=0x000000010075ce2c

@end

