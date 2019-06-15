//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSString;

@interface AWSS3DeleteObjectRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_MFA;	// 24 = 0x18
    long long _requestPayer;	// 32 = 0x20
    NSString *_versionId;	// 40 = 0x28
}

+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100bfd508
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfd434
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSString *MFA; // @synthesize MFA=_MFA;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100bfd690

@end

