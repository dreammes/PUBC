//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsCampaignsStorageFactory : NSObject
{
    id <HsProfileIdStorage> _profileIdStorage;	// 8 = 0x8
    id <HsPropertyStorage> _propertyStorage;	// 16 = 0x10
    id <HsSessionStorage> _sessionStorage;	// 24 = 0x18
    id <HsResponseStorage> _responseStorage;	// 32 = 0x20
    id <HsCampaignsStorage> _campaignsStorage;	// 40 = 0x28
    id <HsCampaignSyncModelStorage> _campaignsSyncModelStorage;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001014637d0
@property(retain, nonatomic) id <HsCampaignSyncModelStorage> campaignsSyncModelStorage; // @synthesize campaignsSyncModelStorage=_campaignsSyncModelStorage;
@property(retain, nonatomic) id <HsCampaignsStorage> campaignsStorage; // @synthesize campaignsStorage=_campaignsStorage;
@property(retain, nonatomic) id <HsResponseStorage> responseStorage; // @synthesize responseStorage=_responseStorage;
@property(retain, nonatomic) id <HsSessionStorage> sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(retain, nonatomic) id <HsPropertyStorage> propertyStorage; // @synthesize propertyStorage=_propertyStorage;
@property(retain, nonatomic) id <HsProfileIdStorage> profileIdStorage; // @synthesize profileIdStorage=_profileIdStorage;
- (void).cxx_destruct;	// IMP=0x0000000101463c28

@end

