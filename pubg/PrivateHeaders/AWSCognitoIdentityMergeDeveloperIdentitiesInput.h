//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSString;

@interface AWSCognitoIdentityMergeDeveloperIdentitiesInput : AWSRequest
{
    NSString *_destinationUserIdentifier;	// 8 = 0x8
    NSString *_developerProviderName;	// 16 = 0x10
    NSString *_identityPoolId;	// 24 = 0x18
    NSString *_sourceUserIdentifier;	// 32 = 0x20
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100be0744
@property(retain, nonatomic) NSString *sourceUserIdentifier; // @synthesize sourceUserIdentifier=_sourceUserIdentifier;
@property(retain, nonatomic) NSString *identityPoolId; // @synthesize identityPoolId=_identityPoolId;
@property(retain, nonatomic) NSString *developerProviderName; // @synthesize developerProviderName=_developerProviderName;
@property(retain, nonatomic) NSString *destinationUserIdentifier; // @synthesize destinationUserIdentifier=_destinationUserIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100be0898

@end

