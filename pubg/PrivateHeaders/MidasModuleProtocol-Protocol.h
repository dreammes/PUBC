//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MidasSDKLifecycleProtocol.h"

@class MidasContext;

@protocol MidasModuleProtocol <MidasSDKLifecycleProtocol>
+ (unsigned long long)moduleLevel;
+ (long long)modulePriority;
+ (_Bool)async;
- (void)moduleDidLoad:(MidasContext *)arg1;
@end

