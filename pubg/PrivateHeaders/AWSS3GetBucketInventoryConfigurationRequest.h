//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSString;

@interface AWSS3GetBucketInventoryConfigurationRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bff0d4
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100bff1b0

@end
