//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface IMSDKAFSecurityPolicy : NSObject
{
    _Bool _validatesCertificateChain;	// 8 = 0x8
    _Bool _allowInvalidCertificates;	// 9 = 0x9
    _Bool _validatesDomainName;	// 10 = 0xa
    unsigned long long _SSLPinningMode;	// 16 = 0x10
    NSArray *_pinnedCertificates;	// 24 = 0x18
    NSArray *_pinnedPublicKeys;	// 32 = 0x20
}

+ (id)keyPathsForValuesAffectingPinnedPublicKeys;	// IMP=0x00000001005e8b48
+ (id)policyWithPinningMode:(unsigned long long)arg1;	// IMP=0x00000001005e7dc0
+ (id)defaultPolicy;	// IMP=0x00000001005e7d78
+ (id)defaultPinnedCertificates;	// IMP=0x00000001005e7aa0
@property(retain, nonatomic) NSArray *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(nonatomic) _Bool validatesDomainName; // @synthesize validatesDomainName=_validatesDomainName;
@property(nonatomic) _Bool allowInvalidCertificates; // @synthesize allowInvalidCertificates=_allowInvalidCertificates;
@property(retain, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) _Bool validatesCertificateChain; // @synthesize validatesCertificateChain=_validatesCertificateChain;
@property(nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
- (void).cxx_destruct;	// IMP=0x00000001005e8c08
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;	// IMP=0x00000001005e8240
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1;	// IMP=0x00000001005e8230
- (id)init;	// IMP=0x00000001005e7e50

@end
