//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3BucketLoggingStatus, NSString;

@interface AWSS3PutBucketLoggingRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    AWSS3BucketLoggingStatus *_bucketLoggingStatus;	// 16 = 0x10
    NSString *_contentMD5;	// 24 = 0x18
}

+ (id)bucketLoggingStatusJSONTransformer;	// IMP=0x0000000100c0d734
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0d688
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) AWSS3BucketLoggingStatus *bucketLoggingStatus; // @synthesize bucketLoggingStatus=_bucketLoggingStatus;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0d7e4

@end

