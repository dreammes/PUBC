//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"
#import "SKRequestDelegate.h"

@class NSArray, NSString, SKRequest;

@interface FStoreKitHelper : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver, SKRequestDelegate>
{
    SKRequest *Request;	// 8 = 0x8
    NSArray *AvailableProducts;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *AvailableProducts; // @synthesize AvailableProducts;
@property(retain, nonatomic) SKRequest *Request; // @synthesize Request;
- (void)restorePurchases;	// IMP=0x00000001019c00b0
- (void)request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001019c0008
- (void)requestDidFinish:(id)arg1;	// IMP=0x00000001019bff90
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001019bfe3c
- (void)makePurchase:(id)arg1;	// IMP=0x00000001019bfd78
- (void)requestProductData:(id)arg1;	// IMP=0x00000001019bfcb4
- (void)purchaseDeferred:(id)arg1;	// IMP=0x00000001019bfc50
- (void)purchaseInProgress:(id)arg1;	// IMP=0x00000001019bfbec
- (void)failedTransaction:(id)arg1;	// IMP=0x00000001019bf904
- (void)restoreTransaction:(id)arg1;	// IMP=0x00000001019bf5d4
- (void)completeTransaction:(id)arg1;	// IMP=0x00000001019bf2fc
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;	// IMP=0x00000001019bf058
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;	// IMP=0x00000001019beebc
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;	// IMP=0x00000001019bee58
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;	// IMP=0x00000001019beacc
- (void)dealloc;	// IMP=0x00000001019bea5c
- (id)init;	// IMP=0x00000001019bea28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

