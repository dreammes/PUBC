//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class NSDictionary, NSString;

@interface BLYAppInfo : BLYJceObjectV2
{
    NSString *jcev2_p_0_r_name;	// 8 = 0x8
    NSString *jcev2_p_1_o_arch;	// 16 = 0x10
    NSString *jcev2_p_2_o_UUID;	// 24 = 0x18
    NSString *jcev2_p_3_o_baseAddr;	// 32 = 0x20
    NSString *jcev2_p_4_o_ver;	// 40 = 0x28
    NSDictionary *jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString;	// 48 = 0x30
}

+ (id)jceType;	// IMP=0x000000010073ec6c
+ (void)initialize;	// IMP=0x000000010073eb54
@property(retain, nonatomic, getter=jce_valueMap, setter=setJce_valueMap:) NSDictionary *jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_5_o_valueMap__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_ver, setter=setJce_ver:) NSString *jcev2_p_4_o_ver; // @synthesize jcev2_p_4_o_ver;
@property(retain, nonatomic, getter=jce_baseAddr, setter=setJce_baseAddr:) NSString *jcev2_p_3_o_baseAddr; // @synthesize jcev2_p_3_o_baseAddr;
@property(retain, nonatomic, getter=jce_UUID, setter=setJce_UUID:) NSString *jcev2_p_2_o_UUID; // @synthesize jcev2_p_2_o_UUID;
@property(retain, nonatomic, getter=jce_arch, setter=setJce_arch:) NSString *jcev2_p_1_o_arch; // @synthesize jcev2_p_1_o_arch;
@property(retain, nonatomic, getter=jce_name, setter=setJce_name:) NSString *jcev2_p_0_r_name; // @synthesize jcev2_p_0_r_name;
- (void).cxx_destruct;	// IMP=0x000000010073ed70
- (id)init;	// IMP=0x000000010073ebb4

@end

