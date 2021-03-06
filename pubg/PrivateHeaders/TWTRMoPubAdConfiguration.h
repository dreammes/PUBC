//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPNativeAdRequestTargeting, MPStaticNativeAdRendererSettings, NSString;

@interface TWTRMoPubAdConfiguration : NSObject
{
    NSString *_adUnitID;	// 8 = 0x8
    NSString *_keywords;	// 16 = 0x10
    MPNativeAdRequestTargeting *_adRequestTargeting;	// 24 = 0x18
    MPStaticNativeAdRendererSettings *_adRendererSettings;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x000000010085878c
@property(readonly, nonatomic) MPStaticNativeAdRendererSettings *adRendererSettings; // @synthesize adRendererSettings=_adRendererSettings;
@property(readonly, nonatomic) MPNativeAdRequestTargeting *adRequestTargeting; // @synthesize adRequestTargeting=_adRequestTargeting;
@property(readonly, copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;	// IMP=0x0000000100859090
- (id)debugDescription;	// IMP=0x0000000100858f8c
- (id)description;	// IMP=0x0000000100858f18
- (_Bool)isEqualToConfig:(id)arg1;	// IMP=0x0000000100858df8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100858d78
- (unsigned long long)hash;	// IMP=0x0000000100858cec
- (id)keywordsWithAttribution;	// IMP=0x0000000100858c18
- (id)adRendererConfiguration;	// IMP=0x0000000100858b7c
- (void)setupMoPubClassesIfPossible;	// IMP=0x00000001008588e4
- (id)initWithAdUnitID:(id)arg1 keywords:(id)arg2;	// IMP=0x0000000100858800

@end

