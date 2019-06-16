//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface GADMConfig : NSObject
{
    NSMutableArray *_adNetworkConfigs;	// 8 = 0x8
    _Bool _allowPublisherRenderedAttribution;	// 16 = 0x10
    double _refreshInterval;	// 24 = 0x18
    long long _bannerAnimationType;	// 32 = 0x20
    double _adNetworkTimeout;	// 40 = 0x28
    double _finalAdNetworkTimeout;	// 48 = 0x30
    long long _impressionDefinition;	// 56 = 0x38
    NSArray *_impressionURLs;	// 64 = 0x40
    NSArray *_downloadedImpressionURLs;	// 72 = 0x48
    NSArray *_clickURLs;	// 80 = 0x50
    NSArray *_noFillURLs;	// 88 = 0x58
    NSString *_qdata;	// 96 = 0x60
    NSString *_appKey;	// 104 = 0x68
    NSArray *_rewards;	// 112 = 0x70
    NSString *_defaultSlotSize;	// 120 = 0x78
    NSString *_defaultAdSize;	// 128 = 0x80
}

@property(readonly, copy, nonatomic) NSString *defaultAdSize; // @synthesize defaultAdSize=_defaultAdSize;
@property(readonly, copy, nonatomic) NSString *defaultSlotSize; // @synthesize defaultSlotSize=_defaultSlotSize;
@property(copy, nonatomic) NSArray *rewards; // @synthesize rewards=_rewards;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *qdata; // @synthesize qdata=_qdata;
@property(copy, nonatomic) NSArray *noFillURLs; // @synthesize noFillURLs=_noFillURLs;
@property(copy, nonatomic) NSArray *clickURLs; // @synthesize clickURLs=_clickURLs;
@property(copy, nonatomic) NSArray *downloadedImpressionURLs; // @synthesize downloadedImpressionURLs=_downloadedImpressionURLs;
@property(copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(readonly, nonatomic) _Bool allowPublisherRenderedAttribution; // @synthesize allowPublisherRenderedAttribution=_allowPublisherRenderedAttribution;
@property(readonly, nonatomic) long long impressionDefinition; // @synthesize impressionDefinition=_impressionDefinition;
@property(readonly, nonatomic) double finalAdNetworkTimeout; // @synthesize finalAdNetworkTimeout=_finalAdNetworkTimeout;
@property(readonly, nonatomic) double adNetworkTimeout; // @synthesize adNetworkTimeout=_adNetworkTimeout;
@property(nonatomic) long long bannerAnimationType; // @synthesize bannerAnimationType=_bannerAnimationType;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, copy, nonatomic) NSArray *adNetworkConfigs; // @synthesize adNetworkConfigs=_adNetworkConfigs;
- (void).cxx_destruct;	// IMP=0x00000001009a6c30
- (_Bool)parseConfig:(id)arg1 error:(id *)arg2;	// IMP=0x00000001009a65b0
- (_Bool)parseSettingsConfig:(id)arg1 error:(id *)arg2;	// IMP=0x00000001009a60b0
- (id)description;	// IMP=0x00000001009a5f64
- (id)init;	// IMP=0x00000001009a5f4c
- (id)initWithAppKey:(id)arg1 configDict:(id)arg2 error:(id *)arg3;	// IMP=0x00000001009a5d34

@end
