//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary, NSString;

@interface FBSDKLoginManagerLogger : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableDictionary *_extras;	// 16 = 0x10
    NSString *_lastResult;	// 24 = 0x18
    NSError *_lastError;	// 32 = 0x20
    NSString *_authMethod;	// 40 = 0x28
    NSString *_loggingToken;	// 48 = 0x30
}

+ (id)loggerFromParameters:(id)arg1;	// IMP=0x00000001006f2a74
- (void).cxx_destruct;	// IMP=0x00000001006f4630
- (void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3;	// IMP=0x00000001006f404c
- (void)logEvent:(id)arg1 params:(id)arg2;	// IMP=0x00000001006f3f58
- (id)_parametersForNewEvent;	// IMP=0x00000001006f3d94
- (id)clientStateForAuthMethod:(id)arg1 andExistingState:(id)arg2;	// IMP=0x00000001006f3bfc
- (void)logNativeAppDialogResult:(_Bool)arg1 dialogDuration:(double)arg2;	// IMP=0x00000001006f3a98
- (void)systemAuthDidShowDialog:(_Bool)arg1 isUnTOSedDevice:(_Bool)arg2;	// IMP=0x00000001006f3974
- (void)willAttemptAppSwitchingBehavior;	// IMP=0x00000001006f3728
- (id)parametersWithTimeStampAndClientState:(id)arg1 forAuthMethod:(id)arg2;	// IMP=0x00000001006f3508
- (void)endLoginWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000001006f3264
- (void)startAuthMethod:(id)arg1;	// IMP=0x00000001006f31d4
- (void)endSession;	// IMP=0x00000001006f31a4
- (void)startSessionForLoginManager:(id)arg1;	// IMP=0x00000001006f2d68
- (id)initWithLoggingToken:(id)arg1;	// IMP=0x00000001006f2c4c

@end

