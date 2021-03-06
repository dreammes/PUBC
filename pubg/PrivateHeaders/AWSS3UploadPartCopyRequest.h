//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSDate, NSNumber, NSString;

@interface AWSS3UploadPartCopyRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_replicateSource;	// 16 = 0x10
    NSString *_replicateSourceIfMatch;	// 24 = 0x18
    NSDate *_replicateSourceIfModifiedSince;	// 32 = 0x20
    NSString *_replicateSourceIfNoneMatch;	// 40 = 0x28
    NSDate *_replicateSourceIfUnmodifiedSince;	// 48 = 0x30
    NSString *_replicateSourceRange;	// 56 = 0x38
    NSString *_replicateSourceSSECustomerAlgorithm;	// 64 = 0x40
    NSString *_replicateSourceSSECustomerKey;	// 72 = 0x48
    NSString *_replicateSourceSSECustomerKeyMD5;	// 80 = 0x50
    NSString *_key;	// 88 = 0x58
    NSNumber *_partNumber;	// 96 = 0x60
    long long _requestPayer;	// 104 = 0x68
    NSString *_SSECustomerAlgorithm;	// 112 = 0x70
    NSString *_SSECustomerKey;	// 120 = 0x78
    NSString *_SSECustomerKeyMD5;	// 128 = 0x80
    NSString *_uploadId;	// 136 = 0x88
}

+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100c14144
+ (id)replicateSourceIfUnmodifiedSinceJSONTransformer;	// IMP=0x0000000100c140e4
+ (id)replicateSourceIfModifiedSinceJSONTransformer;	// IMP=0x0000000100c14084
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c13e9c
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSString *SSECustomerKeyMD5; // @synthesize SSECustomerKeyMD5=_SSECustomerKeyMD5;
@property(retain, nonatomic) NSString *SSECustomerKey; // @synthesize SSECustomerKey=_SSECustomerKey;
@property(retain, nonatomic) NSString *SSECustomerAlgorithm; // @synthesize SSECustomerAlgorithm=_SSECustomerAlgorithm;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSNumber *partNumber; // @synthesize partNumber=_partNumber;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *replicateSourceSSECustomerKeyMD5; // @synthesize replicateSourceSSECustomerKeyMD5=_replicateSourceSSECustomerKeyMD5;
@property(retain, nonatomic) NSString *replicateSourceSSECustomerKey; // @synthesize replicateSourceSSECustomerKey=_replicateSourceSSECustomerKey;
@property(retain, nonatomic) NSString *replicateSourceSSECustomerAlgorithm; // @synthesize replicateSourceSSECustomerAlgorithm=_replicateSourceSSECustomerAlgorithm;
@property(retain, nonatomic) NSString *replicateSourceRange; // @synthesize replicateSourceRange=_replicateSourceRange;
@property(retain, nonatomic) NSDate *replicateSourceIfUnmodifiedSince; // @synthesize replicateSourceIfUnmodifiedSince=_replicateSourceIfUnmodifiedSince;
@property(retain, nonatomic) NSString *replicateSourceIfNoneMatch; // @synthesize replicateSourceIfNoneMatch=_replicateSourceIfNoneMatch;
@property(retain, nonatomic) NSDate *replicateSourceIfModifiedSince; // @synthesize replicateSourceIfModifiedSince=_replicateSourceIfModifiedSince;
@property(retain, nonatomic) NSString *replicateSourceIfMatch; // @synthesize replicateSourceIfMatch=_replicateSourceIfMatch;
@property(retain, nonatomic) NSString *replicateSource; // @synthesize replicateSource=_replicateSource;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c1447c

@end

