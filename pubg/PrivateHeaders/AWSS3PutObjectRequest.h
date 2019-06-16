//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface AWSS3PutObjectRequest : AWSRequest
{
    long long _ACL;	// 8 = 0x8
    id _body;	// 16 = 0x10
    NSString *_bucket;	// 24 = 0x18
    NSString *_cacheControl;	// 32 = 0x20
    NSString *_contentDisposition;	// 40 = 0x28
    NSString *_contentEncoding;	// 48 = 0x30
    NSString *_contentLanguage;	// 56 = 0x38
    NSNumber *_contentLength;	// 64 = 0x40
    NSString *_contentMD5;	// 72 = 0x48
    NSString *_contentType;	// 80 = 0x50
    NSDate *_expires;	// 88 = 0x58
    NSString *_grantFullControl;	// 96 = 0x60
    NSString *_grantRead;	// 104 = 0x68
    NSString *_grantReadACP;	// 112 = 0x70
    NSString *_grantWriteACP;	// 120 = 0x78
    NSString *_key;	// 128 = 0x80
    NSDictionary *_metadata;	// 136 = 0x88
    long long _requestPayer;	// 144 = 0x90
    NSString *_SSECustomerAlgorithm;	// 152 = 0x98
    NSString *_SSECustomerKey;	// 160 = 0xa0
    NSString *_SSECustomerKeyMD5;	// 168 = 0xa8
    NSString *_SSEKMSKeyId;	// 176 = 0xb0
    long long _serverSideEncryption;	// 184 = 0xb8
    long long _storageClass;	// 192 = 0xc0
    NSString *_tagging;	// 200 = 0xc8
    NSString *_websiteRedirectLocation;	// 208 = 0xd0
}

+ (id)storageClassJSONTransformer;	// IMP=0x0000000100c0fd6c
+ (id)serverSideEncryptionJSONTransformer;	// IMP=0x0000000100c0fc28
+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100c0fb50
+ (id)expiresJSONTransformer;	// IMP=0x0000000100c0faf0
+ (id)ACLJSONTransformer;	// IMP=0x0000000100c0f82c
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0f578
@property(retain, nonatomic) NSString *websiteRedirectLocation; // @synthesize websiteRedirectLocation=_websiteRedirectLocation;
@property(retain, nonatomic) NSString *tagging; // @synthesize tagging=_tagging;
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(nonatomic) long long serverSideEncryption; // @synthesize serverSideEncryption=_serverSideEncryption;
@property(retain, nonatomic) NSString *SSEKMSKeyId; // @synthesize SSEKMSKeyId=_SSEKMSKeyId;
@property(retain, nonatomic) NSString *SSECustomerKeyMD5; // @synthesize SSECustomerKeyMD5=_SSECustomerKeyMD5;
@property(retain, nonatomic) NSString *SSECustomerKey; // @synthesize SSECustomerKey=_SSECustomerKey;
@property(retain, nonatomic) NSString *SSECustomerAlgorithm; // @synthesize SSECustomerAlgorithm=_SSECustomerAlgorithm;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *grantWriteACP; // @synthesize grantWriteACP=_grantWriteACP;
@property(retain, nonatomic) NSString *grantReadACP; // @synthesize grantReadACP=_grantReadACP;
@property(retain, nonatomic) NSString *grantRead; // @synthesize grantRead=_grantRead;
@property(retain, nonatomic) NSString *grantFullControl; // @synthesize grantFullControl=_grantFullControl;
@property(retain, nonatomic) NSDate *expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) NSString *contentLanguage; // @synthesize contentLanguage=_contentLanguage;
@property(retain, nonatomic) NSString *contentEncoding; // @synthesize contentEncoding=_contentEncoding;
@property(retain, nonatomic) NSString *contentDisposition; // @synthesize contentDisposition=_contentDisposition;
@property(retain, nonatomic) NSString *cacheControl; // @synthesize cacheControl=_cacheControl;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) id body; // @synthesize body=_body;
@property(nonatomic) long long ACL; // @synthesize ACL=_ACL;
- (void).cxx_destruct;	// IMP=0x0000000100c10294

@end
