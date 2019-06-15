//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWSNetworkingRequestInterceptor.h"

@class AWSEndpoint, NSString;

@interface AWSSignatureV2Signer : NSObject <AWSNetworkingRequestInterceptor>
{
    id <AWSCredentialsProvider> _credentialsProvider;	// 8 = 0x8
    AWSEndpoint *_endpoint;	// 16 = 0x10
}

+ (id)signerWithCredentialsProvider:(id)arg1 endpoint:(id)arg2;	// IMP=0x0000000100bcd0c8
@property(retain, nonatomic) AWSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) id <AWSCredentialsProvider> credentialsProvider; // @synthesize credentialsProvider=_credentialsProvider;
- (void).cxx_destruct;	// IMP=0x0000000100bcd8a8
- (id)interceptRequest:(id)arg1;	// IMP=0x0000000100bcd204
- (id)initWithCredentialsProvider:(id)arg1 endpoint:(id)arg2;	// IMP=0x0000000100bcd14c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

