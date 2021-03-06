//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasKeyChainStore, NSMutableArray, NSMutableDictionary, NSString;

@interface MidasIapMonitorPersistance : NSObject
{
    MidasKeyChainStore *_keyChainStore;	// 8 = 0x8
    _Bool _forceTerminated;	// 16 = 0x10
    unsigned long long _homeTimes;	// 24 = 0x18
    NSString *_billNum;	// 32 = 0x20
    NSString *_transactionId;	// 40 = 0x28
    NSString *_productId;	// 48 = 0x30
    NSMutableArray *_currencies;	// 56 = 0x38
    NSMutableDictionary *_pairs;	// 64 = 0x40
    NSString *_appUserName;	// 72 = 0x48
}

+ (unsigned long long)getHomes:(id)arg1;	// IMP=0x00000001005b1958
+ (id)getTotalCurrency:(id)arg1;	// IMP=0x00000001005b1948
+ (id)getBillNo:(id)arg1;	// IMP=0x00000001005b1938
+ (id)getTransInfo:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001005b1858
+ (id)getTransInfo:(id)arg1;	// IMP=0x00000001005b16b0
+ (id)getBackupAppUserName:(id)arg1;	// IMP=0x00000001005b1604
+ (id)loadWithProductId:(id)arg1 appUserName:(id)arg2;	// IMP=0x00000001005b14d4
+ (id)persistance;	// IMP=0x00000001005b09a4
+ (id)persistanceWithProductId:(id)arg1 appUserName:(id)arg2;	// IMP=0x00000001005b0828
+ (id)loadPersistanceWithProductId:(id)arg1 appUserName:(id)arg2 transactionId:(id)arg3;	// IMP=0x00000001005aff7c
+ (id)loadPersistanceWithTransactionId:(id)arg1;	// IMP=0x00000001005afcb4
@property(nonatomic) _Bool forceTerminated; // @synthesize forceTerminated=_forceTerminated;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(readonly, nonatomic) NSMutableDictionary *pairs; // @synthesize pairs=_pairs;
@property(readonly, nonatomic) NSMutableArray *currencies; // @synthesize currencies=_currencies;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(retain, nonatomic) NSString *billNum; // @synthesize billNum=_billNum;
@property(nonatomic) unsigned long long homeTimes; // @synthesize homeTimes=_homeTimes;
- (void).cxx_destruct;	// IMP=0x00000001005b1a8c
- (id)key;	// IMP=0x00000001005b143c
- (id)totalCurrency;	// IMP=0x00000001005b10d8
- (void)remove;	// IMP=0x00000001005b0ed4
- (void)syncronize;	// IMP=0x00000001005b0abc
- (id)init;	// IMP=0x00000001005b09c8

@end

