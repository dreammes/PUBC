//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class MidasIAPUserInfo, MidasIapOrderInfo, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MidasIAPCache : NSObject <SKProductsRequestDelegate>
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSMutableSet *_pendingKeys;	// 16 = 0x10
    NSMutableArray *_pendingReq;	// 24 = 0x18
    NSMutableArray *_batchReq;	// 32 = 0x20
    NSMutableArray *_completionItems;	// 40 = 0x28
    MidasIAPUserInfo *_userInfo;	// 48 = 0x30
    MidasIapOrderInfo *_orderInfo;	// 56 = 0x38
    _Bool _enableCache;	// 64 = 0x40
}

@property(nonatomic) _Bool enableCache; // @synthesize enableCache=_enableCache;
- (void).cxx_destruct;	// IMP=0x0000000100590714
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001005900ac
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x000000010058f800
- (id)getReqObject:(id)arg1;	// IMP=0x000000010058f688
- (id)itemFromFailedReturn:(id)arg1 error:(id)arg2;	// IMP=0x000000010058f5c0
- (id)itemFromInvalidReturn:(id)arg1;	// IMP=0x000000010058f524
- (id)itemFromResp:(id)arg1;	// IMP=0x000000010058f45c
- (void)notify:(id)arg1;	// IMP=0x000000010058ef18
- (_Bool)isReqBatch:(id)arg1;	// IMP=0x000000010058edd4
- (_Bool)isKeyExsited:(id)arg1;	// IMP=0x000000010058ed58
- (_Bool)isKeyPending:(id)arg1;	// IMP=0x000000010058ed40
- (void)appendKeys:(id)arg1 orderInfo:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010058e500
- (void)getKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010058dd20
- (void)dealloc;	// IMP=0x000000010058dbc4
- (id)initWithCacheEnable:(_Bool)arg1;	// IMP=0x000000010058da24
- (id)init;	// IMP=0x000000010058d888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

