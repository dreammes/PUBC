//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3CompleteMultipartUploadOutput : AWSModel
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_ETag;	// 16 = 0x10
    NSString *_expiration;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_location;	// 40 = 0x28
    long long _requestCharged;	// 48 = 0x30
    NSString *_SSEKMSKeyId;	// 56 = 0x38
    long long _serverSideEncryption;	// 64 = 0x40
    NSString *_versionId;	// 72 = 0x48
}

+ (id)serverSideEncryptionJSONTransformer;	// IMP=0x0000000100bf80a0
+ (id)requestChargedJSONTransformer;	// IMP=0x0000000100bf7fc8
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bf7e9c
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(nonatomic) long long serverSideEncryption; // @synthesize serverSideEncryption=_serverSideEncryption;
@property(retain, nonatomic) NSString *SSEKMSKeyId; // @synthesize SSEKMSKeyId=_SSEKMSKeyId;
@property(nonatomic) long long requestCharged; // @synthesize requestCharged=_requestCharged;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *ETag; // @synthesize ETag=_ETag;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100bf8320

@end

