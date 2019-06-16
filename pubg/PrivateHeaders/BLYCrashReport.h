//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLYThreadInfo, NSArray, NSException, NSString;

@interface BLYCrashReport : NSObject
{
    _Bool _crashHandling;	// 8 = 0x8
    _Bool _crashedDuringCrashHandling;	// 9 = 0x9
    NSString *_key;	// 16 = 0x10
    double _crashedTime;	// 24 = 0x18
    NSString *_crashCategory;	// 32 = 0x20
    long long _crashType;	// 40 = 0x28
    NSString *_crashName;	// 48 = 0x30
    NSString *_crashReason;	// 56 = 0x38
    NSString *_faultAddress;	// 64 = 0x40
    NSException *_uncaughtException;	// 72 = 0x48
    BLYThreadInfo *_crashedThread;	// 80 = 0x50
    NSArray *_threads;	// 88 = 0x58
    NSArray *_registers;	// 96 = 0x60
    NSArray *_images;	// 104 = 0x68
    NSString *_identifier;	// 112 = 0x70
}

+ (id)sharedReport;	// IMP=0x0000000100736a64
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSArray *registers; // @synthesize registers=_registers;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) BLYThreadInfo *crashedThread; // @synthesize crashedThread=_crashedThread;
@property(retain, nonatomic) NSException *uncaughtException; // @synthesize uncaughtException=_uncaughtException;
@property(copy, nonatomic) NSString *faultAddress; // @synthesize faultAddress=_faultAddress;
@property(copy, nonatomic) NSString *crashReason; // @synthesize crashReason=_crashReason;
@property(copy, nonatomic) NSString *crashName; // @synthesize crashName=_crashName;
@property(nonatomic) long long crashType; // @synthesize crashType=_crashType;
@property(copy, nonatomic) NSString *crashCategory; // @synthesize crashCategory=_crashCategory;
@property(nonatomic) double crashedTime; // @synthesize crashedTime=_crashedTime;
@property(nonatomic, getter=isCrashedDuringCrashHandling) _Bool crashedDuringCrashHandling; // @synthesize crashedDuringCrashHandling=_crashedDuringCrashHandling;
@property(nonatomic, getter=isHandlingCrash) _Bool crashHandling; // @synthesize crashHandling=_crashHandling;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x0000000100737034
- (id)threadState;	// IMP=0x0000000100736cec
- (void)setRegisterList:(id)arg1;	// IMP=0x0000000100736c70
- (void)setImageList:(id)arg1;	// IMP=0x0000000100736bf4
- (void)setThreadList:(id)arg1;	// IMP=0x0000000100736b78
- (id)init;	// IMP=0x0000000100736ae4

@end
