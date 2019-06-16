//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSSTSAssumedRoleUser, AWSSTSCredentials, NSNumber, NSString;

@interface AWSSTSAssumeRoleWithSAMLResponse : AWSModel
{
    AWSSTSAssumedRoleUser *_assumedRoleUser;	// 8 = 0x8
    NSString *_audience;	// 16 = 0x10
    AWSSTSCredentials *_credentials;	// 24 = 0x18
    NSString *_issuer;	// 32 = 0x20
    NSString *_nameQualifier;	// 40 = 0x28
    NSNumber *_packedPolicySize;	// 48 = 0x30
    NSString *_subject;	// 56 = 0x38
    NSString *_subjectType;	// 64 = 0x40
}

+ (id)credentialsJSONTransformer;	// IMP=0x0000000100bdcc1c
+ (id)assumedRoleUserJSONTransformer;	// IMP=0x0000000100bdcbd8
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdcab4
@property(retain, nonatomic) NSString *subjectType; // @synthesize subjectType=_subjectType;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSNumber *packedPolicySize; // @synthesize packedPolicySize=_packedPolicySize;
@property(retain, nonatomic) NSString *nameQualifier; // @synthesize nameQualifier=_nameQualifier;
@property(retain, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(retain, nonatomic) AWSSTSCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSString *audience; // @synthesize audience=_audience;
@property(retain, nonatomic) AWSSTSAssumedRoleUser *assumedRoleUser; // @synthesize assumedRoleUser=_assumedRoleUser;
- (void).cxx_destruct;	// IMP=0x0000000100bdcd80

@end
