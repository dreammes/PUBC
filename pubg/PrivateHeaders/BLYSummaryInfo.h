//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class NSDictionary, NSString;

@interface BLYSummaryInfo : BLYJceObjectV2
{
    BOOL jcev2_p_1_r_startType;	// 8 = 0x8
    _Bool jcev2_p_7_o_coldStart;	// 9 = 0x9
    long long jcev2_p_0_r_startTime;	// 16 = 0x10
    NSString *jcev2_p_2_o_userId;	// 24 = 0x18
    NSString *jcev2_p_3_o_proceName;	// 32 = 0x20
    NSString *jcev2_p_4_o_sessionId;	// 40 = 0x28
    NSDictionary *jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString;	// 48 = 0x30
    NSString *jcev2_p_6_o_gatewayIp;	// 56 = 0x38
}

+ (id)jceType;	// IMP=0x00000001007412e4
+ (void)initialize;	// IMP=0x00000001007411cc
@property(nonatomic, getter=jce_coldStart, setter=setJce_coldStart:) _Bool jcev2_p_7_o_coldStart; // @synthesize jcev2_p_7_o_coldStart;
@property(retain, nonatomic, getter=jce_gatewayIp, setter=setJce_gatewayIp:) NSString *jcev2_p_6_o_gatewayIp; // @synthesize jcev2_p_6_o_gatewayIp;
@property(retain, nonatomic, getter=jce_valueMap, setter=setJce_valueMap:) NSDictionary *jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_sessionId, setter=setJce_sessionId:) NSString *jcev2_p_4_o_sessionId; // @synthesize jcev2_p_4_o_sessionId;
@property(retain, nonatomic, getter=jce_proceName, setter=setJce_proceName:) NSString *jcev2_p_3_o_proceName; // @synthesize jcev2_p_3_o_proceName;
@property(retain, nonatomic, getter=jce_userId, setter=setJce_userId:) NSString *jcev2_p_2_o_userId; // @synthesize jcev2_p_2_o_userId;
@property(nonatomic, getter=jce_startType, setter=setJce_startType:) BOOL jcev2_p_1_r_startType; // @synthesize jcev2_p_1_r_startType;
@property(nonatomic, getter=jce_startTime, setter=setJce_startTime:) long long jcev2_p_0_r_startTime; // @synthesize jcev2_p_0_r_startTime;
- (void).cxx_destruct;	// IMP=0x0000000100741424
- (id)init;	// IMP=0x000000010074122c

@end

