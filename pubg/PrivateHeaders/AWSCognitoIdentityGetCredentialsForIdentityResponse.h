//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSCognitoIdentityCredentials, NSString;

@interface AWSCognitoIdentityGetCredentialsForIdentityResponse : AWSModel
{
    AWSCognitoIdentityCredentials *_credentials;	// 8 = 0x8
    NSString *_identityId;	// 16 = 0x10
}

+ (id)credentialsJSONTransformer;	// IMP=0x0000000100bdec90
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bdebfc
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(retain, nonatomic) AWSCognitoIdentityCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;	// IMP=0x0000000100bded1c

@end
