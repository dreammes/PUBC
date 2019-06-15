//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSMutableArray, NSString;

@interface ADJActivityState : NSObject <NSCoding, NSCopying>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _isGdprForgotten;	// 9 = 0x9
    _Bool _askingAttribution;	// 10 = 0xa
    _Bool _updatePackages;	// 11 = 0xb
    _Bool _isPersisted;	// 12 = 0xc
    int _eventCount;	// 16 = 0x10
    int _sessionCount;	// 20 = 0x14
    int _subsessionCount;	// 24 = 0x18
    NSString *_uuid;	// 32 = 0x20
    NSString *_deviceToken;	// 40 = 0x28
    NSString *_adid;	// 48 = 0x30
    NSDictionary *_attributionDetails;	// 56 = 0x38
    double _timeSpent;	// 64 = 0x40
    double _lastActivity;	// 72 = 0x48
    double _sessionLength;	// 80 = 0x50
    NSMutableArray *_transactionIds;	// 88 = 0x58
    double _lastInterval;	// 96 = 0x60
}

+ (void)saveAppToken:(id)arg1;	// IMP=0x0000000100775b44
@property(nonatomic) double lastInterval; // @synthesize lastInterval=_lastInterval;
@property(nonatomic) _Bool isPersisted; // @synthesize isPersisted=_isPersisted;
@property(retain, nonatomic) NSMutableArray *transactionIds; // @synthesize transactionIds=_transactionIds;
@property(nonatomic) double sessionLength; // @synthesize sessionLength=_sessionLength;
@property(nonatomic) double lastActivity; // @synthesize lastActivity=_lastActivity;
@property(nonatomic) double timeSpent; // @synthesize timeSpent=_timeSpent;
@property(nonatomic) int subsessionCount; // @synthesize subsessionCount=_subsessionCount;
@property(nonatomic) int sessionCount; // @synthesize sessionCount=_sessionCount;
@property(nonatomic) int eventCount; // @synthesize eventCount=_eventCount;
@property(retain, nonatomic) NSDictionary *attributionDetails; // @synthesize attributionDetails=_attributionDetails;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(nonatomic) _Bool updatePackages; // @synthesize updatePackages=_updatePackages;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool askingAttribution; // @synthesize askingAttribution=_askingAttribution;
@property(nonatomic) _Bool isGdprForgotten; // @synthesize isGdprForgotten=_isGdprForgotten;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;	// IMP=0x000000010077700c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100776b68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100776854
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001007762bc
- (id)description;	// IMP=0x0000000100776170
- (id)generateUniqueKey;	// IMP=0x000000010077608c
- (void)assignUuidOldMethod:(id)arg1;	// IMP=0x0000000100775f08
- (void)assignUuid:(id)arg1;	// IMP=0x0000000100775ddc
- (_Bool)findTransactionId:(id)arg1;	// IMP=0x0000000100775d60
- (void)addTransactionId:(id)arg1;	// IMP=0x0000000100775c20
- (void)resetSessionAttributes:(double)arg1;	// IMP=0x0000000100775b9c
- (id)init;	// IMP=0x000000010077593c

@end

