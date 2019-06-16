//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsCoreDevice.h"

@class CTCarrier, NSString;

@interface HsIOSCoreDevice : NSObject <HsCoreDevice>
{
    CTCarrier *_carrier;	// 8 = 0x8
    id <HSSDKDataDAO> _sdkDataDao;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001013dec68
- (void)setPushToken:(id)arg1;	// IMP=0x00000001013debe8
- (id)pushToken;	// IMP=0x00000001013deb34
- (id)apiVersion;	// IMP=0x00000001013deb08
- (int)descriptionMinimumLength;	// IMP=0x00000001013dea9c
- (id)SDKVersion;	// IMP=0x00000001013dea70
- (id)fallbackLoginId;	// IMP=0x00000001013dea44
- (id)timeStamp;	// IMP=0x00000001013de9d8
- (void)changeLanguage:(id)arg1;	// IMP=0x00000001013de9d4
- (id)language;	// IMP=0x00000001013de64c
- (id)country;	// IMP=0x00000001013de5ac
- (id)countryCode;	// IMP=0x00000001013de544
- (id)networkType;	// IMP=0x00000001013de4ac
- (id)allowsVOIP;	// IMP=0x00000001013de46c
- (id)carrierNetworkCode;	// IMP=0x00000001013de454
- (id)carrierISOCode;	// IMP=0x00000001013de43c
- (id)carrierCountryCode;	// IMP=0x00000001013de424
- (id)carrierName;	// IMP=0x00000001013de40c
- (id)diskSpace;	// IMP=0x00000001013de1c0
- (id)appName;	// IMP=0x00000001013de130
- (id)appVersion;	// IMP=0x00000001013de040
- (id)appIdentifier;	// IMP=0x00000001013ddfe4
- (id)platformName;	// IMP=0x00000001013ddfb8
- (id)batteryLevel;	// IMP=0x00000001013ddf10
- (id)batteryStatus;	// IMP=0x00000001013dddc8
- (id)OSVersion;	// IMP=0x00000001013ddd68
- (id)deviceMakeString;	// IMP=0x00000001013ddd08
- (id)deviceModel;	// IMP=0x00000001013ddca8
- (id)deviceUID;	// IMP=0x00000001013dda08
- (id)initWithPlatform:(id)arg1;	// IMP=0x00000001013dd8c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
