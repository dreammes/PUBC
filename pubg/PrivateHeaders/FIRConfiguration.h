//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRAnalyticsConfiguration;

@interface FIRConfiguration : NSObject
{
    FIRAnalyticsConfiguration *_analyticsConfiguration;	// 8 = 0x8
    long long _logLevel;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001008fcc74
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(retain, nonatomic) FIRAnalyticsConfiguration *analyticsConfiguration; // @synthesize analyticsConfiguration=_analyticsConfiguration;
- (void).cxx_destruct;	// IMP=0x00000001008fcdbc
- (void)setLoggerLevel:(long long)arg1;	// IMP=0x00000001008fcd80
- (id)init;	// IMP=0x00000001008fccf4

@end

