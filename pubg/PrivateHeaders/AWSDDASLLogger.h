//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSDDAbstractLogger.h"

#import "AWSDDLogger.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface AWSDDASLLogger : AWSDDAbstractLogger <AWSDDLogger>
{
    struct __asl_object_s *_client;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100bc07a4
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;	// IMP=0x0000000100bc08f8
- (id)init;	// IMP=0x0000000100bc0868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <AWSDDLogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

