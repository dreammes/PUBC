//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3NotificationConfigurationDeprecated, NSString;

@interface AWSS3PutBucketNotificationRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_contentMD5;	// 16 = 0x10
    AWSS3NotificationConfigurationDeprecated *_notificationConfiguration;	// 24 = 0x18
}

+ (id)notificationConfigurationJSONTransformer;	// IMP=0x0000000100c0dbf4
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c0db48
@property(retain, nonatomic) AWSS3NotificationConfigurationDeprecated *notificationConfiguration; // @synthesize notificationConfiguration=_notificationConfiguration;
@property(retain, nonatomic) NSString *contentMD5; // @synthesize contentMD5=_contentMD5;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100c0dca4

@end

