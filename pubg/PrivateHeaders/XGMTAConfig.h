//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XGMTAConfig : NSObject
{
    _Bool _debugEnable;	// 8 = 0x8
    _Bool _smartReporting;	// 9 = 0x9
    _Bool _statEnable;	// 10 = 0xa
    int _reportStrategy;	// 12 = 0xc
    NSString *_ifa;	// 16 = 0x10
    NSString *_appkey;	// 24 = 0x18
    unsigned long long _sessionTimeoutSecs;	// 32 = 0x20
    unsigned long long _maxStoreEventCount;	// 40 = 0x28
    unsigned long long _maxLoadEventCount;	// 48 = 0x30
    unsigned long long _minBatchReportCount;	// 56 = 0x38
    unsigned long long _maxSendRetryCount;	// 64 = 0x40
    unsigned long long _sendPeriodMinutes;	// 72 = 0x48
    unsigned long long _maxParallelTimingEvents;	// 80 = 0x50
    unsigned long long _maxReportEventLength;	// 88 = 0x58
    unsigned long long _maxSessionStatReportCount;	// 96 = 0x60
}

+ (id)getInstance;	// IMP=0x00000001014fac24
@property int reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(nonatomic) _Bool statEnable; // @synthesize statEnable=_statEnable;
@property(nonatomic) _Bool smartReporting; // @synthesize smartReporting=_smartReporting;
@property(nonatomic) _Bool debugEnable; // @synthesize debugEnable=_debugEnable;
@property(nonatomic) unsigned long long maxSessionStatReportCount; // @synthesize maxSessionStatReportCount=_maxSessionStatReportCount;
@property(nonatomic) unsigned long long maxReportEventLength; // @synthesize maxReportEventLength=_maxReportEventLength;
@property(nonatomic) unsigned long long maxParallelTimingEvents; // @synthesize maxParallelTimingEvents=_maxParallelTimingEvents;
@property(nonatomic) unsigned long long sendPeriodMinutes; // @synthesize sendPeriodMinutes=_sendPeriodMinutes;
@property(nonatomic) unsigned long long maxSendRetryCount; // @synthesize maxSendRetryCount=_maxSendRetryCount;
@property(nonatomic) unsigned long long minBatchReportCount; // @synthesize minBatchReportCount=_minBatchReportCount;
@property(nonatomic) unsigned long long maxLoadEventCount; // @synthesize maxLoadEventCount=_maxLoadEventCount;
@property(nonatomic) unsigned long long maxStoreEventCount; // @synthesize maxStoreEventCount=_maxStoreEventCount;
@property(nonatomic) unsigned long long sessionTimeoutSecs; // @synthesize sessionTimeoutSecs=_sessionTimeoutSecs;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *ifa; // @synthesize ifa=_ifa;
- (void).cxx_destruct;	// IMP=0x00000001014fae54
- (id)init;	// IMP=0x00000001014faab8

@end

