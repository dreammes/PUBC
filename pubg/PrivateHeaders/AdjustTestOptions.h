//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AdjustTestOptions : NSObject
{
    _Bool _teardown;	// 8 = 0x8
    _Bool _deleteState;	// 9 = 0x9
    NSString *_baseUrl;	// 16 = 0x10
    NSString *_gdprUrl;	// 24 = 0x18
    NSString *_basePath;	// 32 = 0x20
    NSString *_gdprPath;	// 40 = 0x28
    NSNumber *_timerIntervalInMilliseconds;	// 48 = 0x30
    NSNumber *_timerStartInMilliseconds;	// 56 = 0x38
    NSNumber *_sessionIntervalInMilliseconds;	// 64 = 0x40
    NSNumber *_subsessionIntervalInMilliseconds;	// 72 = 0x48
}

@property(nonatomic) _Bool deleteState; // @synthesize deleteState=_deleteState;
@property(nonatomic) _Bool teardown; // @synthesize teardown=_teardown;
@property(copy, nonatomic) NSNumber *subsessionIntervalInMilliseconds; // @synthesize subsessionIntervalInMilliseconds=_subsessionIntervalInMilliseconds;
@property(copy, nonatomic) NSNumber *sessionIntervalInMilliseconds; // @synthesize sessionIntervalInMilliseconds=_sessionIntervalInMilliseconds;
@property(copy, nonatomic) NSNumber *timerStartInMilliseconds; // @synthesize timerStartInMilliseconds=_timerStartInMilliseconds;
@property(copy, nonatomic) NSNumber *timerIntervalInMilliseconds; // @synthesize timerIntervalInMilliseconds=_timerIntervalInMilliseconds;
@property(copy, nonatomic) NSString *gdprPath; // @synthesize gdprPath=_gdprPath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy, nonatomic) NSString *gdprUrl; // @synthesize gdprUrl=_gdprUrl;
@property(copy, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;	// IMP=0x0000000100768064

@end

