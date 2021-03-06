//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconJceObjectV2.h"

@class NSData, NSString;

@interface BeaconWupDomainMonitor : BeaconJceObjectV2
{
    int _jcev2_p_11_r_protocolType;	// 8 = 0x8
    int _jcev2_p_12_r_respCode;	// 12 = 0xc
    NSString *_jcev2_p_0_o_apn;	// 16 = 0x10
    NSString *_jcev2_p_1_o_srcIp;	// 24 = 0x18
    NSString *_jcev2_p_2_o_destDomain;	// 32 = 0x20
    long long _jcev2_p_3_o_dnsTime;	// 40 = 0x28
    long long _jcev2_p_4_r_tcpTime;	// 48 = 0x30
    long long _jcev2_p_5_r_requestSendTime;	// 56 = 0x38
    long long _jcev2_p_6_r_netWaitTime;	// 64 = 0x40
    long long _jcev2_p_7_r_responseRecvReadTime;	// 72 = 0x48
    NSString *_jcev2_p_8_o_targetIp;	// 80 = 0x50
    NSString *_jcev2_p_9_o_dnsServerIp;	// 88 = 0x58
    long long _jcev2_p_10_r_testTime;	// 96 = 0x60
    NSData *_jcev2_p_13_o_respData;	// 104 = 0x68
    NSString *_jcev2_p_14_o_extendField;	// 112 = 0x70
}

+ (id)jceType;	// IMP=0x00000001007e69f8
@property(retain, nonatomic, getter=jce_extendField, setter=setJce_extendField:) NSString *jcev2_p_14_o_extendField; // @synthesize jcev2_p_14_o_extendField=_jcev2_p_14_o_extendField;
@property(retain, nonatomic, getter=jce_respData, setter=setJce_respData:) NSData *jcev2_p_13_o_respData; // @synthesize jcev2_p_13_o_respData=_jcev2_p_13_o_respData;
@property(nonatomic, getter=jce_respCode, setter=setJce_respCode:) int jcev2_p_12_r_respCode; // @synthesize jcev2_p_12_r_respCode=_jcev2_p_12_r_respCode;
@property(nonatomic, getter=jce_protocolType, setter=setJce_protocolType:) int jcev2_p_11_r_protocolType; // @synthesize jcev2_p_11_r_protocolType=_jcev2_p_11_r_protocolType;
@property(nonatomic, getter=jce_testTime, setter=setJce_testTime:) long long jcev2_p_10_r_testTime; // @synthesize jcev2_p_10_r_testTime=_jcev2_p_10_r_testTime;
@property(retain, nonatomic, getter=jce_dnsServerIp, setter=setJce_dnsServerIp:) NSString *jcev2_p_9_o_dnsServerIp; // @synthesize jcev2_p_9_o_dnsServerIp=_jcev2_p_9_o_dnsServerIp;
@property(retain, nonatomic, getter=jce_targetIp, setter=setJce_targetIp:) NSString *jcev2_p_8_o_targetIp; // @synthesize jcev2_p_8_o_targetIp=_jcev2_p_8_o_targetIp;
@property(nonatomic, getter=jce_responseRecvReadTime, setter=setJce_responseRecvReadTime:) long long jcev2_p_7_r_responseRecvReadTime; // @synthesize jcev2_p_7_r_responseRecvReadTime=_jcev2_p_7_r_responseRecvReadTime;
@property(nonatomic, getter=jce_netWaitTime, setter=setJce_netWaitTime:) long long jcev2_p_6_r_netWaitTime; // @synthesize jcev2_p_6_r_netWaitTime=_jcev2_p_6_r_netWaitTime;
@property(nonatomic, getter=jce_requestSendTime, setter=setJce_requestSendTime:) long long jcev2_p_5_r_requestSendTime; // @synthesize jcev2_p_5_r_requestSendTime=_jcev2_p_5_r_requestSendTime;
@property(nonatomic, getter=jce_tcpTime, setter=setJce_tcpTime:) long long jcev2_p_4_r_tcpTime; // @synthesize jcev2_p_4_r_tcpTime=_jcev2_p_4_r_tcpTime;
@property(nonatomic, getter=jce_dnsTime, setter=setJce_dnsTime:) long long jcev2_p_3_o_dnsTime; // @synthesize jcev2_p_3_o_dnsTime=_jcev2_p_3_o_dnsTime;
@property(retain, nonatomic, getter=jce_destDomain, setter=setJce_destDomain:) NSString *jcev2_p_2_o_destDomain; // @synthesize jcev2_p_2_o_destDomain=_jcev2_p_2_o_destDomain;
@property(retain, nonatomic, getter=jce_srcIp, setter=setJce_srcIp:) NSString *jcev2_p_1_o_srcIp; // @synthesize jcev2_p_1_o_srcIp=_jcev2_p_1_o_srcIp;
@property(retain, nonatomic, getter=jce_apn, setter=setJce_apn:) NSString *jcev2_p_0_o_apn; // @synthesize jcev2_p_0_o_apn=_jcev2_p_0_o_apn;
- (void).cxx_destruct;	// IMP=0x00000001007e6d1c
- (id)init;	// IMP=0x00000001007e68ec

@end

