//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class NSArray;

@interface XGTpnsPushClientReq : XGJceObjectV2
{
    NSArray *jcev2_p_0_r_msgList__b0x9i_VOXGTpnsPushMsg;	// 8 = 0x8
    long long jcev2_p_1_r_timeUs;	// 16 = 0x10
}

+ (id)jceType;	// IMP=0x00000001014d5900
+ (void)initialize;	// IMP=0x00000001014d580c
@property(nonatomic, getter=jce_timeUs, setter=setJce_timeUs:) long long jcev2_p_1_r_timeUs; // @synthesize jcev2_p_1_r_timeUs;
@property(retain, nonatomic, getter=jce_msgList, setter=setJce_msgList:) NSArray *jcev2_p_0_r_msgList__b0x9i_VOXGTpnsPushMsg; // @synthesize jcev2_p_0_r_msgList__b0x9i_VOXGTpnsPushMsg;
- (void).cxx_destruct;	// IMP=0x00000001014d5970
- (id)init;	// IMP=0x00000001014d587c

@end

