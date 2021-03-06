//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSCognitoCredentialsProvider, GGAWSDeveloperAuthenticatedIdentityProvider;

@interface GGAWSCognitoManager : NSObject
{
    GGAWSDeveloperAuthenticatedIdentityProvider *_devAuth;	// 8 = 0x8
    AWSCognitoCredentialsProvider *_noAuth;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100c2e5b0
@property(retain, nonatomic) AWSCognitoCredentialsProvider *noAuth; // @synthesize noAuth=_noAuth;
@property(retain, nonatomic) GGAWSDeveloperAuthenticatedIdentityProvider *devAuth; // @synthesize devAuth=_devAuth;
- (void).cxx_destruct;	// IMP=0x0000000100c2f2fc
- (long long)regionTypeForString:(id)arg1;	// IMP=0x0000000100c2ee30
- (_Bool)initializeCognitoWithFacebookAuthentication;	// IMP=0x0000000100c2ebe0
- (_Bool)initializeCognitoWithDeveloperAuthentication;	// IMP=0x0000000100c2e898
- (_Bool)initializeCognito;	// IMP=0x0000000100c2e668

@end

